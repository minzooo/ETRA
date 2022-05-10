#pragma once


// MANAGER_REPORTED_POPUP 대화 상자

class MANAGER_REPORTED_POPUP : public CDialogEx
{
	DECLARE_DYNAMIC(MANAGER_REPORTED_POPUP)

public:
	MANAGER_REPORTED_POPUP(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~MANAGER_REPORTED_POPUP();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MANAGER_SENSOR_POPUP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedManagerReplyCensor();
};
