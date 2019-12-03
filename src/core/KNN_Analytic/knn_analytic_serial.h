//#ifndef KNNSERIAL_H
//#define KNNSERIAL_H
//#include <ace/core/core.h>
//#include "knn_analytic.h"
////





///*!
//*  Implements the serial worker class for its parrent KNNAnalytic.
//*/
//class KNNAnalytic::Serial : public EAbstractAnalyticSerial
//{
//   Q_OBJECT
//public:
//   explicit Serial(KNNAnalytic* parent);
//   virtual std::unique_ptr<EAbstractAnalyticBlock> execute(const EAbstractAnalyticBlock* block) override final;

//   /*!
//   *  Implements Some of the functions needed to complete the KNN computations.
//   */
//   float max(QVector<float> KNN_dists, int * index);
//   void KNN(int index, QVector<float> &KNN_dists, QVector<float> &KNN_indicies);
//   double dist(QVector<float> sample, QVector<float> compare);
//   int refreshTable(QVector<float> & KNNDists, QVector<float> & KNNIndicies, float sum, int index);
//   QVector<float> readRow(int index);
//   void sort(QVector<float> & distances, QVector<float> & indicies);
//   void mergeSort(QVector<float>& left, QVector<float>& right, QVector<float>& distancess, QVector<float>& leftindicies, QVector<float>& rightindicies, QVector<float>& indicies);

//private:
//   /*!
//   *  Pointer to the serials objects parent KNNAnalytic.
//   */
//   KNNAnalytic* _base;
//};

//#endif // KNNSERIAL_H
