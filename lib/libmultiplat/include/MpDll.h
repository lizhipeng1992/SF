/*************************************************************************************
  FileName: SmartFrame\lib\libmultiplat\include\MpDll.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: ��ƽ̨��̬��ͷ�ļ�
  History: 
*************************************************************************************/

#ifndef   MPDLL_H_FILE
#define   MPDLL_H_FILE

#include "MpBase.h"

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : ���ض�̬��
******************************************/
void *MPLoadLibrary(const char *pszLibPath);

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : ��ȡ��������ָ��
******************************************/
void *MPGetProcAddr(HANDLE_MOD hMod, const char *pszProcName);

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : �ͷŶ�̬��
******************************************/
int MPFreeLibrary(HANDLE_MOD hMod);

#endif
