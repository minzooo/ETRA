#pragma once


// CREPLY_LDR_POPUP 대화 상자

class CREPLY_LDR_POPUP : public CDialogEx
{
	DECLARE_DYNAMIC(CREPLY_LDR_POPUP)

public:
	CREPLY_LDR_POPUP(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CREPLY_LDR_POPUP();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REPLY_LDR_POPUP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedReplyDolike();
	afx_msg void OnBnClickedReplyDodislike();
	afx_msg void OnBnClickedDoreport();
};
