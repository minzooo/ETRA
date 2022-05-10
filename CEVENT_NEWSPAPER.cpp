// EVENT_NEWSPAPER.cpp: 구현 파일
//

#include<iostream>
#include <string>
using namespace std;
#include "pch.h"
#include "ETRAINTERFACE0503.h"
#include "CEVENT_NEWSPAPER.h"
#include "afxdialogex.h"
#include "CARTICLE_DIALOG.h"
#include "CREPLY_LDR_POPUP.h"
#include "Autofilter.h"


// EVENT_NEWSPAPER 대화 상자

IMPLEMENT_DYNAMIC(EVENT_NEWSPAPER, CDialogEx)



EVENT_NEWSPAPER::EVENT_NEWSPAPER(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_EVENT_DIALOG, pParent)
	, EVENT_NEWSPAPER_NAME(_T(""))
	, EVENTREPLY_INPUT(_T(""))
	
	, EVENT_LIKES(0)
	, EVENT_DISLIKE(0)
{

}

EVENT_NEWSPAPER::~EVENT_NEWSPAPER()
{
}

void EVENT_NEWSPAPER::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EVENT_NEWSPAPER_NAME, EVENT_NEWSPAPER_NAME);
	DDX_Text(pDX, IDC_EVENTREPLY_INPUT, EVENTREPLY_INPUT);
	DDX_Control(pDX, IDC_ARTICLE_SBYE_LIST, ARTICLELIST_SBYNORE);
	DDX_Control(pDX, IDC_EVENTREPLY_LIST, EVENT_NEWSPAPER_REPLIES);
	DDX_Text(pDX, IDC_EVENT_SHOWLIKES, EVENT_LIKES);
	DDX_Text(pDX, IDC_EVENT_SHOWDISLIKES, EVENT_DISLIKE);
}

void EVENT_NEWSPAPER::name_update(CString name)
{
	EVENT_NEWSPAPER_NAME=name;
	UpdateData(false);

}


BEGIN_MESSAGE_MAP(EVENT_NEWSPAPER, CDialogEx)
	ON_LBN_SELCHANGE(IDC_ARTICLE_SBYE_LIST, &EVENT_NEWSPAPER::OnLbnSelchangeArticleSbyeList)
	ON_BN_CLICKED(IDC_EVENT_REPLY_WRITE, &EVENT_NEWSPAPER::OnBnClickedEventReplyWrite)
	ON_EN_CHANGE(IDC_EVENTREPLY_INPUT, &EVENT_NEWSPAPER::OnEnChangeEventreplyInput)
	ON_LBN_SELCHANGE(IDC_EVENTREPLY_LIST, &EVENT_NEWSPAPER::OnLbnSelchangeEventreplyList)
	ON_LBN_DBLCLK(IDC_ARTICLE_SBYE_LIST, &EVENT_NEWSPAPER::OnLbnDblclkArticleSbyeList)
	ON_BN_CLICKED(IDC_EVENT_LIKE, &EVENT_NEWSPAPER::OnBnClickedEventLike)
	ON_BN_CLICKED(IDC_EVENT_DISLIKE, &EVENT_NEWSPAPER::OnBnClickedEventDislike)
END_MESSAGE_MAP()


// EVENT_NEWSPAPER 메시지 처리기


void EVENT_NEWSPAPER::OnLbnSelchangeArticleSbyeList()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
}


void EVENT_NEWSPAPER::OnBnClickedEventReplyWrite()
{
	UpdateData(TRUE);
	EVENT_NEWSPAPER_REPLIES.InsertString(-1,(Autofilter(EVENTREPLY_INPUT)));
	EVENTREPLY_INPUT = L" ";
	UpdateData(FALSE);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void EVENT_NEWSPAPER::OnEnChangeEventreplyInput()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void EVENT_NEWSPAPER::OnLbnSelchangeEventreplyList()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CREPLY_LDR_POPUP dlgREPLY_LDR_POPUP;
	dlgREPLY_LDR_POPUP.DoModal();



}


BOOL EVENT_NEWSPAPER::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	if (EVENT_NEWSPAPER_NAME == L"Russia-Ukraine War")
	{
		ARTICLELIST_SBYNORE.InsertString(-1, _T("Dozens feared dead after Russia bombs school where Ukrainians were sheltering, official says"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("First lady Jill Biden makes unannounced trip to Ukraine"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("U2 performs inside a Ukraine train station"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("UK foreign secretary “horrified” by Luhansk deadly school bombing"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("15-year-old Ukrainian drove herself and others through battlefield to safety, despite leg wounds"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("First Lady Jill Biden marks Mother's Day by visiting with Ukrainian refugees in Slovakia"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("Workers get Ukraine's railways running again after Russian forces destroyed bridges"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("UK prime minister pays tribute to victims in Ukraine on Victory in Europe Day"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("Ukrainian fighters vow to keep fighting at besieged steel plant"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("Several dead after civilian convoy escaping fighting near Kharkiv fired on, police say"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("Ukrainians reject Russia’s Victory Day as they rebuild their shattered homes"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("It's 2 p.m. in Kyiv. Here's what you need to know"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("Both Ukraine and Russia claim successes in ongoing combat in the Black Sea"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("UK announces additional $1.6 billion in military support for Ukraine, ahead of G7 summit"));
		ARTICLELIST_SBYNORE.InsertString(-1, _T("'There is literally no paper trail': How Russia experts say Putin hides a fortune"));

	}
	else {
		CString name;
		for (int i = 0; i < 10; i++)
		{

			//name = (EVENT_NEWSPAPER_NAME + L"_ARTCLE_");
			name.Format(L"%s_ARTICLE_%02d", EVENT_NEWSPAPER_NAME, i + 1);
			//name.Format(L"%s_ARTICLE_%02d", "aaa", i);
			ARTICLELIST_SBYNORE.AddString(name);
		}
	}
	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void EVENT_NEWSPAPER::OnLbnDblclkArticleSbyeList()
{
	CString name;
	int done = 0;
	int ret;
	int index = ARTICLELIST_SBYNORE.GetCurSel();
	ARTICLELIST_SBYNORE.GetText(index, name);
	CARTICLE_DIALOG dlgARTICLE_DIALOG;
	dlgARTICLE_DIALOG.ARTICLE_HEADLINE = name;
	dlgARTICLE_DIALOG.ARTICLE_EVENTNAME = L"EVENTNAME";
	dlgARTICLE_DIALOG.ARTICLEVIEW_NEWSPAPERNAME = L"NEWSPAPERNAME";

	//시연용
	if (name == L"'There is literally no paper trail': How Russia experts say Putin hides a fortune")
	{
		dlgARTICLE_DIALOG.ARTICLE_EVENTNAME = L"Russia - Ukraine War";
		dlgARTICLE_DIALOG.ARTICLEVIEW_NEWSPAPERNAME = L"CNN";
		dlgARTICLE_DIALOG.ARTICLE_TEXT = L"The sprawling billion-dollar palace that sits on a hilltop overlooking the Black Sea is seen by some Kremlin critics as the ultimate emblem of Russian President Vladimir Putin's legacy of corruption.\nDubbed Putin's Palace, the 190,000 square-foot mega-mansion was purportedly built for his personal use with funds from billionaire oligarchs, whom he allegedly allowed to flourish in Russia's notoriously corrupt economy so long as they shared the wealth -- with him.";

	}
	ret = dlgARTICLE_DIALOG.DoModal();
	
	/// </summary>
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

	}while (!done);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void EVENT_NEWSPAPER::OnBnClickedEventLike()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	UpdateData(TRUE);
	EVENT_LIKES += 1;
	UpdateData(FALSE);
}


void EVENT_NEWSPAPER::OnBnClickedEventDislike()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	EVENT_DISLIKE += 1;
	UpdateData(FALSE);
}
