/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\lib\libbase\business\FileBase.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: 
  History: 
*************************************************************************************/

#include "FileBase.h"

CFileBase::CFileBase()
{
}

CFileBase::~CFileBase()
{
}

//���ļ�
int CFileBase::Open( const char *pszFileName, int iFlags, int iMode /*= 0*/ )
{
	return -1;
}

//�����ļ�
int CFileBase::Create( const char *pszFileName, int iMode /*= 0*/ )
{
	return -1;
}

//�ر��ļ�
int CFileBase::Close( int iFileDes )
{
	return -1;
}
