//#include "knn_analytic_input.h"
//#include <limits>
//#include "../Data_Frames/data_sample_set.h"
//#include "../Data_Frames/data_final_knn.h"
//#include "../Factories/data_factory.h"
////





///*!
//*  constructs a new input object with an KNNAnalytic as its parent
//*
//*  @param parent The base parent of the input object
//*/
//KNNAnalytic::Input::Input(KNNAnalytic* parent) :  EAbstractAnalyticInput(parent), _base(parent)
//{}





///*!
//*  Implements an interface returns the total number of arguments this object contains.
//*
//*  @return The number of arguments this object contains.
//*/
//int KNNAnalytic::Input::size() const
//{
//   return Total;
//}





///*!
//*  Implements an interface that returns the type of argument at a given index.
//*
//*  @param index The index in question.
//*
//*  @return The type of the argument at that index.
//*/
//EAbstractAnalyticInput::Type KNNAnalytic::Input::type(int index) const
//{
//   switch (index)
//   {
//   case InputData: return Type::DataIn;
//   case OutputData: return Type::DataOut;
//   case K: return Type::Integer;
//   default: return Type::Boolean;
//   }
//}





///*!
//*  Implements an interface that returns the data for a given role on an argument at a given index.
//*
//*  @param index The index in question.
//*
//*  @param role Role for the argument at the given index.
//*
//*  @return The type of the argument at that index.
//*/
//QVariant KNNAnalytic::Input::data(int index, Role role) const
//{
//   switch (index)
//   {
//   case InputData: return inputDataData(role);
//   case OutputData: return outputDataData(role);
//   case K: return KData(role);
//   default: return QVariant();
//   }
//}





///*!
//*  Implements the interface to return the role of the argument at the given index.
//*
//*  @param role The given data role whose data is returned.
//*
//*  @return Argument data corrosponding to the given role.
//*/
//QVariant KNNAnalytic::Input::inputDataData(Role role) const
//{
//   switch (role)
//   {
//   case Role::CommandLineName: return QString("in");
//   case Role::Title: return tr("Input:");
//   case Role::WhatsThis: return tr("Input data object of type SampleSet.");
//   case Role::DataType: return DataFactory::SampleSetType;
//   default: return QVariant();
//   }
//}





///*!
//*  Implements the interface to return the role of the argument at the given index.
//*
//*  @param role The given data role whose data is returned.
//*
//*  @return Argument data corrosponding to the given role.
//*/
//QVariant KNNAnalytic::Input::outputDataData(Role role) const
//{
//   switch (role)
//   {
//   case Role::CommandLineName: return QString("out");
//   case Role::Title: return tr("Output:");
//   case Role::WhatsThis: return tr("Output data object of type FinaLknn.");
//   case Role::DataType: return DataFactory::FinalKNNType;
//   default: return QVariant();
//   }
//}





///*!
//*  Implements the interface to return the role of the argument at the given index.
//*
//*  @param role The given data role whose data is returned.
//*
//*  @return Argument data corrosponding to the given role.
//*/
//QVariant KNNAnalytic::Input::KData(Role role) const
//{
//   switch (role)
//   {
//   case Role::CommandLineName: return QString("k");
//   case Role::Title: return tr("k:");
//   case Role::WhatsThis: return tr("k data object of type Integer.");
//   case Role::Default: return 0;
//   case Role::Minimum: return std::numeric_limits<int>::min();
//   case Role::Maximum: return std::numeric_limits<int>::max();
//   default: return QVariant();
//   }
//}





///*!
//*  Implements the interface that sets an argument of the base to a given value.
//*
//*  @param index The Index at which the value needs to be changed.
//*
//*  @param value The value to change the argument to.
//*/
//void KNNAnalytic::Input::set(int index, const QVariant& value)
//{
//    switch(index)
//    {
//    case K:
//        _base->_k = value.toInt();
//        break;
//    }
//}





///*!
//*  Implements the interface that sets an argument of the base to a given file.
//*
//*  @param index The Index at which the value needs to be changed.
//*
//*  @param file The File to change the argument to.
//*
//*  In this case we dont have any arguments that are files, so we are just setting the
//*  params to unused.
//*/
//void KNNAnalytic::Input::set(int index, QFile* file)
//{
//    Q_UNUSED(index);
//    Q_UNUSED(file);
//}





///*!
//*  Implements the interface that sets an argument of the base to a abstract data type.
//*
//*  @param index The Index at which the value needs to be changed.
//*
//*  @param data The Data type to change the argument to.
//*/
//void KNNAnalytic::Input::set(int index, EAbstractData* data)
//{
//    switch(index)
//    {
//    case InputData:
//        _base->_in = qobject_cast<SampleSet*>(data);
//        break;
//    case OutputData:
//        _base->_out = qobject_cast<Finalknn*>(data);
//        break;
//    }
//}

