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

//��������
bool CLibrary::LibLoad(const char* pszLibPath)
{
	//1.��ȡ�������
	void *pLibHandle = MPLoadLibrary(pszLibPath);
	if (0 == pLibHandle)
	{
		return false;
	}

	//2.��ȡ�����ӿ�ָ��
	void *pQryInter = MPGetProcAddr((HMODULE)pLibHandle, "DllEntry");
	if (0 == pQryInter)
	{
		return false;
	}

	//3.ͨ������ģ�屾�ػ�ָ��
	m_pEntry = (BaseEntry *)pQryInter;

	return true;
}

//ִ������Ŀ������߼�
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
