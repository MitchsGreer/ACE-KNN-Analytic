//#include "knn_analytic_opencl_kernal.h"
////





///*!
// * Creates a new OpenCl kernel object with the ghiven program, and optional parent.
// *
// * @param program Pointer to the OpenCl p[rogram used to make this kenrel OpenCls resources.
// *
// * @param parent Pointer to the kernels parent KLNNAnalytic, optional.
// */
//KNNAnalytic::OpenCL::Kernel::Kernel(::OpenCL::Program* program, QObject* parent) : ::OpenCL::Kernel(program,"KNN",parent)
//{}


////might need to look into breaking these comparisons into work groupes
////so it can go faster, the more i can eliminate loops the better and faster the application will go



///*!
// * Begins execution of this kernel object's command queue af kernbal arguments, returns and OpenCl event when finished.
// *
// *  @param queue The OpenCL command queue this kernel executes on.
// *
// *  @param buffer The OpenCl memory object where a row will be stored to process.
// *
// *  @return OpenCl event associated witht the kernels execution.
// */
//::OpenCL::Event KNNAnalytic::OpenCL::Kernel::execute(::OpenCL::CommandQueue* queue, ::OpenCL::Buffer<cl_float>* buffer)
//{
//    Locker locker {lock()};

//    setBuffer(GlobalBuffer, buffer);
//    setArgument(GlobalSize, buffer->size());
//    setLocalMemory<cl_float>(LocalValue, 1);


//    int localWorkSize = 1;
//    int workgroupsize = (buffer->size() + localWorkSize -1) / localWorkSize;

//    setSizes(0, workgroupsize * localWorkSize, localWorkSize);


//    return ::OpenCL::Kernel::execute(queue);
//}
