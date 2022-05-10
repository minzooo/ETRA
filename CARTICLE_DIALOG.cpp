// CARTICLE_DIALOG.cpp: 구현 파일
//

#include "pch.h"
#include "ETRAINTERFACE0503.h"
#include "CARTICLE_DIALOG.h"
#include "afxdialogex.h"
#include "CREPLY_LDR_POPUP.h"
#include "Autofilter.h"

// CARTICLE_DIALOG 대화 상자

IMPLEMENT_DYNAMIC(CARTICLE_DIALOG, CDialogEx)

CARTICLE_DIALOG::CARTICLE_DIALOG(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ARTICLE_DIALOG, pParent)
	, ARTICLE_HEADLINE(_T(""))
	, ARTICLE_EVENTNAME(_T(""))
	, ARTICLEVIEW_NEWSPAPERNAME(_T(""))
{

}

CARTICLE_DIALOG::~CARTICLE_DIALOG()
{
}

void CARTICLE_DIALOG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_ATRICLEVIEW_HEADLINE, ARTICLE_HEADLINE);
	DDX_Text(pDX, IDC_ARTICLE_MAINTEXT, ARTICLE_TEXT);
	DDX_Control(pDX, IDC_ARTICLE_REPLYS, ARTICLE_REPLIES);
	DDX_Text(pDX, IDC_ARTICLE_REPLY_INPUT, ARTICLE_REPLYINPUT);
	DDX_Text(pDX, IDC_ARTICLEVIEW_EVENT, ARTICLE_EVENTNAME);
	DDX_Text(pDX, IDC_ARTICLEVIEW_NEWSPAPER, ARTICLEVIEW_NEWSPAPERNAME);
}


BEGIN_MESSAGE_MAP(CARTICLE_DIALOG, CDialogEx)
	ON_BN_CLICKED(IDC_SORTREPLY_BYLIKES, &CARTICLE_DIALOG::OnBnClickedSortreplyBylikes)
	ON_LBN_DBLCLK(IDC_ARTICLE_REPLYS, &CARTICLE_DIALOG::OnLbnDblclkArticleReplys)
	ON_EN_CHANGE(IDC_ARTICLE_REPLY_INPUT, &CARTICLE_DIALOG::OnEnChangeArticleReplyInput)
	ON_BN_CLICKED(IDC_ARTICLE_REPLY_WRITE, &CARTICLE_DIALOG::OnBnClickedArticleReplyWrite)
	ON_LBN_SELCHANGE(IDC_ARTICLE_REPLYS, &CARTICLE_DIALOG::OnLbnSelchangeArticleReplys)
	ON_BN_CLICKED(IDC_SORTREPLY_BYLATEST, &CARTICLE_DIALOG::OnBnClickedSortreplyBylatest)
END_MESSAGE_MAP()


// CARTICLE_DIALOG 메시지 처리기


void CARTICLE_DIALOG::OnBnClickedSortreplyBylikes()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


BOOL CARTICLE_DIALOG::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.
	if (manager == 0)
	{
		GetDlgItem(IDC_ARTICLE_REPOST)->ShowWindow(SW_HIDE);
		GetDlgItem(IDC_ARTICLE_DELETE)->ShowWindow(SW_HIDE);
	
	}
	
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void CARTICLE_DIALOG::OnLbnDblclkArticleReplys()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CARTICLE_DIALOG::OnEnChangeArticleReplyInput()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CARTICLE_DIALOG::OnBnClickedArticleReplyWrite()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	ARTICLE_REPLIES.InsertString(-1,(Autofilter(ARTICLE_REPLYINPUT)));
	ARTICLE_REPLYINPUT = L" ";
	UpdateData(FALSE);


}


void CARTICLE_DIALOG::OnLbnSelchangeArticleReplys()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CREPLY_LDR_POPUP dlgREPLY_LDR_POPUP;
	int ret;
	int done = 0;
	ret=dlgREPLY_LDR_POPUP.DoModal();

	do
	{
		if (ret == IDCANCEL) {
			AfxGetMainWnd()->PostMessage(WM_CLOSE);
			done = true;
		}

		if (ret == 10) {
			AfxGetMainWnd()->PostMessage(WM_CLOSE);
			done = true;
		}

	} while (!done);
}


void CARTICLE_DIALOG::OnBnClickedSortreplyBylatest()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
