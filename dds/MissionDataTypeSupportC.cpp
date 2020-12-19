// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p16
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:376


#include "MissionDataTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "MissionDataTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for MissionData::MissionPlanTypeSupport.

MissionData::MissionPlanTypeSupport_ptr
TAO::Objref_Traits<MissionData::MissionPlanTypeSupport>::duplicate (
    MissionData::MissionPlanTypeSupport_ptr p)
{
  return MissionData::MissionPlanTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<MissionData::MissionPlanTypeSupport>::release (
    MissionData::MissionPlanTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

MissionData::MissionPlanTypeSupport_ptr
TAO::Objref_Traits<MissionData::MissionPlanTypeSupport>::nil (void)
{
  return MissionData::MissionPlanTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MissionData::MissionPlanTypeSupport>::marshal (
    const MissionData::MissionPlanTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MissionData::MissionPlanTypeSupport::MissionPlanTypeSupport (void)
{}

MissionData::MissionPlanTypeSupport::~MissionPlanTypeSupport (void)
{
}

MissionData::MissionPlanTypeSupport_ptr
MissionData::MissionPlanTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MissionPlanTypeSupport::_duplicate (
      dynamic_cast<MissionPlanTypeSupport_ptr> (_tao_objref)
    );
}

MissionData::MissionPlanTypeSupport_ptr
MissionData::MissionPlanTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MissionPlanTypeSupport::_duplicate (
      dynamic_cast<MissionPlanTypeSupport_ptr> (_tao_objref)
    );
}

MissionData::MissionPlanTypeSupport_ptr
MissionData::MissionPlanTypeSupport::_nil (void)
{
  return 0;
}

MissionData::MissionPlanTypeSupport_ptr
MissionData::MissionPlanTypeSupport::_duplicate (MissionPlanTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MissionData::MissionPlanTypeSupport::_tao_release (MissionPlanTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MissionData::MissionPlanTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MissionData/MissionPlanTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* MissionData::MissionPlanTypeSupport::_interface_repository_id (void) const
{
  return "IDL:MissionData/MissionPlanTypeSupport:1.0";
}

::CORBA::Boolean
MissionData::MissionPlanTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for MissionData::MissionPlanDataWriter.

MissionData::MissionPlanDataWriter_ptr
TAO::Objref_Traits<MissionData::MissionPlanDataWriter>::duplicate (
    MissionData::MissionPlanDataWriter_ptr p)
{
  return MissionData::MissionPlanDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<MissionData::MissionPlanDataWriter>::release (
    MissionData::MissionPlanDataWriter_ptr p)
{
  ::CORBA::release (p);
}

MissionData::MissionPlanDataWriter_ptr
TAO::Objref_Traits<MissionData::MissionPlanDataWriter>::nil (void)
{
  return MissionData::MissionPlanDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MissionData::MissionPlanDataWriter>::marshal (
    const MissionData::MissionPlanDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MissionData::MissionPlanDataWriter::MissionPlanDataWriter (void)
{}

MissionData::MissionPlanDataWriter::~MissionPlanDataWriter (void)
{
}

MissionData::MissionPlanDataWriter_ptr
MissionData::MissionPlanDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MissionPlanDataWriter::_duplicate (
      dynamic_cast<MissionPlanDataWriter_ptr> (_tao_objref)
    );
}

MissionData::MissionPlanDataWriter_ptr
MissionData::MissionPlanDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MissionPlanDataWriter::_duplicate (
      dynamic_cast<MissionPlanDataWriter_ptr> (_tao_objref)
    );
}

MissionData::MissionPlanDataWriter_ptr
MissionData::MissionPlanDataWriter::_nil (void)
{
  return 0;
}

MissionData::MissionPlanDataWriter_ptr
MissionData::MissionPlanDataWriter::_duplicate (MissionPlanDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MissionData::MissionPlanDataWriter::_tao_release (MissionPlanDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MissionData::MissionPlanDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MissionData/MissionPlanDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* MissionData::MissionPlanDataWriter::_interface_repository_id (void) const
{
  return "IDL:MissionData/MissionPlanDataWriter:1.0";
}

::CORBA::Boolean
MissionData::MissionPlanDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for MissionData::MissionPlanDataReader.

MissionData::MissionPlanDataReader_ptr
TAO::Objref_Traits<MissionData::MissionPlanDataReader>::duplicate (
    MissionData::MissionPlanDataReader_ptr p)
{
  return MissionData::MissionPlanDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<MissionData::MissionPlanDataReader>::release (
    MissionData::MissionPlanDataReader_ptr p)
{
  ::CORBA::release (p);
}

MissionData::MissionPlanDataReader_ptr
TAO::Objref_Traits<MissionData::MissionPlanDataReader>::nil (void)
{
  return MissionData::MissionPlanDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MissionData::MissionPlanDataReader>::marshal (
    const MissionData::MissionPlanDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MissionData::MissionPlanDataReader::MissionPlanDataReader (void)
{}

MissionData::MissionPlanDataReader::~MissionPlanDataReader (void)
{
}

MissionData::MissionPlanDataReader_ptr
MissionData::MissionPlanDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MissionPlanDataReader::_duplicate (
      dynamic_cast<MissionPlanDataReader_ptr> (_tao_objref)
    );
}

MissionData::MissionPlanDataReader_ptr
MissionData::MissionPlanDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MissionPlanDataReader::_duplicate (
      dynamic_cast<MissionPlanDataReader_ptr> (_tao_objref)
    );
}

MissionData::MissionPlanDataReader_ptr
MissionData::MissionPlanDataReader::_nil (void)
{
  return 0;
}

MissionData::MissionPlanDataReader_ptr
MissionData::MissionPlanDataReader::_duplicate (MissionPlanDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MissionData::MissionPlanDataReader::_tao_release (MissionPlanDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MissionData::MissionPlanDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MissionData/MissionPlanDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* MissionData::MissionPlanDataReader::_interface_repository_id (void) const
{
  return "IDL:MissionData/MissionPlanDataReader:1.0";
}

::CORBA::Boolean
MissionData::MissionPlanDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for MissionData::NormalizedPointsTypeSupport.

MissionData::NormalizedPointsTypeSupport_ptr
TAO::Objref_Traits<MissionData::NormalizedPointsTypeSupport>::duplicate (
    MissionData::NormalizedPointsTypeSupport_ptr p)
{
  return MissionData::NormalizedPointsTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<MissionData::NormalizedPointsTypeSupport>::release (
    MissionData::NormalizedPointsTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

MissionData::NormalizedPointsTypeSupport_ptr
TAO::Objref_Traits<MissionData::NormalizedPointsTypeSupport>::nil (void)
{
  return MissionData::NormalizedPointsTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MissionData::NormalizedPointsTypeSupport>::marshal (
    const MissionData::NormalizedPointsTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MissionData::NormalizedPointsTypeSupport::NormalizedPointsTypeSupport (void)
{}

MissionData::NormalizedPointsTypeSupport::~NormalizedPointsTypeSupport (void)
{
}

MissionData::NormalizedPointsTypeSupport_ptr
MissionData::NormalizedPointsTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return NormalizedPointsTypeSupport::_duplicate (
      dynamic_cast<NormalizedPointsTypeSupport_ptr> (_tao_objref)
    );
}

MissionData::NormalizedPointsTypeSupport_ptr
MissionData::NormalizedPointsTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return NormalizedPointsTypeSupport::_duplicate (
      dynamic_cast<NormalizedPointsTypeSupport_ptr> (_tao_objref)
    );
}

MissionData::NormalizedPointsTypeSupport_ptr
MissionData::NormalizedPointsTypeSupport::_nil (void)
{
  return 0;
}

MissionData::NormalizedPointsTypeSupport_ptr
MissionData::NormalizedPointsTypeSupport::_duplicate (NormalizedPointsTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MissionData::NormalizedPointsTypeSupport::_tao_release (NormalizedPointsTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MissionData::NormalizedPointsTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MissionData/NormalizedPointsTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* MissionData::NormalizedPointsTypeSupport::_interface_repository_id (void) const
{
  return "IDL:MissionData/NormalizedPointsTypeSupport:1.0";
}

::CORBA::Boolean
MissionData::NormalizedPointsTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for MissionData::NormalizedPointsDataWriter.

MissionData::NormalizedPointsDataWriter_ptr
TAO::Objref_Traits<MissionData::NormalizedPointsDataWriter>::duplicate (
    MissionData::NormalizedPointsDataWriter_ptr p)
{
  return MissionData::NormalizedPointsDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<MissionData::NormalizedPointsDataWriter>::release (
    MissionData::NormalizedPointsDataWriter_ptr p)
{
  ::CORBA::release (p);
}

MissionData::NormalizedPointsDataWriter_ptr
TAO::Objref_Traits<MissionData::NormalizedPointsDataWriter>::nil (void)
{
  return MissionData::NormalizedPointsDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MissionData::NormalizedPointsDataWriter>::marshal (
    const MissionData::NormalizedPointsDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MissionData::NormalizedPointsDataWriter::NormalizedPointsDataWriter (void)
{}

MissionData::NormalizedPointsDataWriter::~NormalizedPointsDataWriter (void)
{
}

MissionData::NormalizedPointsDataWriter_ptr
MissionData::NormalizedPointsDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return NormalizedPointsDataWriter::_duplicate (
      dynamic_cast<NormalizedPointsDataWriter_ptr> (_tao_objref)
    );
}

MissionData::NormalizedPointsDataWriter_ptr
MissionData::NormalizedPointsDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return NormalizedPointsDataWriter::_duplicate (
      dynamic_cast<NormalizedPointsDataWriter_ptr> (_tao_objref)
    );
}

MissionData::NormalizedPointsDataWriter_ptr
MissionData::NormalizedPointsDataWriter::_nil (void)
{
  return 0;
}

MissionData::NormalizedPointsDataWriter_ptr
MissionData::NormalizedPointsDataWriter::_duplicate (NormalizedPointsDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MissionData::NormalizedPointsDataWriter::_tao_release (NormalizedPointsDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MissionData::NormalizedPointsDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MissionData/NormalizedPointsDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* MissionData::NormalizedPointsDataWriter::_interface_repository_id (void) const
{
  return "IDL:MissionData/NormalizedPointsDataWriter:1.0";
}

::CORBA::Boolean
MissionData::NormalizedPointsDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for MissionData::NormalizedPointsDataReader.

MissionData::NormalizedPointsDataReader_ptr
TAO::Objref_Traits<MissionData::NormalizedPointsDataReader>::duplicate (
    MissionData::NormalizedPointsDataReader_ptr p)
{
  return MissionData::NormalizedPointsDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<MissionData::NormalizedPointsDataReader>::release (
    MissionData::NormalizedPointsDataReader_ptr p)
{
  ::CORBA::release (p);
}

MissionData::NormalizedPointsDataReader_ptr
TAO::Objref_Traits<MissionData::NormalizedPointsDataReader>::nil (void)
{
  return MissionData::NormalizedPointsDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MissionData::NormalizedPointsDataReader>::marshal (
    const MissionData::NormalizedPointsDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MissionData::NormalizedPointsDataReader::NormalizedPointsDataReader (void)
{}

MissionData::NormalizedPointsDataReader::~NormalizedPointsDataReader (void)
{
}

MissionData::NormalizedPointsDataReader_ptr
MissionData::NormalizedPointsDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return NormalizedPointsDataReader::_duplicate (
      dynamic_cast<NormalizedPointsDataReader_ptr> (_tao_objref)
    );
}

MissionData::NormalizedPointsDataReader_ptr
MissionData::NormalizedPointsDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return NormalizedPointsDataReader::_duplicate (
      dynamic_cast<NormalizedPointsDataReader_ptr> (_tao_objref)
    );
}

MissionData::NormalizedPointsDataReader_ptr
MissionData::NormalizedPointsDataReader::_nil (void)
{
  return 0;
}

MissionData::NormalizedPointsDataReader_ptr
MissionData::NormalizedPointsDataReader::_duplicate (NormalizedPointsDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MissionData::NormalizedPointsDataReader::_tao_release (NormalizedPointsDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MissionData::NormalizedPointsDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MissionData/NormalizedPointsDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* MissionData::NormalizedPointsDataReader::_interface_repository_id (void) const
{
  return "IDL:MissionData/NormalizedPointsDataReader:1.0";
}

::CORBA::Boolean
MissionData::NormalizedPointsDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for MissionData::TelemetryTypeSupport.

MissionData::TelemetryTypeSupport_ptr
TAO::Objref_Traits<MissionData::TelemetryTypeSupport>::duplicate (
    MissionData::TelemetryTypeSupport_ptr p)
{
  return MissionData::TelemetryTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<MissionData::TelemetryTypeSupport>::release (
    MissionData::TelemetryTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

MissionData::TelemetryTypeSupport_ptr
TAO::Objref_Traits<MissionData::TelemetryTypeSupport>::nil (void)
{
  return MissionData::TelemetryTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MissionData::TelemetryTypeSupport>::marshal (
    const MissionData::TelemetryTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MissionData::TelemetryTypeSupport::TelemetryTypeSupport (void)
{}

MissionData::TelemetryTypeSupport::~TelemetryTypeSupport (void)
{
}

MissionData::TelemetryTypeSupport_ptr
MissionData::TelemetryTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TelemetryTypeSupport::_duplicate (
      dynamic_cast<TelemetryTypeSupport_ptr> (_tao_objref)
    );
}

MissionData::TelemetryTypeSupport_ptr
MissionData::TelemetryTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TelemetryTypeSupport::_duplicate (
      dynamic_cast<TelemetryTypeSupport_ptr> (_tao_objref)
    );
}

MissionData::TelemetryTypeSupport_ptr
MissionData::TelemetryTypeSupport::_nil (void)
{
  return 0;
}

MissionData::TelemetryTypeSupport_ptr
MissionData::TelemetryTypeSupport::_duplicate (TelemetryTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MissionData::TelemetryTypeSupport::_tao_release (TelemetryTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MissionData::TelemetryTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MissionData/TelemetryTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* MissionData::TelemetryTypeSupport::_interface_repository_id (void) const
{
  return "IDL:MissionData/TelemetryTypeSupport:1.0";
}

::CORBA::Boolean
MissionData::TelemetryTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for MissionData::TelemetryDataWriter.

MissionData::TelemetryDataWriter_ptr
TAO::Objref_Traits<MissionData::TelemetryDataWriter>::duplicate (
    MissionData::TelemetryDataWriter_ptr p)
{
  return MissionData::TelemetryDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<MissionData::TelemetryDataWriter>::release (
    MissionData::TelemetryDataWriter_ptr p)
{
  ::CORBA::release (p);
}

MissionData::TelemetryDataWriter_ptr
TAO::Objref_Traits<MissionData::TelemetryDataWriter>::nil (void)
{
  return MissionData::TelemetryDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MissionData::TelemetryDataWriter>::marshal (
    const MissionData::TelemetryDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MissionData::TelemetryDataWriter::TelemetryDataWriter (void)
{}

MissionData::TelemetryDataWriter::~TelemetryDataWriter (void)
{
}

MissionData::TelemetryDataWriter_ptr
MissionData::TelemetryDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TelemetryDataWriter::_duplicate (
      dynamic_cast<TelemetryDataWriter_ptr> (_tao_objref)
    );
}

MissionData::TelemetryDataWriter_ptr
MissionData::TelemetryDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TelemetryDataWriter::_duplicate (
      dynamic_cast<TelemetryDataWriter_ptr> (_tao_objref)
    );
}

MissionData::TelemetryDataWriter_ptr
MissionData::TelemetryDataWriter::_nil (void)
{
  return 0;
}

MissionData::TelemetryDataWriter_ptr
MissionData::TelemetryDataWriter::_duplicate (TelemetryDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MissionData::TelemetryDataWriter::_tao_release (TelemetryDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MissionData::TelemetryDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MissionData/TelemetryDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* MissionData::TelemetryDataWriter::_interface_repository_id (void) const
{
  return "IDL:MissionData/TelemetryDataWriter:1.0";
}

::CORBA::Boolean
MissionData::TelemetryDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:51

// Traits specializations for MissionData::TelemetryDataReader.

MissionData::TelemetryDataReader_ptr
TAO::Objref_Traits<MissionData::TelemetryDataReader>::duplicate (
    MissionData::TelemetryDataReader_ptr p)
{
  return MissionData::TelemetryDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<MissionData::TelemetryDataReader>::release (
    MissionData::TelemetryDataReader_ptr p)
{
  ::CORBA::release (p);
}

MissionData::TelemetryDataReader_ptr
TAO::Objref_Traits<MissionData::TelemetryDataReader>::nil (void)
{
  return MissionData::TelemetryDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MissionData::TelemetryDataReader>::marshal (
    const MissionData::TelemetryDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MissionData::TelemetryDataReader::TelemetryDataReader (void)
{}

MissionData::TelemetryDataReader::~TelemetryDataReader (void)
{
}

MissionData::TelemetryDataReader_ptr
MissionData::TelemetryDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TelemetryDataReader::_duplicate (
      dynamic_cast<TelemetryDataReader_ptr> (_tao_objref)
    );
}

MissionData::TelemetryDataReader_ptr
MissionData::TelemetryDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return TelemetryDataReader::_duplicate (
      dynamic_cast<TelemetryDataReader_ptr> (_tao_objref)
    );
}

MissionData::TelemetryDataReader_ptr
MissionData::TelemetryDataReader::_nil (void)
{
  return 0;
}

MissionData::TelemetryDataReader_ptr
MissionData::TelemetryDataReader::_duplicate (TelemetryDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MissionData::TelemetryDataReader::_tao_release (TelemetryDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MissionData::TelemetryDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MissionData/TelemetryDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* MissionData::TelemetryDataReader::_interface_repository_id (void) const
{
  return "IDL:MissionData/TelemetryDataReader:1.0";
}

::CORBA::Boolean
MissionData::TelemetryDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
