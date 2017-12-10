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
	//1.��ȡ�������
	void *pLibHandle = LoadLibrary(pszLibPath);
	if (0 == pLibHandle)
	{
		return false;
	}

	//2.��ȡ�����ӿ�ָ��
	void *pQryInter = GetProcAddress((HMODULE)pLibHandle, "QryInterface");
	if (0 == pQryInter)
	{
		return false;
	}

	//3.ͨ������ģ�屾�ػ�ָ��
	BaseEtry *pEntry = (BaseEtry *)pQryInter;

	//4.����Ŀ������߼�
	pEntry()->execute();

	return true;
}
