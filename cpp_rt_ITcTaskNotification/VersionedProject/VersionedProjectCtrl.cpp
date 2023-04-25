// VersionedProjectCtrl.cpp : Implementation of CTcVersionedProjectCtrl
#include "TcPch.h"
#pragma hdrstop

#include "VersionedProjectW32.h"
#include "VersionedProjectCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CVersionedProjectCtrl

CVersionedProjectCtrl::CVersionedProjectCtrl() 
	: ITcOCFCtrlImpl<CVersionedProjectCtrl, CVersionedProjectClassFactory>() 
{
}

CVersionedProjectCtrl::~CVersionedProjectCtrl()
{
}

