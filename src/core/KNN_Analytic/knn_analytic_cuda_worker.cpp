//#include "knn_cuda_worker.h"
//#include "sample_set.h"
////





///*!
//*  Creates an initialized CUDA Worker.
//*
//* @param base The base analytic for the worker.
//*
//* @param baseCuda The bas CUDA for the worker.
//*
//* @param program The program for the worker to execute
//*/
//KNNAnalytic::CUDA::Worker::Worker(KNNAnalytic* base, KNNAnalytic::CUDA* baseCuda, ::CUDA::Program* program) :
//    _base(base),
//    _baseCuda(baseCuda),
//    _kernel(program),
//    _buffer(base->_in->columnSize())
//{}





///*!
//*  Executes the worker program.
//*
//* @param block The work block the worker uses as input when executing the program.
//*
//* @return The result block made by executing the workers program.
//*/
//std::unique_ptr<EAbstractAnalyticBlock> KNNAnalytic::CUDA::Worker::execute(const EAbstractAnalyticBlock* block)
//{
//    return nullptr;
//}
