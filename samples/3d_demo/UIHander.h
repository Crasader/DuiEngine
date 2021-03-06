#pragma once

class CMainDlg;

class CUIHander
{
public:
	CUIHander(CMainDlg *pMainDlg);
	~CUIHander(void);

protected:
	LRESULT OnInitDialog(HWND hWnd, LPARAM lParam);

	void OnMsgBtnClick();
	
	LRESULT OnSlider_RolateX(LPDUINMHDR pNmhdr);
	LRESULT OnSlider_RolateY(LPDUINMHDR pNmhdr);
	LRESULT OnSlider_RolateZ(LPDUINMHDR pNmhdr);
	LRESULT OnSlider_OffsetZ(LPDUINMHDR pNmhdr);

	BEGIN_MSG_MAP_EX(CUIHander)
		MSG_DUI_NOTIFY()
		MSG_WM_INITDIALOG(OnInitDialog)
	END_MSG_MAP()

	DUI_NOTIFY_MAP_BEGIN()
		DUI_NOTIFY_NAME_HANDLER("slider_rotatex",DUINM_SLIDER,OnSlider_RolateX)
		DUI_NOTIFY_NAME_HANDLER("slider_rotatey",DUINM_SLIDER,OnSlider_RolateY)
		DUI_NOTIFY_NAME_HANDLER("slider_rotatez",DUINM_SLIDER,OnSlider_RolateZ)
		DUI_NOTIFY_NAME_HANDLER("slider_offsetz",DUINM_SLIDER,OnSlider_OffsetZ)
	DUI_NOTIFY_MAP_END()	
private:
	CMainDlg * m_pMainDlg; 
};
