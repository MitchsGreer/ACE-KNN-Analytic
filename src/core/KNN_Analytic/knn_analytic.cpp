//#include "knn_analytic.h"
//#include "knn_analytic_input.h"
//#include "sample.h"
//#include "knn_result.h"
//#include "knn_serial.h"
//#include "knn_analytic_opencl.h"
//#include "final_knn_iterator.h"
//#include "knn_cuda.h"
////





///*!
//*  Returns the amount of blocks that ACE has to work through as work blocks
//*  these will represent each sample. In this case we want to seperate the
//*  array into n rows so we only have to process one row at a time
//*/
//int KNNAnalytic::size() const
//{
//   return _in->rowSize();
//}





///*!
//*  Creates a block of work at the given index.
//*
//*  @param index The index at which the work block should be made.
//*/
//std::unique_ptr<EAbstractAnalyticBlock> KNNAnalytic::makeWork(int index) const
//{

//    return std::unique_ptr<EAbstractAnalyticBlock>(new Sample(index, _in->k()));
//}





///*!
//*  an interface to create uninitialized work blocks
//*
//*  @return a pointer to an uninitialized work block
//*/
//std::unique_ptr<EAbstractAnalyticBlock> KNNAnalytic::makeWork() const
//{
//    return std::unique_ptr<EAbstractAnalyticBlock>(new EAbstractAnalyticBlock());
//}





///*!
//*  an interface to create uninitialized result blocks
//*
//*  @return a pointer to an uninitialized result block
//*/
//std::unique_ptr<EAbstractAnalyticBlock> KNNAnalytic::makeResult() const
//{
//   return std::unique_ptr<EAbstractAnalyticBlock>(new EAbstractAnalyticBlock());
//}





///*!
//*  Implements an interface to store the results of the KNN calculation, it will write the
//*
//*  @return a pointer to an uninitialized result block
//*/
//void KNNAnalytic::process(const EAbstractAnalyticBlock* result)
//{
//    const KNNresult * res {result->cast<KNNresult>()};

//    _out->_rowSize = _in->rowSize() * 2;
//    _out->_columnSize = _k;
//    _out->_k = _k;

//    Finalknn::Iterator it(_out);

//    //writes the distances and then the indicies into the Finalknn
//    it.write(res->_knnDists, res->_knnIndicies, res->index());
//}





///*!
//*  an interface to create uninitialized input object
//*
//*  @return a pointer to an uninitialized input onject
//*/
//EAbstractAnalyticInput* KNNAnalytic::makeInput()
//{
//    return new Input(this);
//}





///*!
//*  an interface to create uninitialized serial object
//*
//*  @return a pointer to an uninitialized serial onject
//*/
//EAbstractAnalyticSerial* KNNAnalytic::makeSerial()
//{
//    return new Serial(this);
//}





///*!
//*  an interface to create uninitialized opencl object
//*
//*  @return a pointer to an uninitialized opencl onject
//*/
////EAbstractAnalyticOpenCL* KNNAnalytic::makeOpenCL()
////{
////    return new OpenCL(this);
////}





///*!
//*  An interface to create uninitialized CUDA object.
//*
//*  @return a pointer to an uninitialized CUDA onject.
//*/
////EAbstractAnalyticCUDA* KNNAnalytic::makeCUDA()
////{
////    return new CUDA(this);
////}





///*!
//*  This implements an interface to check the input of the KNNAnalytic.
//*  It is here where we are making sure that the _in is present.
//*/
//void KNNAnalytic::initialize()
//{
//    if ( !_in )
//    {
//      E_MAKE_EXCEPTION(e);
//      e.setTitle(tr("Invalid Argument"));
//      e.setDetails(tr("The required input data object was not set."));
//     throw e;
//    }
//}





///*!
//*  This implements an interface to check the output of the KNNAnalytic.
//*  It is here where we are making sure that the _out is present.
//*/
//void KNNAnalytic::initializeOutputs()
//{
//   if ( !_out )
//   {
//      E_MAKE_EXCEPTION(e);
//      e.setTitle(tr("Invalid Argument"));
//      e.setDetails(tr("The required output data object was not set."));
//      throw e;
//   }
//}




///*!
//*  This implements an interface that runs after the analytic is done, its used for any final steps.
//*/
//void KNNAnalytic::finish()
//{

//}





///*!
//*  This implements an interface to give the value of private member k.
//*
//* @return The value of k of type int.
//*/
//qint32 KNNAnalytic::k() const
//{
//    return _k;
//}





///*!
//*  This implements an interface to give the pointer of private member _in.
//*
//* @return The pointer to SampleSet _in.
//*/
//SampleSet * KNNAnalytic::in() const
//{
//    return _in;
//}
