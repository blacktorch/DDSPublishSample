/* -*- C++ -*- */
/* Generated by /Users/chidiebereonyedinma/Documents/DDS/OpenDDS-3.13.3/bin/opendds_idl version 3.13.3 (ACE version 6.2a_p16) running on input file MissionData.idl */
#ifndef OPENDDS_IDL_GENERATED_MISSIONDATATYPESUPPORTIMPL_H_0SIAMB
#define OPENDDS_IDL_GENERATED_MISSIONDATATYPESUPPORTIMPL_H_0SIAMB
#include "MissionDataC.h"
#include "dds/DCPS/Definitions.h"
#include "dds/DdsDcpsC.h"
#include "MissionDataTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/TypeSupportImpl.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: MissionData */



/* Begin TYPEDEF: PlanData */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
void gen_find_size(const MissionData::PlanData& seq, size_t& size, size_t& padding);

MissionData_Export
bool operator<<(Serializer& strm, const MissionData::PlanData& seq);

MissionData_Export
bool operator>>(Serializer& strm, MissionData::PlanData& seq);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
bool gen_skip_over(Serializer& ser, MissionData::PlanData*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: PlanData */


/* Begin STRUCT: MissionPlan */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
void gen_find_size(const MissionData::MissionPlan& stru, size_t& size, size_t& padding);

MissionData_Export
bool operator<<(Serializer& strm, const MissionData::MissionPlan& stru);

MissionData_Export
bool operator>>(Serializer& strm, MissionData::MissionPlan& stru);

MissionData_Export
size_t gen_max_marshaled_size(const MissionData::MissionPlan& stru, bool align);

MissionData_Export
size_t gen_max_marshaled_size(KeyOnly<const MissionData::MissionPlan> stru, bool align);

MissionData_Export
void gen_find_size(KeyOnly<const MissionData::MissionPlan> stru, size_t& size, size_t& padding);

MissionData_Export
bool operator<<(Serializer& strm, KeyOnly<const MissionData::MissionPlan> stru);

MissionData_Export
bool operator>>(Serializer& strm, KeyOnly<MissionData::MissionPlan> stru);

template <>
struct MarshalTraits<MissionData::MissionPlan> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace MissionData {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct MissionData_Export MissionPlan_OpenDDS_KeyLessThan {
  bool operator()(const MissionData::MissionPlan& v1, const MissionData::MissionPlan& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.planId < v2.planId) return true;
    if (v2.planId < v1.planId) return false;
    return false;
  }
};
}


namespace MissionData {
class MissionPlanTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<MissionData::MissionPlan> {
  typedef MissionData::MissionPlan MessageType;
  typedef MissionData::MissionPlanSeq MessageSequenceType;
  typedef MissionData::MissionPlanTypeSupport TypeSupportType;
  typedef MissionData::MissionPlanTypeSupportImpl TypeSupportTypeImpl;
  typedef MissionData::MissionPlanDataWriter DataWriterType;
  typedef MissionData::MissionPlanDataReader DataReaderType;
  typedef MissionData::MissionPlan_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "MissionData::MissionPlan"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace MissionData {
class MissionData_Export MissionPlanTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<MissionPlanTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<MissionPlan> TraitsType;
  typedef MissionPlanTypeSupport TypeSupportType;
  typedef MissionPlanTypeSupport::_var_type _var_type;
  typedef MissionPlanTypeSupport::_ptr_type _ptr_type;

  MissionPlanTypeSupportImpl() {}
  virtual ~MissionPlanTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static MissionPlanTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
MissionData_Export
const MetaStruct& getMetaStruct<MissionData::MissionPlan>();
MissionData_Export
bool gen_skip_over(Serializer& ser, MissionData::MissionPlan*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: MissionPlan */


/* Begin TYPEDEF: Points */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
void gen_find_size(const MissionData::Points& seq, size_t& size, size_t& padding);

MissionData_Export
bool operator<<(Serializer& strm, const MissionData::Points& seq);

MissionData_Export
bool operator>>(Serializer& strm, MissionData::Points& seq);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
bool gen_skip_over(Serializer& ser, MissionData::Points*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: Points */


/* Begin STRUCT: NormalizedPoints */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
void gen_find_size(const MissionData::NormalizedPoints& stru, size_t& size, size_t& padding);

MissionData_Export
bool operator<<(Serializer& strm, const MissionData::NormalizedPoints& stru);

MissionData_Export
bool operator>>(Serializer& strm, MissionData::NormalizedPoints& stru);

MissionData_Export
size_t gen_max_marshaled_size(const MissionData::NormalizedPoints& stru, bool align);

MissionData_Export
size_t gen_max_marshaled_size(KeyOnly<const MissionData::NormalizedPoints> stru, bool align);

MissionData_Export
void gen_find_size(KeyOnly<const MissionData::NormalizedPoints> stru, size_t& size, size_t& padding);

MissionData_Export
bool operator<<(Serializer& strm, KeyOnly<const MissionData::NormalizedPoints> stru);

MissionData_Export
bool operator>>(Serializer& strm, KeyOnly<MissionData::NormalizedPoints> stru);

template <>
struct MarshalTraits<MissionData::NormalizedPoints> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace MissionData {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct MissionData_Export NormalizedPoints_OpenDDS_KeyLessThan {
  bool operator()(const MissionData::NormalizedPoints& v1, const MissionData::NormalizedPoints& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.pointsId < v2.pointsId) return true;
    if (v2.pointsId < v1.pointsId) return false;
    return false;
  }
};
}


namespace MissionData {
class NormalizedPointsTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<MissionData::NormalizedPoints> {
  typedef MissionData::NormalizedPoints MessageType;
  typedef MissionData::NormalizedPointsSeq MessageSequenceType;
  typedef MissionData::NormalizedPointsTypeSupport TypeSupportType;
  typedef MissionData::NormalizedPointsTypeSupportImpl TypeSupportTypeImpl;
  typedef MissionData::NormalizedPointsDataWriter DataWriterType;
  typedef MissionData::NormalizedPointsDataReader DataReaderType;
  typedef MissionData::NormalizedPoints_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "MissionData::NormalizedPoints"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace MissionData {
class MissionData_Export NormalizedPointsTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<NormalizedPointsTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<NormalizedPoints> TraitsType;
  typedef NormalizedPointsTypeSupport TypeSupportType;
  typedef NormalizedPointsTypeSupport::_var_type _var_type;
  typedef NormalizedPointsTypeSupport::_ptr_type _ptr_type;

  NormalizedPointsTypeSupportImpl() {}
  virtual ~NormalizedPointsTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static NormalizedPointsTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
MissionData_Export
const MetaStruct& getMetaStruct<MissionData::NormalizedPoints>();
MissionData_Export
bool gen_skip_over(Serializer& ser, MissionData::NormalizedPoints*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: NormalizedPoints */


/* Begin TYPEDEF: TelemetryData */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
void gen_find_size(const MissionData::TelemetryData& seq, size_t& size, size_t& padding);

MissionData_Export
bool operator<<(Serializer& strm, const MissionData::TelemetryData& seq);

MissionData_Export
bool operator>>(Serializer& strm, MissionData::TelemetryData& seq);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
bool gen_skip_over(Serializer& ser, MissionData::TelemetryData*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: TelemetryData */


/* Begin TYPEDEF: ImageData */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
void gen_find_size(const MissionData::ImageData& seq, size_t& size, size_t& padding);

MissionData_Export
bool operator<<(Serializer& strm, const MissionData::ImageData& seq);

MissionData_Export
bool operator>>(Serializer& strm, MissionData::ImageData& seq);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
bool gen_skip_over(Serializer& ser, MissionData::ImageData*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End TYPEDEF: ImageData */


/* Begin STRUCT: Telemetry */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

MissionData_Export
void gen_find_size(const MissionData::Telemetry& stru, size_t& size, size_t& padding);

MissionData_Export
bool operator<<(Serializer& strm, const MissionData::Telemetry& stru);

MissionData_Export
bool operator>>(Serializer& strm, MissionData::Telemetry& stru);

MissionData_Export
size_t gen_max_marshaled_size(const MissionData::Telemetry& stru, bool align);

MissionData_Export
size_t gen_max_marshaled_size(KeyOnly<const MissionData::Telemetry> stru, bool align);

MissionData_Export
void gen_find_size(KeyOnly<const MissionData::Telemetry> stru, size_t& size, size_t& padding);

MissionData_Export
bool operator<<(Serializer& strm, KeyOnly<const MissionData::Telemetry> stru);

MissionData_Export
bool operator>>(Serializer& strm, KeyOnly<MissionData::Telemetry> stru);

template <>
struct MarshalTraits<MissionData::Telemetry> {
  static bool gen_is_bounded_size() { return false; }
  static bool gen_is_bounded_key_size() { return true; }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace MissionData {
// This structure supports use of std::map with a key
// defined by one or more #pragma DCPS_DATA_KEY lines.
struct MissionData_Export Telemetry_OpenDDS_KeyLessThan {
  bool operator()(const MissionData::Telemetry& v1, const MissionData::Telemetry& v2) const
  {
    using ::operator<; // TAO::String_Manager's operator< is in global NS
    if (v1.telemetryId < v2.telemetryId) return true;
    if (v2.telemetryId < v1.telemetryId) return false;
    return false;
  }
};
}


namespace MissionData {
class TelemetryTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {
template <>
struct DDSTraits<MissionData::Telemetry> {
  typedef MissionData::Telemetry MessageType;
  typedef MissionData::TelemetrySeq MessageSequenceType;
  typedef MissionData::TelemetryTypeSupport TypeSupportType;
  typedef MissionData::TelemetryTypeSupportImpl TypeSupportTypeImpl;
  typedef MissionData::TelemetryDataWriter DataWriterType;
  typedef MissionData::TelemetryDataReader DataReaderType;
  typedef MissionData::Telemetry_OpenDDS_KeyLessThan LessThanType;

  static const char* type_name () { return "MissionData::Telemetry"; }
  static bool gen_has_key () { return true; }

  static size_t gen_max_marshaled_size(const MessageType& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const MessageType& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }

  static size_t gen_max_marshaled_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& x, bool align) { return ::OpenDDS::DCPS::gen_max_marshaled_size(x, align); }
  static void gen_find_size(const OpenDDS::DCPS::KeyOnly<const MessageType>& arr, size_t& size, size_t& padding) { ::OpenDDS::DCPS::gen_find_size(arr, size, padding); }
};
}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace MissionData {
class MissionData_Export TelemetryTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<TelemetryTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl
{
public:
  typedef OpenDDS::DCPS::DDSTraits<Telemetry> TraitsType;
  typedef TelemetryTypeSupport TypeSupportType;
  typedef TelemetryTypeSupport::_var_type _var_type;
  typedef TelemetryTypeSupport::_ptr_type _ptr_type;

  TelemetryTypeSupportImpl() {}
  virtual ~TelemetryTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */
  virtual bool has_dcps_key();
  const char* default_type_name() const;
  static TelemetryTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
MissionData_Export
const MetaStruct& getMetaStruct<MissionData::Telemetry>();
MissionData_Export
bool gen_skip_over(Serializer& ser, MissionData::Telemetry*);

}  }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Telemetry */

/* End MODULE: MissionData */
#endif /* OPENDDS_IDL_GENERATED_MISSIONDATATYPESUPPORTIMPL_H_0SIAMB */
