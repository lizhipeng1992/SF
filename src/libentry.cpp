/*************************************************************************************
  FileName: SmartFrame\src\libentry.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/24
  Description: 条带入口实现
  History: 
*************************************************************************************/

#include "libentry.h"
#include "BSSubsLoginChk.h"
#include "string.h"

CBaseEntry *DllEntry()
{
	return new CLibentry;
}

void CLibentry::execute(CProtoImpl *pProtoImpl)
{
	printf("we will rock you");


	if (0 == strcmp(pProtoImpl->GetProcCode(), "LoginChk"))
	{
		CBSSubsLoginChk bsSubsLoginChk;
		bsSubsLoginChk.SubsPswdChk(pProtoImpl->m_MsgBody);
	}
	
	return;
}
