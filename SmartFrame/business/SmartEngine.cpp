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

//Ӧ�ó�ʼ��
bool CSmartEngine::SEngineInit()
{
	CLibrary *lib = new CLibrary();
	lib->LibLoad("F:\\vs2012Proj\\SmartFrame\\SmartFrame\\bin\\libbusiness.dll");
	lib->LibExecute();
	return true;
}

//��������
void CSmartEngine::SEngineProcess()
{
	return;
}
