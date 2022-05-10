#pragma once


// EVENT_NEWSPAPER 대화 상자

class EVENT_NEWSPAPER : public CDialogEx
{
	DECLARE_DYNAMIC(EVENT_NEWSPAPER)

public:
	EVENT_NEWSPAPER(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~EVENT_NEWSPAPER();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EVENT_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString EVENT_NEWSPAPER_NAME;
	CString EVENTREPLY_INPUT;

	void name_update(CString);
	afx_msg void OnLbnSelchangeArticleSbyeList();
	CListBox ARTICLELIST_SBYNORE;
	afx_msg void OnBnClickedEventReplyWrite();
	afx_msg void OnEnChangeEventreplyInput();
	CListBox EVENT_NEWSPAPER_REPLIES;
	afx_msg void OnLbnSelchangeEventreplyList();
	virtual BOOL OnInitDialog();
	afx_msg void OnLbnDblclkArticleSbyeList();
	afx_msg void OnBnClickedEventLike();
	int EVENT_LIKES;
	int EVENT_DISLIKE;
	afx_msg void OnBnClickedEventDislike();
};
