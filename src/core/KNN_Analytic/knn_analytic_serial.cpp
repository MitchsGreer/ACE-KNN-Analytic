//#include "knn_serial.h"
//#include "sample.h"
//#include "knn_result.h"
//#include "sample_set_iterator.h"
////





///*!
//*  Creates a new serial object with the KNNAnalytic as its parent.
//*
//*  @param parent The KNNAnalytic that is the serial parent.
//*/
//KNNAnalytic::Serial::Serial(KNNAnalytic* parent) : EAbstractAnalyticSerial(parent), _base(parent)
//{}





///*!
//*  Implements interface to carry out ther KNN algorithm, it reads the sample information
//*  off of the work block (Sample), carries out the algorithm and stores the resulting information
//*  into the result block (KNNresult).
//*
//*  @param block A pointer to the work block used to produce the results to be stored in the
//*         result block.
//*
//*  @return A pointer to the result block proiduced from the given result block
//*/
//std::unique_ptr<EAbstractAnalyticBlock> KNNAnalytic::Serial::execute(const EAbstractAnalyticBlock* block)
//{
//    const Sample * sample {block->cast<Sample>()};
//    std::unique_ptr<EAbstractAnalyticBlock> r(new KNNresult (block->index()));
//    KNNresult * result {r->cast<KNNresult>()};

//    result->_k = _base->_k;

//    for(int i = 0; i < _base->k(); i++)
//    {
//        result->_knnDists.push_back(0);
//        result->_knnIndicies.push_back(0);
//    }

//    KNN(sample->index(), result->_knnDists, result->_knnIndicies);

//    sort(result->_knnDists, result->_knnIndicies);

//    return r; //need to figure out how pass back the result
//}





///*!
//*  Implements interface to calculate the min of an array.
//*
//*  @param KNN_dists The array it is trying to find the min of.
//*
//*  @param index A pointer to the index of the min.
//*
//*  @return The value of the max at index.
//*/
//float KNNAnalytic::Serial::max(QVector<float> KNN_dists, int * index)
//{
//    double max = KNN_dists.at(0);
//    int j = 0;
//    if(max != 0)
//    {
//        for(int i = 1; i < KNN_dists.size(); i++)
//        {
//            if(KNN_dists[i] == 0)
//            {
//                max = KNN_dists[i];
//                j = i;
//                break;
//            }
//            if(KNN_dists[i] > max)
//            {
//                max = KNN_dists[i];
//                j = i;
//            }
//        }
//    }
//    *index = j;
//    return max;
//}





///*!
//*  Implements interface to calculate the KNN of a single sample reletive to the sample set, which
//*  is sitting on the disk.
//*
//*  @param index The index of the work block, this will help read the data.
//*
//*  @param columnsize The size of the one dimensional array we are going to read in.
//*
//*  @param KNN_dists The array storing the kth nearest distances from the sample.
//*
//*  @param KNN_indicies Tyhe array holding the indes information on the kth nearest neightbors.
//*/
//void KNNAnalytic::Serial::KNN(int index, QVector<float> &KNN_dists, QVector<float> &KNN_indicies)
//{
//    QVector<float> sample(readRow(index)); //does not like this
//    QVector<float> compare;
//    compare.resize(_base->_in->columnSize());
//    float sum = 0.0;

//    for(int i = 0; i < _base->in()->rowSize(); i++)
//    {
//        if(i != index)
//        {
//            compare = readRow(i);
//            sum = dist(sample, compare);
//            refreshTable(KNN_dists, KNN_indicies, sum, i);
//        }
//    }
//}





///*!
//*  Implements interface to calculate distance between two arrays using the taxi cab method.
//*
//*  @param sample One of the arrays we are going to find the distance between.
//*
//*  @param compare The other array we are going to find the distance between.
//*
//*  @return The distance between the arrays.
//*/
//double KNNAnalytic::Serial::dist(QVector<float> sample, QVector<float> compare)
//{
//    double sum = 0.0;
//    for(int j = 0; j < compare.size(); j++)
//    {
//        sum += abs(compare.at(j) - sample.at(j));
//    }
//    return sum;
//}





///*!
//*  Implements interface to refresh the KNN tables so we always have the kth nearest neighbors.
//*
//*  @param KNN_dists The array storing the kth nearest distances from the sample.
//*
//*  @param KNN_indicies Tyhe array holding the indes information on the kth nearest neightbors.
//*
//*  @param sum The distance between the two arrays calculated earlier.
//*
//*  @return The value of the index that was changed, or the (max + 1) index if no change was made.
//*/
//int KNNAnalytic::Serial::refreshTable(QVector<float> & KNNDists, QVector<float> & KNNIndicies, float sum, int index)
//{
//    double maxy = 0.0;
//    int k = 0;
//    maxy = max(KNNDists, &k);
//    if(sum < maxy || maxy == 0)
//    {
//        KNNDists[k] = sum;
//        KNNIndicies[k] = index;
//    }
//    return k;
//}





///*!
//*  Implements interface to read a one dimensional array from the data sitting on the disk.
//*
//*  @param index The index of the work block, used to calculate where to seek.
//*
//*  @param columnSize The size of the array we are going to atempt to read from the data sitting on the disk.
//*
//*  @return The array that we have just read from the disk.
//*/
//QVector<float> KNNAnalytic::Serial::readRow(int index)
//{

//    SampleSet::Iterator it(_base->_in);
//    QVector<float> sample(it.read(index));

//    return sample;
//}







///*!
//*  Implements interface to sort the distances, the lowest first, and the indicies based on what
//*  distance they were attatched to. I got the underlying merge sort code from:
//*
//*  https://codereview.stackexchange.com/questions/167680/merge-sort-implementation-with-vectors
//*
//*  on june 12 2019
//*
//*  @param distances The vector that holds the distances of the KNN.
//*
//*  @param indicies The vector that stores the indicies of the KNN.
//*/
//void KNNAnalytic::Serial::sort(QVector<float> & distances, QVector<float> & indicies)
//{
//    if (distances.size() <= 1) return;

//    int mid = distances.size() / 2;
//    QVector<float> left;
//    QVector<float> leftindicies;
//    QVector<float> right;
//    QVector<float> rightindicies;

//    for (int j = 0; j < mid; j++)
//    {
//        left.push_back(distances[j]);
//        leftindicies.push_back(indicies[j]);
//    }
//    for (int j = 0; j < (distances.size()) - mid; j++)
//    {
//        right.push_back(distances[mid + j]);
//        rightindicies.push_back(indicies[mid + j]);
//    }

//    sort(left, leftindicies);
//    sort(right, rightindicies);
//    mergeSort(left, right, distances, leftindicies, rightindicies, indicies);
//}





///*!
//*  Helper function for the merge sort sort function above.
//*
//*  @param left The vector that holds left part of the distances of the KNN.
//*
//*  @param right The vector that holds right part of the distances of the KNN
//*
//*  @param distances The vector that holds the distances of the KNN.
//*
//*  @param leftindicies The vector that holds left part of the indicies of the KNN.
//*
//*  @param rightindicies The vector that holds right part of the indicies of the KNN
//*/
//void KNNAnalytic::Serial::mergeSort(QVector<float>& left, QVector<float>& right, QVector<float>& distancess, QVector<float>& leftindicies, QVector<float>& rightindicies, QVector<float>& indicies)
//{
//    int nL = left.size();
//    int nR = right.size();
//    int i = 0, j = 0, k = 0;

//    while (j < nL && k < nR)
//    {
//        if (left[j] < right[k])
//        {
//            distancess[i] = left[j];
//            indicies[i] = leftindicies[j];
//            j++;
//        }
//        else
//        {
//            distancess[i] = right[k];
//            indicies[i] = rightindicies[k];
//            k++;
//        }
//        i++;
//    }
//    while (j < nL)
//    {
//        distancess[i] = left[j];
//        indicies[i] = leftindicies[j];
//        j++; i++;
//    }
//    while (k < nR)
//    {
//        distancess[i] = right[k];
//        indicies[i] = rightindicies[k];
//        k++; i++;
//    }
//}
