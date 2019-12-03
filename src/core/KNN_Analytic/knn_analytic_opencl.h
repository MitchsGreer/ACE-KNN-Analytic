//#ifndef KNNOPENCL_H
//#define KNNOPENCL_H
//#include <ace/core/core.h>
//#include <ace/core/openclxx.h>
//#include "knn_analytic.h"
////





///*!
// * This implements the base OpenCL class for its parent KNNAnalytic.
// */
//class KNNAnalytic::OpenCL : public EAbstractAnalyticOpenCL
//{
//   Q_OBJECT
//public:
//   class Kernel;
//   class Worker;
//   explicit OpenCL(KNNAnalytic* parent);
//   virtual std::unique_ptr<EAbstractAnalyticOpenCLWorker> makeWorker() override final;
//   virtual void initialize(::OpenCL::Context* context) override final;
//private:
//   /*!
//    * Pointer to this object's parent math transform analytic.
//    */
//   KNNAnalytic* _base;
//   /*!
//    * Pointer to this object's base context, its used to initialize all other OpenCL resources
//    */
//   ::OpenCL::Context* _context {nullptr};
//   /*!
//    * Pointer to this object's OpenCL program.
//    */
//   ::OpenCL::Program* _program {nullptr};
//};

//#endif // KNNOPENCL_H
