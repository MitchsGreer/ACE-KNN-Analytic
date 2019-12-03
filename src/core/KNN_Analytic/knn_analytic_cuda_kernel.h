//#ifndef KNN_CUDA_KERNEL_H
//#define KNN_CUDA_KERNEL_H
//#include "knn_cuda.h"
//#include "knn_analytic.h"
////

//class KNNAnalytic::CUDA::Kernel : public ::CUDA::Kernel
//{
//public:
//    /*!
//     * Defines the arguments passed to the CUDA kernel.
//     */
//    enum Argument
//    {
//       /*!
//        * Defines the global buffer argument.
//        */
//       GlobalBuffer
//       /*!
//        * Defines the global size argument.
//        */
//       ,GlobalSize
//       /*!
//        * Defines the operation type argument.
//        */
//       ,Type
//       /*!
//        * Defines the amount argument.
//        */
//       ,Amount
//    };
//    Kernel(::CUDA::Program* program);
//    ::CUDA::Event execute(const ::CUDA::Stream& stream, ::CUDA::Buffer<float>* buffer, int amount);
//};

//#endif // KNN_CUDA_KERNEL_H
