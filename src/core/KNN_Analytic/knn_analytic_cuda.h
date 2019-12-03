//#ifndef KNN_CUDA_H
//#define KNN_CUDA_H
//#include <ace/core/cudaxx.h>
//#include "knn_analytic.h"
//#include <QObject>
////





///*!
// * This implements the base CUDA class for its parent math transform analytic.
// */
//class KNNAnalytic::CUDA : public EAbstractAnalyticCUDA
//{
//   Q_OBJECT
//public:
//   class Kernel;
//   class Worker;
//   explicit CUDA(KNNAnalytic* parent);
//   virtual std::unique_ptr<EAbstractAnalyticCUDAWorker> makeWorker() override final;
//   virtual void initialize(::CUDA::Context* context) override final;
//private:
//   /*!
//    * Pointer to this object's parent math transform analytic.
//    */
//   KNNAnalytic* _base;
//   /*!
//    * Pointer to this object's base CUDA context used to create all other resources.
//    */
//   ::CUDA::Context* _context {nullptr};
//   /*!
//    * Pointer to this object's CUDA program.
//    */
//   ::CUDA::Program* _program {nullptr};
//};

//#endif // KNN_CUDA_H
