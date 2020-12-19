
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl MissionData
// ------------------------------
#ifndef MISSIONDATA_EXPORT_H
#define MISSIONDATA_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (MISSIONDATA_HAS_DLL)
#  define MISSIONDATA_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && MISSIONDATA_HAS_DLL */

#if !defined (MISSIONDATA_HAS_DLL)
#  define MISSIONDATA_HAS_DLL 1
#endif /* ! MISSIONDATA_HAS_DLL */

#if defined (MISSIONDATA_HAS_DLL) && (MISSIONDATA_HAS_DLL == 1)
#  if defined (MISSIONDATA_BUILD_DLL)
#    define MissionData_Export ACE_Proper_Export_Flag
#    define MISSIONDATA_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define MISSIONDATA_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* MISSIONDATA_BUILD_DLL */
#    define MissionData_Export ACE_Proper_Import_Flag
#    define MISSIONDATA_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define MISSIONDATA_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* MISSIONDATA_BUILD_DLL */
#else /* MISSIONDATA_HAS_DLL == 1 */
#  define MissionData_Export
#  define MISSIONDATA_SINGLETON_DECLARATION(T)
#  define MISSIONDATA_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* MISSIONDATA_HAS_DLL == 1 */

// Set MISSIONDATA_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (MISSIONDATA_NTRACE)
#  if (ACE_NTRACE == 1)
#    define MISSIONDATA_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define MISSIONDATA_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !MISSIONDATA_NTRACE */

#if (MISSIONDATA_NTRACE == 1)
#  define MISSIONDATA_TRACE(X)
#else /* (MISSIONDATA_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define MISSIONDATA_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (MISSIONDATA_NTRACE == 1) */

#endif /* MISSIONDATA_EXPORT_H */

// End of auto generated file.
