
// calculatorDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "calculator.h"
#include "calculatorDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CcalculatorDlg �Ի���



CcalculatorDlg::CcalculatorDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CcalculatorDlg::IDD, pParent), mStr(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CcalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, AFX_IDB_CHECKLISTBOX_95, mStr);
}

BEGIN_MESSAGE_MAP(CcalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(AFX_IDB_CHECKLISTBOX_95, &CcalculatorDlg::OnEnChangeIdbChecklistbox95)
	ON_BN_CLICKED(IDC_BUTTON_0, &CcalculatorDlg::OnBnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON_1, &CcalculatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON_2, &CcalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON_3, &CcalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON_4, &CcalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON_5, &CcalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON_6, &CcalculatorDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON_7, &CcalculatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON_8, &CcalculatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON_9, &CcalculatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTONAdd, &CcalculatorDlg::OnBnClickedButtonadd)
	ON_BN_CLICKED(IDC_BUTTONSub, &CcalculatorDlg::OnBnClickedButtonsub)
	ON_BN_CLICKED(IDC_BUTTONMult, &CcalculatorDlg::OnBnClickedButtonmult)
	ON_BN_CLICKED(IDC_BUTTONDiv, &CcalculatorDlg::OnBnClickedButtondiv)
	ON_BN_CLICKED(IDC_BUTTONEqual, &CcalculatorDlg::OnBnClickedButtonequal)
	ON_BN_CLICKED(IDC_BUTTONClear, &CcalculatorDlg::OnBnClickedButtonclear)
END_MESSAGE_MAP()


// CcalculatorDlg ��Ϣ�������

BOOL CcalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
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

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CcalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CcalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CcalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CcalculatorDlg::OnEnChangeIdbChecklistbox95()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CcalculatorDlg::OnBnClickedButton0()
{
	UpdateData(TRUE);
	mStr += "0";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton1()
{
	UpdateData(TRUE);
	mStr += "1";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton2()
{
	UpdateData(TRUE);
	mStr += "2";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton3()
{
	UpdateData(TRUE);
	mStr += "3";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton4()
{
	UpdateData(TRUE);
	mStr += "4";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton5()
{
	UpdateData(TRUE);
	mStr += "5";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton6()
{
	UpdateData(TRUE);
	mStr += "6";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton7()
{
	UpdateData(TRUE);
	mStr += "7";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButton8()
{
	UpdateData(TRUE);
	mStr += "8";
	UpdateData(FALSE);

}


void CcalculatorDlg::OnBnClickedButton9()
{
	UpdateData(TRUE);
	mStr += "9";
	UpdateData(FALSE);
}


void CcalculatorDlg::OnBnClickedButtonadd()
{
	SaveFirstValue();
	mFlag = FLAG_JIA;
}


void CcalculatorDlg::OnBnClickedButtonsub()
{
	SaveFirstValue();
	mFlag = FLAG_JIAN;
}


void CcalculatorDlg::OnBnClickedButtonmult()
{
	SaveFirstValue();
	mFlag = FLAG_CHENG;
}


void CcalculatorDlg::OnBnClickedButtondiv()
{
	SaveFirstValue();
	mFlag = FLAG_CHU;
}


void CcalculatorDlg::OnBnClickedButtonequal()
{
	Calculator();
}


void CcalculatorDlg::OnBnClickedButtonclear()
{
	UpdateData(TRUE);
	mStr = " ";
	mNum1 = 0;
	mNum2 = 0;
	mFlag = FLAG_JIA;
	UpdateData(FALSE);
}

//�����һ������ֵ
void CcalculatorDlg::SaveFirstValue()
{
	UpdateData(TRUE);
	mNum1 = atoi(mStr);
	mStr = " ";
	UpdateData(FALSE);
}
//������
void CcalculatorDlg::Calculator() 
{
	UpdateData(TRUE);
	mNum2 = atoi(mStr);
	int result = 0;
	switch (mFlag)
	{
	case FLAG_JIA:						//��  
		result = mNum1 + mNum2;
		break;
	case FLAG_JIAN:						//�� 
		result = mNum1 - mNum2;
		break;
	case FLAG_CHENG:					//��  
		result = mNum1 * mNum2;
		break;
	case FLAG_CHU:						//��  
		if (mNum2 == 0)
		{
			result = mNum1;
		}
		else
		{
			result = mNum1 / mNum2;
		}
		break;
	default:
		break;
	}

	mStr.Format("%d", result);
	UpdateData(FALSE);
	mNum1 = result;
	mNum2 = 0;
}
