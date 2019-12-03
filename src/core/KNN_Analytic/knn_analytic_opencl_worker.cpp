//#include "knn_analytic_opencl_worker.h"
//#include "knn_analytic_opencl_kernal.h"
////





///*!
// * Creates a new OpenCL Worker object.
// *
// *  @param base A pointer to the parent KNNAnalytic used to get the argument values from.
// *
// *  @param context A pointer to the OpenCL context used to create buffer and command queue.
// *
// *  @param program A pointer to the workers OpenCl program used to create the kernel.
// */
//KNNAnalytic::OpenCL::Worker::Worker(KNNAnalytic* base, ::OpenCL::Context* context, ::OpenCL::Program* program) :
//    _base(base),
//    _queue(new ::OpenCL::CommandQueue(context,context->devices().first(),this)),
//    _kernel(new OpenCL::Kernel(program,this)),
//    _buffer(context, sizeof(int)) //the buffer is going to hold a pointer to the knn analytic,
//                                  //this will allow me to read from the in, migh need to add an
//                                  //iterator to the data analytic class
//{

//}


///*!
// * Implements the interface to process thw ork blocks and output a result. Very similar to the KNNanalytic serial.
// *
// *  @param
// */
//std::unique_ptr<EAbstractAnalyticBlock> KNNAnalytic::OpenCL::Worker::execute(const EAbstractAnalyticBlock* block)
//{
//   //const KNNAnalyticBlock* valid {block->cast<const KNNAnalytic::Sample>()};
//   //this is where the magic happens
//   //depending on how i want to set up the buffer i might read from it, dont know if i can still
//   //use the iterator from here, i tyhink i can read from the pointer stored in the buffer
//   /*
//   _buffer.mapWrite(_queue).wait();
//   _buffer[0] = valid->_number;
//   _buffer.unmap(_queue).wait();
//   _kernel->execute(_queue,&_buffer,_base->_type,_base->_amount).wait();
//   _buffer.mapRead(_queue).wait();
//   qint32 answer {_buffer.at(0)};
//   _buffer.unmap(_queue).wait();
//   */
//   return nullptr;//std::unique_ptr<EAbstractAnalyticBlock>(new KNNAnalytic::KNNresult());
//}




////so far it looks like I might need to read some of it into an inbetween object. The buffer
////would hold a pointer to the data frame class, which is the front to the file, not the actual
////file descripter itself.in order to read from the file i need to used my iterator, inorder to
////push thinges to the worker i need to have either a thing to map to, or an object to pull from
////i could send it the
