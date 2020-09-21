/*************************************************************************************
  FileName: SmartFrame\lib\libmultiplat\business\MpDll_win.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: 
  History: 
*************************************************************************************/

#ifdef _WIN32

#include "MpDll.h"


void *MPLoadLibrary(const char *pszLibPath)
{
	return LoadLibrary(pszLibPath);
}

void *MPGetProcAddr(HANDLE_MOD hMod, const char *pszProcName)
{
	return GetProcAddress(hMod, pszProcName);
}

int MPFreeLibrary(HANDLE_MOD hMod)
{
	return FreeLibrary(hMod);
}
#endif
