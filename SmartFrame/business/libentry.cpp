/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\business\libentry.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/24
  Description: 条带入口实现
  History: 
*************************************************************************************/

#include "libentry.h"

CBaseEntry *QryInterface()
{
	return new CLibentry;
}

void CLibentry::execute()
{
	printf("we will rock you");
	return;
}
