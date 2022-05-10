// CUSERMAIN.cpp: 구현 파일
//

#include "pch.h"
#include "ETRAINTERFACE0503.h"
#include "CUSERMAIN.h"
#include "afxdialogex.h"
#include "CUSERMAIN.h"
#include "CEVENT_NEWSPAPER.h"


// CUSERMAIN 대화 상자

IMPLEMENT_DYNAMIC(CUSERMAIN, CDialogEx)

CUSERMAIN::CUSERMAIN(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_USERMAIN_DIALOG, pParent)
{

}

CUSERMAIN::~CUSERMAIN()
{
}

void CUSERMAIN::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MAIN_EVENTLIST, MAIN_LIST);
}


BEGIN_MESSAGE_MAP(CUSERMAIN, CDialogEx)
	ON_BN_CLICKED(IDC_NEWSPAPER1, &CUSERMAIN::OnBnClickedNewspaper1)
	ON_BN_CLICKED(IDC_NEWSPAPER2, &CUSERMAIN::OnBnClickedNewspaper2)
	ON_LBN_SELCHANGE(IDC_MAIN_EVENTLIST, &CUSERMAIN::OnLbnSelchangeMainEventlist)
END_MESSAGE_MAP()


// CUSERMAIN 메시지 처리기


void CUSERMAIN::OnBnClickedNewspaper1()
{
}


void CUSERMAIN::OnBnClickedNewspaper2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CUSERMAIN::OnLbnSelchangeMainEventlist()
{

	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
