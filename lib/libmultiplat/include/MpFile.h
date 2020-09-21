/*************************************************************************************
  FileName: SmartFrame\lib\libmultiplat\include\MpFile.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: ��ƽ̨�ļ�����ͷ�ļ�
  History: 
*************************************************************************************/

#ifndef   MPFILE_H_FILE
#define   MPFILE_H_FILE

#include "MpBase.h"
#include "stdio.h"

//�ļ��򿪷�ʽ
#define SE_FILE_READ          "r"
#define SE_FILE_WRITE         "w"
#define SE_FILE_APPEND        "a"
#define SE_FILE_READPLUS      "r+"
#define SE_FILE_WRITEPLUS     "w+"
#define SE_FILE_APPENDPLUS    "a+"

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

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : �ر��ļ�
******************************************/
int MPFileClose(FILE *pFile);

#endif
