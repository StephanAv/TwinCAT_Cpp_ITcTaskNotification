///////////////////////////////////////////////////////////////////////////////
// VersionedProjectCtrl.h

#ifndef __VERSIONEDPROJECTCTRL_H__
#define __VERSIONEDPROJECTCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "VersionedProjectW32.h"
#include "TcBase.h"
#include "VersionedProjectClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CVersionedProjectCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CVersionedProjectCtrl, &CLSID_VersionedProjectCtrl>
	, public IVersionedProjectCtrl
	, public ITcOCFCtrlImpl<CVersionedProjectCtrl, CVersionedProjectClassFactory>
{
public:
	CVersionedProjectCtrl();
	virtual ~CVersionedProjectCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_VERSIONEDPROJECTCTRL)
DECLARE_NOT_AGGREGATABLE(CVersionedProjectCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CVersionedProjectCtrl)
	COM_INTERFACE_ENTRY(IVersionedProjectCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __VERSIONEDPROJECTCTRL_H__
