void CreateNotifyInitWin();
void DestroyNotifyInitWin();


#ifdef WIN32
LRESULT __stdcall NotifyInitWndProc(HWND,UINT,WPARAM,LPARAM);
HWND NotifyWin=NULL;
ONEGAME_ONLY( HWND NotifyWinParent; )
#endif