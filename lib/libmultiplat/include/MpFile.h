/*************************************************************************************
  FileName: SmartFrame\lib\libmultiplat\include\MpFile.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: 跨平台文件操作头文件
  History: 
*************************************************************************************/

#ifndef   MPFILE_H_FILE
#define   MPFILE_H_FILE

#include "MpBase.h"
#include "stdio.h"

//文件打开方式
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
* Description : 打开文件
******************************************/
FILE *MPFileOpen(const char *pszFileName, const char *pszOpenType);

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : 获取当前工作目录
******************************************/
char *MPGetCurrPath(char *szPathBuf, size_t size);

/******************************************
* Author : lizhipeng
* Version : 1.0.0.0
* Date : 2017/12/24
* Description : 关闭文件
******************************************/
int MPFileClose(FILE *pFile);

#endif
