/*************************************************************************************
  FileName: SmartFrame\lib\libmultiplat\include\MpDll.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: 跨平台动态库头文件
  History: 
*************************************************************************************/

#ifndef   MPDLL_H_FILE
#define   MPDLL_H_FILE

#include "MpBase.h"

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : 加载动态库
******************************************/
void *MPLoadLibrary(const char *pszLibPath);

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : 获取函数访问指针
******************************************/
void *MPGetProcAddr(HANDLE_MOD hMod, const char *pszProcName);

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : 释放动态库
******************************************/
int MPFreeLibrary(HANDLE_MOD hMod);

#endif
