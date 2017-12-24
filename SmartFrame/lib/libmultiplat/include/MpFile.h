/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\lib\libmultiplat\include\MpFile.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: ��ƽ̨�ļ�����ͷ�ļ�
  History: 
*************************************************************************************/

#ifndef   MPFILE_H_FILE
#define   MPFILE_H_FILE

#include "MpBase.h"
#include <stdio.h>

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : ���ļ�
******************************************/
FILE *MPFileOpen(const char *pszFileName, const char *pszOpenType);

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : ��ȡ��ǰ����Ŀ¼
******************************************/
char *MPGetCurrPath(char *szPathBuf, size_t size);

#endif
