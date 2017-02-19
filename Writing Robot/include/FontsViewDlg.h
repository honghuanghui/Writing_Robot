
// FontsViewDlg.h : 头文件
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"


// CFontsViewDlg 对话框
class CFontsViewDlg : public CDialog
{
// 构造
public:
	CFontsViewDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FONTSVIEW_DIALOG };
#endif

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
	afx_msg void OnBnClickedBexit();
	afx_msg void OnEnChangeEentered();
	afx_msg void OnLbnSelchangeLfonts();
	CString m_strEntered;
	afx_msg void OnNMReleasedcaptureSliderBold(NMHDR *pNMHDR, LRESULT *pResult);
	CSliderCtrl m_slider_bold;
	int m_intBold;
	afx_msg void OnBnClickedCheckItalic();
	CButton m_ctlCheckItalic;
	bool m_bCheckItalic;
	afx_msg void OnNMReleasedcaptureSliderAngle(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMReleasedcaptureSliderHeight(NMHDR *pNMHDR, LRESULT *pResult);
	void FormBitmapInfo(int nWidth, int nHeight, int nBits);
	CSliderCtrl m_slider_angle;
	int m_intAngle;
	CSliderCtrl m_slider_height;
	int m_intHeight;
	afx_msg void OnBnClickedCheckReverse();
	CButton m_ctlBtnReverse;
	bool m_bCheckReverse;
	afx_msg void OnCbnSelchangeComboNbits();
	CComboBox m_ctlComboNbits;
	int m_intBits;
	afx_msg void OnEnChangeEditHeight();
	afx_msg void OnEnChangeEditBold();
	afx_msg void OnEnChangeEditAngle();
	void ShowFontChar(CDC* pdc);
	afx_msg void OnClose();
	void FormFileHeader(int nWidth, int nHeight, int nBits);
	void ShowVHScrollBar(void);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	void Paint();
	void DrawTTFOutline(CDC* pDC, UINT uChar, int x, int y, int ascent);
	int FixedToInt(FIXED f);
	FIXED fxDiv2(FIXED fxVal1, FIXED fxVal2);
private:
	void FillFontList(void);
	void SetMyFont(void);
public:
	CListBox m_ctlFontList;
	CString m_strFontName;
	CStatic m_ctlDisplay;
	LPBYTE pBuf;
	LPBITMAPINFO pbmpinfo;
	LPBITMAPFILEHEADER pfileinfo;
	int charLineW;
	CString m_strStatus;
	int m_intPixX;
	int m_intPixY;
	CScrollBar m_ctlScrollH;
	CScrollBar m_ctlScrollV;
	int m_intScrollHPos;
	int m_intScrollVPos;
	afx_msg void OnBnClickedButtonSave();
	afx_msg void OnEnChangeEditPixx();
	int m_ctrlRadio1;
	afx_msg void OnBnClickedButton1();
};
