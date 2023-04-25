///////////////////////////////////////////////////////////////////////////////
// VersionedProjectDriver.h

#ifndef __VERSIONEDPROJECTDRIVER_H__
#define __VERSIONEDPROJECTDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define VERSIONEDPROJECTDRV_NAME        "VERSIONEDPROJECT"
#define VERSIONEDPROJECTDRV_Major       1
#define VERSIONEDPROJECTDRV_Minor       0

#define DEVICE_CLASS CVersionedProjectDriver

#include "ObjDriver.h"

class CVersionedProjectDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl VERSIONEDPROJECTDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(VERSIONEDPROJECTDRV)
	VxD_Service( VERSIONEDPROJECTDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __VERSIONEDPROJECTDRIVER_H__