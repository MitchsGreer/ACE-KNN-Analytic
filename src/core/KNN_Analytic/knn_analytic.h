//#ifndef KNNANALYTIC_H
//#define KNNANALYTIC_H
//#include <ace/core/core.h>
//#include "../Data_Frames/data_sample_set.h"
//#include "../Data_Frames/data_final_knn.h"
////





///*!
//*  This class implements the KNNAnalytic. This analytic will compare a sample with all other samples to
//*  output a list of nearest neighbors
//*/
//class KNNAnalytic : public EAbstractAnalytic
//{
//   Q_OBJECT
//public:
//   class Input;
//   //class Sample; //workbklock
//   class KNNresult; //result block
//   class Serial;
//   //class OpenCL;
//   //class CUDA;
//public:
//   virtual int size() const override final;
//   virtual std::unique_ptr<EAbstractAnalyticBlock> makeWork(int index) const override final;
//   virtual std::unique_ptr<EAbstractAnalyticBlock> makeWork() const override final;
//   virtual std::unique_ptr<EAbstractAnalyticBlock> makeResult() const override final;
//   virtual void process(const EAbstractAnalyticBlock* result) override final;
//   virtual EAbstractAnalyticInput* makeInput() override final;
//   virtual EAbstractAnalyticSerial* makeSerial() override final;
//   //virtual EAbstractAnalyticOpenCL* makeOpenCL() override final;
//   //virtual EAbstractAnalyticCUDA* makeCUDA() override final;
//   virtual void initialize() override final;
//   virtual void initializeOutputs() override final;
//   virtual void finish() override final;

//   qint32 k() const;
//   SampleSet * in() const;



//private:
//   /*!
//   *  input data in the form of Samples
//   */
//   SampleSet* _in {nullptr};
//   /*!
//   *  output data in the form of the final knn information
//   */
//   Finalknn* _out {nullptr};
//   /*!
//   *  stores the desired kth nearest neighbors to calculate
//   */
//   qint32 _k;
//};


//#endif // KNNANALYTIC_H
