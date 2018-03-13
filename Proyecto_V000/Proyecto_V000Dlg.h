// Proyecto_V000Dlg.h : header file
//

#if !defined(AFX_PROYECTO_V000DLG_H__DD5A3B3B_1FB8_4A97_9913_519A388ACEB5__INCLUDED_)
#define AFX_PROYECTO_V000DLG_H__DD5A3B3B_1FB8_4A97_9913_519A388ACEB5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CProyecto_V000Dlg dialog

class CProyecto_V000Dlg : public CDialog
{
// Construction
public:
	CProyecto_V000Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CProyecto_V000Dlg)
	enum { IDD = IDD_PROYECTO_V000_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CProyecto_V000Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CProyecto_V000Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void B_Agregar_Tag();
	afx_msg void OnChangeID();
	afx_msg void OnChangeNombre();
	afx_msg void OnSelchangeTab(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnClickTab(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROYECTO_V000DLG_H__DD5A3B3B_1FB8_4A97_9913_519A388ACEB5__INCLUDED_)
