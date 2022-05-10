﻿#pragma once


// CUSERMAIN 대화 상자

class CUSERMAIN : public CDialogEx
{
	DECLARE_DYNAMIC(CUSERMAIN)

public:
	CUSERMAIN(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CUSERMAIN();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_USERMAIN_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedNewspaper1();
	afx_msg void OnBnClickedNewspaper2();
	CListBox MAIN_LIST;
	afx_msg void OnLbnSelchangeMainEventlist();
};
