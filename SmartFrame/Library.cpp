/*************************************************************************************
  FileName: SmartFrame\src\Library.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/10
  Description: 
  History: 
*************************************************************************************/

#include "Library.h"

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
	void *pLibHandle = MPLoadLibrary(pszLibPath);
	if (0 == pLibHandle)
	{
		return false;
	}

	//2.获取导出接口指针
	void *pQryInter = MPGetProcAddr((HMODULE)pLibHandle, "DllEntry");
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
	CProtoImpl *pProtoImpl = new CProtoImpl();
	pProtoImpl->SetProcCode("LoginChk");
	pProtoImpl->m_MsgBody["passWord"] = "1234";
	pProtoImpl->m_MsgBody["userName"] = "lzp";
	m_pEntry()->execute(pProtoImpl);
	delete pProtoImpl;
	return true;
}
