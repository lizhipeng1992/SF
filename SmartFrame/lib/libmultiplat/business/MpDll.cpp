/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\lib\libmultiplat\business\MpDll.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: 
  History: 
*************************************************************************************/

#include "MpDll.h"
#ifdef WIN32
void *MPLoadLibrary(const char *pszLibPath)
{
	return LoadLibrary(pszLibPath);
}

void *MPGetProcAddr(HANDLE_MOD hMod, const char *pszProcName)
{
	return GetProcAddress(hMod, pszProcName);
}


#elif LINUX
void *MPLoadLibrary(const char *pszLibPath)
{
	return dlopen(pszLibPath);
}

void *MPGetProcAddr(HANDLE_MOD hMod, const char *pszProcName)
{
	return dlsym(hMod, pszProcName);
}
#endif
