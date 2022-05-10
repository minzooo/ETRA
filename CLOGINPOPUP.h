#pragma once


// CLOGINPOPUP 대화 상자

class CLOGINPOPUP : public CDialogEx
{
	DECLARE_DYNAMIC(CLOGINPOPUP)

public:
	CLOGINPOPUP(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CLOGINPOPUP();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOGIN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeId();
public:
	CString INPUTID;
public:
	afx_msg void OnEnChangePw();
public:
	CString INPUTPW;
public:
	afx_msg void OnBnClickedLogin();
	afx_msg void OnBnClickedOk();
};
