
// SerialMFCDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "mscomm1.h"


// CSerialMFCDlg 对话框
class CSerialMFCDlg : public CDialogEx
{
// 构造
public:
	CSerialMFCDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_SERIALMFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBClear();
	afx_msg void OnCbnSelchangeCSelect();
	CComboBox m_comboCom;
	CMscomm1 m_ctrlComm;
private:
	bool m_setOk;
public:
	CString m_strTXData;
	CString m_strRXData;
	DECLARE_EVENTSINK_MAP()
	void OnComm();
	afx_msg void OnBnClickedBSeed();
};
