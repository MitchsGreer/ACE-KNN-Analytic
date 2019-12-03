//#ifndef KNN_CUDA_WORKER_H
//#define KNN_CUDA_WORKER_H
//#include <ace/core/cudaxx.h>
//#include "knn_cuda.h"
//#include "knn_cuda_kernel.h"
////





//class KNNAnalytic::CUDA::Worker : public EAbstractAnalyticCUDAWorker
//{
//    Q_OBJECT
// public:
//    explicit Worker(KNNAnalytic* base, KNNAnalytic::CUDA* baseCuda, ::CUDA::Program* program);
//    virtual std::unique_ptr<EAbstractAnalyticBlock> execute(const EAbstractAnalyticBlock* block) override final;
// private:
//    /*!
//     * Pointer to this worker's math transform analytic.
//     */
//    KNNAnalytic* _base;
//    KNNAnalytic::CUDA* _baseCuda;
//    /*!
//     * Unique stream object for this worker.
//     */
//    ::CUDA::Stream _stream;
//    /*!
//     * Unique kernel object for this worker.
//     */
//    CUDA::Kernel _kernel;
//    /*!
//     * Unique row buffer for this worker.
//     */
//    ::CUDA::Buffer<float> _buffer;
//};

//#endif // KNN_CUDA_WORKER_H
