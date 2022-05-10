// CARTICLE_POSTING.cpp: 구현 파일
//

#include "pch.h"
#include "ETRAINTERFACE0503.h"
#include "CARTICLE_POSTING.h"
#include "afxdialogex.h"


// CARTICLE_POSTING 대화 상자

IMPLEMENT_DYNAMIC(CARTICLE_POSTING, CDialogEx)

CARTICLE_POSTING::CARTICLE_POSTING(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_POSTING_DIALOG, pParent)
{

}

CARTICLE_POSTING::~CARTICLE_POSTING()
{
}

void CARTICLE_POSTING::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CARTICLE_POSTING, CDialogEx)
END_MESSAGE_MAP()


// CARTICLE_POSTING 메시지 처리기
