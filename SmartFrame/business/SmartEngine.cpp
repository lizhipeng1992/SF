/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\business\SmartEngine.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/23
  Description: 
  History: 
*************************************************************************************/

#include "SmartEngine.h"
#include "Library.h"
#ifdef WIN32
#include<Windows.h>
#endif // WIN32

CSmartEngine* CSmartEngine::m_AppOperation = NULL;

//应用初始化
bool CSmartEngine::SEngineInit()
{
	CLibrary *lib = new CLibrary();
	lib->Load("F:\\vs2012Proj\\SmartFrame\\SmartFrame\\bin\\libbusiness.dll");
	return true;
}

//主处理函数
void CSmartEngine::SengineProcess()
{
	return;
}