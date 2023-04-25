///////////////////////////////////////////////////////////////////////////////
// VersionedProjectDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "VersionedProjectDriver.h"
#include "VersionedProjectClassFactory.h"

DECLARE_GENERIC_DEVICE(VERSIONEDPROJECTDRV)

IOSTATUS CVersionedProjectDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CVersionedProjectClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CVersionedProjectDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CVersionedProjectDriver::VERSIONEDPROJECTDRV_GetVersion( )
{
	return( (VERSIONEDPROJECTDRV_Major << 8) | VERSIONEDPROJECTDRV_Minor );
}

