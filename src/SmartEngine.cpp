/*************************************************************************************
  FileName: SmartFrame\src\SmartEngine.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/23
  Description: �������ļ�
  History: 
*************************************************************************************/

#include "SmartEngine.h"
#include "Library.h"
#include "EString.h"
#include "MpFile.h"

CSmartEngine* CSmartEngine::m_AppOperation = NULL;

CSmartEngine::CSmartEngine()
{
	//��ȡ�����ļ�Ŀ¼
	MPGetCurrPath(m_szWorkPath, SE_PATH_MAX);
}
//Ӧ�ó�ʼ��
bool CSmartEngine::SEngineInit(const char *pszConfigFile)
{
	//���������ļ�
	LoadEngineConfig(pszConfigFile);

	return true;
}

//Ԥ����
void CSmartEngine::SEnginePreDeal()
{
	//���ļ�·��
	CEString esLibName;
	esLibName.SetData("libbusiness.dll");

	CEString esLibPath;
	esLibPath.Format("%s%s%s", m_szWorkPath, SE_PATH_SPLIT_CHAR, esLibName.GetData());

	CLibrary *lib = new CLibrary();
	lib->LibLoad(esLibPath.GetData());
	lib->LibExecute();
	delete lib;
}

//��������
void CSmartEngine::SEngineProcess()
{
	for (;;)
	{
		if (1 == 1)
		{
			break;
		}
	}
	return;
}

//���������ļ�
void CSmartEngine::LoadEngineConfig(const char *pszConfigFile)
{
	//�����ļ�·��
	/*CEString esConfPath;
	esConfPath.Format("%s%s%s", m_szWorkPath, SE_PATH_SPLIT_CHAR, pszConfigFile);
	printf("esConfig is %s\n", esConfPath.GetData());

	//���ļ�
	FILE *fileConf = MPFileOpen(esConfPath.GetData(), SE_FILE_READ);*/

	//δ��..
}



