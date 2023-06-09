///////////////////////////////////////////////////////////////////////////////
// Sentinel.h
#pragma once

#include "VersionedProjectInterfaces.h"

class CSentinel 
	: public ITComObject
	, public ITcADI
	, public ITcWatchSource
///<AutoGeneratedContent id="InheritanceList">
	, public ITcCyclic
	, public ITcTaskNotification
///</AutoGeneratedContent>
{
public:
	DECLARE_IUNKNOWN()
	DECLARE_IPERSIST_LIB()
	DECLARE_ITCOMOBJECT_LOCKOP()
	DECLARE_ITCADI()
	DECLARE_ITCWATCHSOURCE()
	DECLARE_OBJPARAWATCH_MAP()
	DECLARE_OBJDATAAREA_MAP()

	CSentinel();
	virtual	~CSentinel();


///<AutoGeneratedContent id="InterfaceMembers">
	// ITcCyclic
	virtual HRESULT TCOMAPI CycleUpdate(ITcTask* ipTask, ITcUnknown* ipCaller, ULONG_PTR context);

	// ITcTaskNotification
	virtual HRESULT TCOMAPI NotifyCycleTimeExceeded(ITcTask* ip, ULONG_PTR context);

///</AutoGeneratedContent>

protected:
	DECLARE_ITCOMOBJECT_SETSTATE();

	HRESULT AddModuleToCaller();
	VOID RemoveModuleFromCaller();

	// Tracing
	CTcTrace m_Trace;

///<AutoGeneratedContent id="Members">
	TcTraceLevel m_TraceLevelMax;
	ITcCyclicCallerInfoPtr m_spTaskA;
	ITcCyclicCallerInfoPtr m_spTaskB;
	ITcCyclicCallerInfoPtr m_spTaskC;
///</AutoGeneratedContent>
};
