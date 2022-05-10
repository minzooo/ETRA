#pragma once


// CMANAGERPOPUP 대화 상자

class CMANAGERPOPUP : public CDialogEx
{
	DECLARE_DYNAMIC(CMANAGERPOPUP)

public:
	CMANAGERPOPUP(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CMANAGERPOPUP();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ENTERMANAGER_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CButton MANAGERPOPUP_GOHOME;
	afx_msg void OnBnClickedEntermanagerGohome();
	afx_msg void OnBnClickedArticlepost();
	afx_msg void OnBnClickedReported();
};
