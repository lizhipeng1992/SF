/*************************************************************************************
  FileName: SmartFrame\lib\libmultiplat\business\MPFile_unix.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/24
  Description: 
  History: 
*************************************************************************************/

#include "MpFile.h"

#ifndef _WIN32

FILE * MPFileOpen( const char *pszFileName, const char *pszOpenType )
{
	return fopen(pszFileName, pszOpenType);
}

char *MPGetCurrPath(char *szPathBuf, size_t size)
{
	return getcwd(szPathBuf, size);
}

int MPFileClose(FILE *pFile)
{
	return fclose(pFile);
}
#endif