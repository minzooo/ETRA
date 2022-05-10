// CLOGINPOPUP.cpp: 구현 파일
//

#include "pch.h"
#include "ETRAINTERFACE0503.h"
#include "CLOGINPOPUP.h"
#include "afxdialogex.h"


// CLOGINPOPUP 대화 상자

IMPLEMENT_DYNAMIC(CLOGINPOPUP, CDialogEx)

CLOGINPOPUP::CLOGINPOPUP(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_LOGIN_DIALOG, pParent)
	, INPUTID(_T(""))
	, INPUTPW(_T(""))
{

}

CLOGINPOPUP::~CLOGINPOPUP()
{
}

void CLOGINPOPUP::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_ID, INPUTID);
	DDX_Text(pDX, IDC_PW, INPUTPW);
}


BEGIN_MESSAGE_MAP(CLOGINPOPUP, CDialogEx)
	/*
	ON_EN_CHANGE(IDC_ID, &CLOGINPOPUP::OnEnChangeId)
	ON_EN_CHANGE(IDC_PW, &CLOGINPOPUP::OnEnChangePw)
	ON_BN_CLICKED(IDC_LOGIN, &CLOGINPOPUP::OnBnClickedLogin)
	*/
END_MESSAGE_MAP()


// CLOGINPOPUP 메시지 처리기

void CLOGINPOPUP::OnBnClickedLogin()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//CDialogEx::OnOK;

}
