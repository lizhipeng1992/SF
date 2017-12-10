/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\business\Library.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/24
  Description: 
  History: 
*************************************************************************************/

#include "Library.h"
#include "BaseEntry.h"

#ifdef WIN32
#include<Windows.h>
#endif

typedef CBaseEntry *(BaseEtry)();

bool CLibrary::Load(const char* pszLibPath)
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
	BaseEtry *pEntry = (BaseEtry *)pQryInter;

	//4.调用目标代码逻辑
	pEntry()->execute();

	return true;
}
