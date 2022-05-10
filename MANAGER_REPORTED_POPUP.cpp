// MANAGER_REPORTED_POPUP.cpp: 구현 파일
//

#include "pch.h"
#include "ETRAINTERFACE0503.h"
#include "MANAGER_REPORTED_POPUP.h"
#include "afxdialogex.h"


// MANAGER_REPORTED_POPUP 대화 상자

IMPLEMENT_DYNAMIC(MANAGER_REPORTED_POPUP, CDialogEx)

MANAGER_REPORTED_POPUP::MANAGER_REPORTED_POPUP(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MANAGER_SENSOR_POPUP, pParent)
{

}

MANAGER_REPORTED_POPUP::~MANAGER_REPORTED_POPUP()
{
}

void MANAGER_REPORTED_POPUP::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MANAGER_REPORTED_POPUP, CDialogEx)
	ON_BN_CLICKED(IDC_MANAGER_REPLY_CENSOR, &MANAGER_REPORTED_POPUP::OnBnClickedManagerReplyCensor)
END_MESSAGE_MAP()


// MANAGER_REPORTED_POPUP 메시지 처리기


void MANAGER_REPORTED_POPUP::OnBnClickedManagerReplyCensor()
{
	//report정보 저장함수
	EndDialog(10);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
