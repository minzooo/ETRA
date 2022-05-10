#pragma once


// CREPORT_MANAGEMENT 대화 상자

class CREPORT_MANAGEMENT : public CDialogEx
{
	DECLARE_DYNAMIC(CREPORT_MANAGEMENT)

public:
	CREPORT_MANAGEMENT(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CREPORT_MANAGEMENT();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REPORT_MANAGEMENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeReportedList();
	afx_msg void OnLbnDblclkReportedList();
	CListBox REPORTED_LIST;
};
