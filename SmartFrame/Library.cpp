/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\Library.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/10
  Description: 
  History: 
*************************************************************************************/

#include "Library.h"

#ifdef WIN32
#include<Windows.h>
#endif

CLibrary::CLibrary()
{
}

CLibrary::~CLibrary()
{
}

//加载条带
bool CLibrary::LibLoad(const char* pszLibPath)
{
	//1.获取条带句柄
	void *pLibHandle = LoadLibrary(pszLibPath);
	if (0 == pLibHandle)
	{
		return false;
	}

	//2.获取导出接口指针
	void *pQryInter = GetProcAddress((HMODULE)pLibHandle, "QryInterface");
	if (0 == pQryInter)
	{
		return false;
	}

	//3.通过函数模板本地化指针
	m_pEntry = (BaseEntry *)pQryInter;

	return true;
}

//执行条带目标代码逻辑
bool CLibrary::LibExecute()
{
	m_pEntry()->execute();
	return true;
}
