#pragma once


// CARTICLE_POSTING 대화 상자

class CARTICLE_POSTING : public CDialogEx
{
	DECLARE_DYNAMIC(CARTICLE_POSTING)

public:
	CARTICLE_POSTING(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CARTICLE_POSTING();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_POSTING_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
