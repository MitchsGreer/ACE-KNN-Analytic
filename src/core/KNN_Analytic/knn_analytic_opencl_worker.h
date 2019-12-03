//#ifndef KNNOPENCL_WORKER_H
//#define KNNOPENCL_WORKER_H
//#include "knn_analytic.h"
//#include "knn_analytic_opencl.h"
////





///*!
// * This implements the OpenCL worker, used to process the work blocks and produce a result block.
// */
//class KNNAnalytic::OpenCL::Worker : public EAbstractAnalyticOpenCLWorker
//{
//   Q_OBJECT
//public:
//   explicit Worker(KNNAnalytic* base, ::OpenCL::Context* context, ::OpenCL::Program* program);
//   virtual std::unique_ptr<EAbstractAnalyticBlock> execute(const EAbstractAnalyticBlock* block) override final;
//private:
//    /*!
//     * A pointer to the parent KNNAnalytic.
//     */
//   KNNAnalytic* _base;
//   /*!
//    * A pointer to this workers unique and private command queue.
//    */
//   ::OpenCL::CommandQueue* _queue;
//   /*!
//    * A pointer to this workers unique and private kernel.
//    */
//   OpenCL::Kernel* _kernel;
//   /*!
//    * A pointer to this workers unique and private memory buffer.
//    */
//   ::OpenCL::Buffer<SampleSet *> _buffer;
//};


//#endif // KNNOPENCL_WORKER_H
