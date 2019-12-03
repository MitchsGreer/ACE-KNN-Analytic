//#include "knn_analytic_opencl.h"
//#include "knn_analytic_opencl_worker.h"
////





///*!
// * This an interface to crate an OpenCl object.
// */
//KNNAnalytic::OpenCL::OpenCL(KNNAnalytic* parent):
//    EAbstractAnalyticOpenCL(parent),
//    _base(parent)
//{}





///*!
// * This an interface to crate an OpenCl::worker object. These process the work blocks and return a result block.
// *
// *  @return A pointer to an OpenCL worker object.
// */
//std::unique_ptr<EAbstractAnalyticOpenCLWorker> KNNAnalytic::OpenCL::makeWorker()
//{
//   return std::unique_ptr<EAbstractAnalyticOpenCLWorker>(new Worker(_base,_context,_program));
//}
////here i could pass it a column and a row and just have it compare those things, but
////then i would need to change the layout of my whole KNN because it would change what ace would
////need to process, i need to have the same number of things to process in both worker and serial





///*!
// * This an interface to initialize the OpenCL engine.
// *
// *  @param context A pointer to the context needed by the engine to initialize all other OpenCL resources.
// */
//void KNNAnalytic::OpenCL::initialize(::OpenCL::Context* context)
//{
//   _context = context;
//   _program = new ::OpenCL::Program(context,{":/opencl/KNNAnalytic.cl"},this);
//}

