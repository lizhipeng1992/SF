/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\SmartFrame.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/23
  Description: 应用程序主入口文件
  History: 
*************************************************************************************/

#include "SmartEngine.h"
int main(int argc, char* argv[])
{
	//1.初始化应用
	CSmartEngine::GetInstance()->SEngineInit(argv[1]);

	//2.启动应用
	try
	{
		CSmartEngine::GetInstance()->SEngineProcess();
	}
	catch(...)
	{

	}

	return 0;
}

