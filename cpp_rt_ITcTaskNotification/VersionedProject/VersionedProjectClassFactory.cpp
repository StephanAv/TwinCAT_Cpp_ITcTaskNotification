///////////////////////////////////////////////////////////////////////////////
// VersionedProjectClassFactory.cpp
#include "TcPch.h"
#pragma hdrstop

#include "VersionedProjectClassFactory.h"
#include "VersionedProjectServices.h"
#include "VersionedProjectVersion.h"
#include "CyclicModule.h"
#include "Sentinel.h"

BEGIN_CLASS_MAP(CVersionedProjectClassFactory)
///<AutoGeneratedContent id="ClassMap">
	CLASS_ENTRY_LIB(VID_VersionedProject, CID_VersionedProjectCCyclicModule, SRVNAME_VERSIONEDPROJECT "!CCyclicModule", CCyclicModule)
	CLASS_ENTRY_LIB(VID_VersionedProject, CID_VersionedProjectCSentinel, SRVNAME_VERSIONEDPROJECT "!CSentinel", CSentinel)
///</AutoGeneratedContent>
END_CLASS_MAP()

CVersionedProjectClassFactory::CVersionedProjectClassFactory() : CObjClassFactory()
{
	TcDbgUnitSetImageName(TCDBG_UNIT_IMAGE_NAME_TMX(SRVNAME_VERSIONEDPROJECT));
#if defined(TCDBG_UNIT_VERSION)
	TcDbgUnitSetVersion(TCDBG_UNIT_VERSION(VersionedProject));
#endif //defined(TCDBG_UNIT_VERSION)
}

