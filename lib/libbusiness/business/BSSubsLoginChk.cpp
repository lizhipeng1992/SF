/*************************************************************************************
  FileName: SmartFrame\lib\libbusiness\business\BSSubsLoginChk.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/31
  Description: 
  History: 
*************************************************************************************/

#include "Json.h"
#include "BSSubsLoginChk.h"


CBSSubsLoginChk::CBSSubsLoginChk()
{
}

CBSSubsLoginChk::~CBSSubsLoginChk()
{
}

bool CBSSubsLoginChk::SubsPswdChk(CJson jsSubsInfo)
{
	if (0 == strcmp(jsSubsInfo["passWord"].GetStr(), "1234")
		&& 0 == strcmp(jsSubsInfo["userName"].GetStr(), "lzp"))
	{
		return true;
	}
	return false;
}
