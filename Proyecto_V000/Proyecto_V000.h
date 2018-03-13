// Proyecto_V000.h : main header file for the PROYECTO_V000 application
//

#if !defined(AFX_PROYECTO_V000_H__76F34D32_AE17_4A10_A649_8D557E7C744E__INCLUDED_)
#define AFX_PROYECTO_V000_H__76F34D32_AE17_4A10_A649_8D557E7C744E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CProyecto_V000App:
// See Proyecto_V000.cpp for the implementation of this class
//

class CProyecto_V000App : public CWinApp
{
public:
	CProyecto_V000App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProyecto_V000App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CProyecto_V000App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROYECTO_V000_H__76F34D32_AE17_4A10_A649_8D557E7C744E__INCLUDED_)
