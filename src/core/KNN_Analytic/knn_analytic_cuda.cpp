//#include "knn_cuda.h"
//#include "knn_cuda_worker.h"
////





///*!
// * Implements the interface to create an uninitiualized new CUDA object.
// */
//KNNAnalytic::CUDA::CUDA(KNNAnalytic* parent) : EAbstractAnalyticCUDA(parent), _base(parent)
//{}





///*!
// * Implements the interface to create a new CUDA Worker, initializes it with the parent CUDA,
// * base analytic, and CUDA program.
// *
// * @return Pointer to a unique CUDA Worker.
// */
//std::unique_ptr<EAbstractAnalyticCUDAWorker> KNNAnalytic::CUDA::makeWorker()
//{
//    return std::unique_ptr<EAbstractAnalyticCUDAWorker>(new Worker(_base, this, _program));
//}





///*!
// * Implements the interface that initializes the CUDA, setting up its context and the program it will perform.
// */
//void KNNAnalytic::CUDA::initialize(::CUDA::Context* context)
//{
//    // Set this object's context pointer to the one given and then create this
//    // object's CUDA program.
//    _context = context;
//    _program = new ::CUDA::Program({},this);
//}
