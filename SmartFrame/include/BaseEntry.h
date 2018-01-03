/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\include\BaseEntry.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/24
  Description: ������ڻ���
  History: 
*************************************************************************************/

#ifndef   BASEENTRY_H_FILE
#define   BASEENTRY_H_FILE

#ifdef WIN32
#define DLLIMP __declspec(dllimport)
#define DLLEXP __declspec(dllexport)
#endif

#include "ProtoImpl.h"

class CBaseEntry
{
public:
	CBaseEntry(){};
	~CBaseEntry(){};
	virtual void execute(CProtoImpl *pProtoImpl) = 0;
private:
};

#endif
