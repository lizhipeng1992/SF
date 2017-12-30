/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\lib\libbusiness\business\BSSubsLoginChk.cpp
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

bool CBSSubsLoginChk::SubsPswdChk()
{
	CJson jsSubsPwd;
	jsSubsPwd["passWord"] = "1234";

	if (0 == strcmp(jsSubsPwd["passWord"].GetData(), "1234"))
	{
		return true;
	}
	return false;
}
