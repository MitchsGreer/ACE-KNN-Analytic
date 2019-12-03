//#ifndef KNNANALYTIC_INPUT_H
//#define KNNANALYTIC_INPUT_H
//#include <ace/core/core.h>
//#include "knn_analytic.h"
////





///*!
//*  This class implements the input class for its analytic parent.
//*/
//class KNNAnalytic::Input : public EAbstractAnalyticInput
//{
//   Q_OBJECT
//public:
//    /*!
//    *  Defines all arguments
//    */
//   enum Argument
//   {
//       /*!
//       *  defines InputData argument
//       */
//      InputData
//       /*!
//       *  defines OutputData argument
//       */
//      ,OutputData
//       /*!
//       *  defines K argument
//       */
//      ,K
//       /*!
//       *  defines Total number of arguments this class contains
//       */
//      ,Total
//   };
//public:
//   explicit Input(KNNAnalytic* parent);
//   virtual int size() const override final;
//   virtual EAbstractAnalyticInput::Type type(int index) const override final;
//   virtual QVariant data(int index, Role role) const override final;
//   virtual void set(int index, const QVariant& value) override final;
//   virtual void set(int index, QFile* file) override final;
//   virtual void set(int index, EAbstractData* data) override final;
//   QVariant inputDataData(Role role) const;
//   QVariant outputDataData(Role role) const;
//   QVariant KData(Role role) const;
//private:
//   /*!
//   *  pointer to the Inputs base parent object
//   */
//   KNNAnalytic* _base;
//};

//#endif // KNNANALYTIC_INPUT_H
