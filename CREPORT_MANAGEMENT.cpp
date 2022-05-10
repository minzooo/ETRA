// CREPORT_MANAGEMENT.cpp: 구현 파일
//

#include "pch.h"
#include "ETRAINTERFACE0503.h"
#include "CREPORT_MANAGEMENT.h"
#include "afxdialogex.h"
#include "MANAGER_REPORTED_POPUP.h"

// CREPORT_MANAGEMENT 대화 상자

IMPLEMENT_DYNAMIC(CREPORT_MANAGEMENT, CDialogEx)

CREPORT_MANAGEMENT::CREPORT_MANAGEMENT(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_REPORT_MANAGEMENT, pParent)
{

}

CREPORT_MANAGEMENT::~CREPORT_MANAGEMENT()
{
}

void CREPORT_MANAGEMENT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_REPORTED_LIST, REPORTED_LIST);
}


BEGIN_MESSAGE_MAP(CREPORT_MANAGEMENT, CDialogEx)
	ON_LBN_SELCHANGE(IDC_REPORTED_LIST, &CREPORT_MANAGEMENT::OnLbnSelchangeReportedList)
	ON_LBN_DBLCLK(IDC_REPORTED_LIST, &CREPORT_MANAGEMENT::OnLbnDblclkReportedList)
END_MESSAGE_MAP()


// CREPORT_MANAGEMENT 메시지 처리기


void CREPORT_MANAGEMENT::OnLbnSelchangeReportedList()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CREPORT_MANAGEMENT::OnLbnDblclkReportedList()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	int ret;
	int done = 0;
	MANAGER_REPORTED_POPUP dlgMANAGER_SENSOR_POPUP;

	ret = dlgMANAGER_SENSOR_POPUP.DoModal();
	do {
		if (ret == 10) {
			AfxGetMainWnd()->PostMessage(WM_CLOSE);
			done = true;
		}
	} while (done == 0);

}
