/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\lib\libmultiplat\include\MpDll.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: 
  History: 
*************************************************************************************/

#include "MpBase.h"

#ifdef WIN32
#include <Windows.h>
#elif LINUX
#include <dlfcn.h>
#endif

void *MPLoadLibrary(const char *pszLibPath);
void *MPGetProcAddr(HANDLE_MOD hMod, const char *pszProcName);