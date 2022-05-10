
// ETRAINTERFACE0503Dlg.h: 헤더 파일
//

#pragma once


// CETRAINTERFACE0503Dlg 대화 상자
class CETRAINTERFACE0503Dlg : public CDialogEx
{
// 생성입니다.
public:
	CETRAINTERFACE0503Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ETRAINTERFACE0503_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox MAIN_LIST;
	afx_msg void OnBnClickedNewspaper1();
	afx_msg void OnBnClickedNewspaper2();
	afx_msg void OnBnClickedNewspaper3();
	afx_msg void OnBnClickedNewspaper4();
	afx_msg void OnBnClickedNewspaper5();
	afx_msg void OnBnClickedNewspaper6();
	afx_msg void OnBnClickedNewspaper7();
	afx_msg void OnBnClickedNewspaper8();
	afx_msg void OnBnClickedNewspaper9();
	afx_msg void OnBnClickedNewspaper10();
	afx_msg void OnLbnDblclkMainEventlist();
	int jh;
};
