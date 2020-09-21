/*************************************************************************************
  FileName: SmartFrame\lib\libmultiplat\business\MpDll_unix.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/24
  Description: 
  History: 
*************************************************************************************/

#ifndef _WIN32
#include "MpDll.h"


void *MPLoadLibrary(const char *pszLibPath)
{
	return dlopen(pszLibPath, RTLD_LAZY);
}

void *MPGetProcAddr(HANDLE_MOD hMod, const char *pszProcName)
{
	return dlsym(hMod, pszProcName);
}

int MPFreeLibrary(HANDLE_MOD hMod)
{
	return dlclose(hMod);
}

#endif
