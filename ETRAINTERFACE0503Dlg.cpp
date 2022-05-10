
// ETRAINTERFACE0503Dlg.cpp: 구현 파일
//

#include<iostream>
#include <string>
using namespace std;

#include "pch.h"
#include "framework.h"
#include "ETRAINTERFACE0503.h"
#include "ETRAINTERFACE0503Dlg.h"
#include "afxdialogex.h"
#include "CLOGINPOPUP.h"
#include "CUSERMAIN.h"
#include "CEVENT_NEWSPAPER.h"
#include "CMANAGERPOPUP.h"
#include "CARTICLE_POSTING.h"
#include "Management.h"
#include "Reaction.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.
int manager = false;
Management management;
Reaction reaction;

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CETRAINTERFACE0503Dlg 대화 상자



CETRAINTERFACE0503Dlg::CETRAINTERFACE0503Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ETRAINTERFACE0503_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CETRAINTERFACE0503Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_MAIN_EVENTLIST, MAIN_LIST);
}

BEGIN_MESSAGE_MAP(CETRAINTERFACE0503Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_NEWSPAPER1, &CETRAINTERFACE0503Dlg::OnBnClickedNewspaper1)
	ON_BN_CLICKED(IDC_NEWSPAPER2, &CETRAINTERFACE0503Dlg::OnBnClickedNewspaper2)
	ON_BN_CLICKED(IDC_NEWSPAPER3, &CETRAINTERFACE0503Dlg::OnBnClickedNewspaper3)
	ON_BN_CLICKED(IDC_NEWSPAPER4, &CETRAINTERFACE0503Dlg::OnBnClickedNewspaper4)
	ON_BN_CLICKED(IDC_NEWSPAPER5, &CETRAINTERFACE0503Dlg::OnBnClickedNewspaper5)
	ON_BN_CLICKED(IDC_NEWSPAPER6, &CETRAINTERFACE0503Dlg::OnBnClickedNewspaper6)
	ON_BN_CLICKED(IDC_NEWSPAPER7, &CETRAINTERFACE0503Dlg::OnBnClickedNewspaper7)
	ON_BN_CLICKED(IDC_NEWSPAPER8, &CETRAINTERFACE0503Dlg::OnBnClickedNewspaper8)
	ON_BN_CLICKED(IDC_NEWSPAPER9, &CETRAINTERFACE0503Dlg::OnBnClickedNewspaper9)
	ON_BN_CLICKED(IDC_NEWSPAPER10, &CETRAINTERFACE0503Dlg::OnBnClickedNewspaper10)
	ON_LBN_DBLCLK(IDC_MAIN_EVENTLIST, &CETRAINTERFACE0503Dlg::OnLbnDblclkMainEventlist)
END_MESSAGE_MAP()


// CETRAINTERFACE0503Dlg 메시지 처리기

BOOL CETRAINTERFACE0503Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.
#if 1
	// TODO: 여기에 추가 초기화 작업을 추가합니다.
	CLOGINPOPUP dlgLOGIN_DIALOG;
	CMANAGERPOPUP dlgENTERMANAGER_DIALOG;
	CARTICLE_POSTING dlgPOSTING_DIALOG;
	Userinfo userinfo;

	int done = false;
	
	int ret;
	int login;

	do {
	
		ret = dlgLOGIN_DIALOG.DoModal();//login 창띄우기
		if (ret == IDOK) {//IDOK로 닫힌경우
			userinfo.make_testdata();
			login = userinfo.greeter(dlgLOGIN_DIALOG.INPUTID, dlgLOGIN_DIALOG.INPUTPW);
			if (login == 1){//user
				done = true;
			}
			else if (login == 2) {//manager
				manager = true;
				done = true;
			}
			else {
				MessageBox(_T("Wrong ID/ PW"));
			}
		}
		else if (ret == IDCANCEL) {//켄슬로닫힌경우
			AfxGetMainWnd()->PostMessage(WM_CLOSE);
			done = true;

		}

	} while (!done);

	if (manager == true)
	{
		done = false;

		do {
			ret = dlgENTERMANAGER_DIALOG.DoModal();

			if (ret == IDCANCEL) {
				AfxGetMainWnd()->PostMessage(WM_CLOSE);
				done = true;
			}

			else if (ret == 10) {
				done = true;
			}




		done = true;
		} while (!done);

	}

#endif
	MAIN_LIST.InsertString(-1, _T("Russia-Ukraine War"));
	MAIN_LIST.InsertString(-1, _T("The Coronavirus Pandemic"));
	MAIN_LIST.InsertString(-1, _T("Gabby Petito"));
	MAIN_LIST.InsertString(-1, _T("terror attack in Israel"));
	MAIN_LIST.InsertString(-1, _T("Hong Kong's next leader"));
	MAIN_LIST.InsertString(-1, _T("Explosion in Havana, Cuba"));
	MAIN_LIST.InsertString(-1, _T("Brazil's former leader Lula survived."));
	MAIN_LIST.InsertString(-1, _T("Tottenham-Liverpool"));
	MAIN_LIST.InsertString(-1, _T("Ireland election"));
	MAIN_LIST.InsertString(-1, _T("Airport 100ml rule"));
	MAIN_LIST.InsertString(-1, _T("Madrid Open"));
	MAIN_LIST.InsertString(-1, _T("Tornado"));
	MAIN_LIST.InsertString(-1, _T("Rare case of monkeypox reported in England"));
	MAIN_LIST.InsertString(-1, _T("Inflation"));
	MAIN_LIST.InsertString(-1, _T("California"));


	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CETRAINTERFACE0503Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CETRAINTERFACE0503Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CETRAINTERFACE0503Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}





void CETRAINTERFACE0503Dlg::OnBnClickedNewspaper1()
{
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	CString name = L"The New York Times";
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = name;
	//dlgEVENT_DIALOG.ARTICLELIST_SBYNORE.AddString(_T("ARTICLE_01"));
	//dlgEVENT_DIALOG.name_update(name);
	dlgEVENT_DIALOG.DoModal();

	
}


void CETRAINTERFACE0503Dlg::OnBnClickedNewspaper2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	CString name = L"The Guardian";
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = name;
	dlgEVENT_DIALOG.DoModal();
}


void CETRAINTERFACE0503Dlg::OnBnClickedNewspaper3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	CString name = L"The Daily Mail";
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = name;
	dlgEVENT_DIALOG.DoModal();
}


void CETRAINTERFACE0503Dlg::OnBnClickedNewspaper4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	CString name = L"The Wall Street Journal";
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = name;
	dlgEVENT_DIALOG.DoModal();
}


void CETRAINTERFACE0503Dlg::OnBnClickedNewspaper5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	CString name = L" The Washington Post";
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = name;
	dlgEVENT_DIALOG.DoModal();
}


void CETRAINTERFACE0503Dlg::OnBnClickedNewspaper6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	CString name = L"The People's Daily";
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = name;
	dlgEVENT_DIALOG.DoModal();
}


void CETRAINTERFACE0503Dlg::OnBnClickedNewspaper7()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	CString name = L"The Daily Telegraph";
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = name;
	dlgEVENT_DIALOG.DoModal();
}


void CETRAINTERFACE0503Dlg::OnBnClickedNewspaper8()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	CString name = L"USA Today";
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = name;
	dlgEVENT_DIALOG.DoModal();
}


void CETRAINTERFACE0503Dlg::OnBnClickedNewspaper9()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	CString name = L"Los Angeles Times";
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = name;
	dlgEVENT_DIALOG.DoModal();
}


void CETRAINTERFACE0503Dlg::OnBnClickedNewspaper10()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	CString name = L"El Mundo";
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = name;
	dlgEVENT_DIALOG.DoModal();
}


void CETRAINTERFACE0503Dlg::OnLbnDblclkMainEventlist()
{
	CString eventname;
	EVENT_NEWSPAPER dlgEVENT_DIALOG;
	int index = MAIN_LIST.GetCurSel();
	MAIN_LIST.GetText(index, eventname);
	dlgEVENT_DIALOG.EVENT_NEWSPAPER_NAME = eventname;
	dlgEVENT_DIALOG.DoModal();
	
}
