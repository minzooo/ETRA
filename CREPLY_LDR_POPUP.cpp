// CREPLY_LDR_POPUP.cpp: 구현 파일
//

#include "pch.h"
#include "ETRAINTERFACE0503.h"
#include "CREPLY_LDR_POPUP.h"
#include "afxdialogex.h"


// CREPLY_LDR_POPUP 대화 상자

IMPLEMENT_DYNAMIC(CREPLY_LDR_POPUP, CDialogEx)

CREPLY_LDR_POPUP::CREPLY_LDR_POPUP(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_REPLY_LDR_POPUP, pParent)
{

}

CREPLY_LDR_POPUP::~CREPLY_LDR_POPUP()
{
}

void CREPLY_LDR_POPUP::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CREPLY_LDR_POPUP, CDialogEx)
	ON_BN_CLICKED(IDC_REPLY_DOLIKE, &CREPLY_LDR_POPUP::OnBnClickedReplyDolike)
	ON_BN_CLICKED(IDC_REPLY_DODISLIKE, &CREPLY_LDR_POPUP::OnBnClickedReplyDodislike)
	ON_BN_CLICKED(IDC_DOREPORT, &CREPLY_LDR_POPUP::OnBnClickedDoreport)
END_MESSAGE_MAP()


// CREPLY_LDR_POPUP 메시지 처리기


void CREPLY_LDR_POPUP::OnBnClickedReplyDolike()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//like함수연동
	EndDialog(10);
}


void CREPLY_LDR_POPUP::OnBnClickedReplyDodislike()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//dislike함수연동
	EndDialog(10);
}


void CREPLY_LDR_POPUP::OnBnClickedDoreport()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//report함수연동
	EndDialog(10);
}
