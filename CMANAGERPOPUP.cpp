// CMANAGERPOPUP.cpp: 구현 파일
//

#include "pch.h"
#include "ETRAINTERFACE0503.h"
#include "CMANAGERPOPUP.h"
#include "afxdialogex.h"
#include "CARTICLE_POSTING.h"
#include "CREPORT_MANAGEMENT.h"


// CMANAGERPOPUP 대화 상자

IMPLEMENT_DYNAMIC(CMANAGERPOPUP, CDialogEx)

CMANAGERPOPUP::CMANAGERPOPUP(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ENTERMANAGER_DIALOG, pParent)
{

}

CMANAGERPOPUP::~CMANAGERPOPUP()
{
}

void CMANAGERPOPUP::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_ENTERMANAGER_GOHOME, MANAGERPOPUP_GOHOME);
}


BEGIN_MESSAGE_MAP(CMANAGERPOPUP, CDialogEx)
	ON_BN_CLICKED(IDC_ENTERMANAGER_GOHOME, &CMANAGERPOPUP::OnBnClickedEntermanagerGohome)
	ON_BN_CLICKED(IDC_ARTICLEPOST, &CMANAGERPOPUP::OnBnClickedArticlepost)
	ON_BN_CLICKED(IDC_REPORTED, &CMANAGERPOPUP::OnBnClickedReported)
END_MESSAGE_MAP()


// CMANAGERPOPUP 메시지 처리기


void CMANAGERPOPUP::OnBnClickedEntermanagerGohome()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EndDialog(10);
}


void CMANAGERPOPUP::OnBnClickedArticlepost()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CARTICLE_POSTING dlgPOSTING_DIALOG;
	dlgPOSTING_DIALOG.DoModal();
}


void CMANAGERPOPUP::OnBnClickedReported()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CREPORT_MANAGEMENT dlgREPORT_MANAGEMENT_DIALOG;
	dlgREPORT_MANAGEMENT_DIALOG.DoModal();
	
}
