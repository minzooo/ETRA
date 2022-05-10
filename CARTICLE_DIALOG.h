#pragma once


// CARTICLE_DIALOG 대화 상자

class CARTICLE_DIALOG : public CDialogEx
{
	DECLARE_DYNAMIC(CARTICLE_DIALOG)

public:
	CARTICLE_DIALOG(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CARTICLE_DIALOG();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ARTICLE_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedSortreplyBylikes();
	CString ARTICLE_HEADLINE;
	CString ARTICLE_TEXT;//원래CEdit
	CListBox ARTICLE_REPLIES;
	CString ARTICLE_REPLYINPUT;
	virtual BOOL OnInitDialog();
	CString ARTICLE_EVENTNAME;//원래CEdit
	CString ARTICLEVIEW_NEWSPAPERNAME;
	afx_msg void OnLbnDblclkArticleReplys();
	afx_msg void OnEnChangeArticleReplyInput();
	afx_msg void OnBnClickedArticleReplyWrite();
	afx_msg void OnLbnSelchangeArticleReplys();
	afx_msg void OnBnClickedSortreplyBylatest();
};
