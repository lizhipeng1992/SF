/*************************************************************************************
  FileName: SmartFrame\src\SmartEngine.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/23
  Description: 服务主文件
  History: 
*************************************************************************************/

#include "SmartEngine.h"
#include "Library.h"
#include "EString.h"
#include "MpFile.h"

CSmartEngine* CSmartEngine::m_AppOperation = NULL;

CSmartEngine::CSmartEngine()
{
	//获取配置文件目录
	MPGetCurrPath(m_szWorkPath, SE_PATH_MAX);
}
//应用初始化
bool CSmartEngine::SEngineInit(const char *pszConfigFile)
{
	//加载配置文件
	LoadEngineConfig(pszConfigFile);

	return true;
}

//预处理
void CSmartEngine::SEnginePreDeal()
{
	//库文件路径
	CEString esLibName;
	esLibName.SetData("libbusiness.dll");

	CEString esLibPath;
	esLibPath.Format("%s%s%s", m_szWorkPath, SE_PATH_SPLIT_CHAR, esLibName.GetData());

	CLibrary *lib = new CLibrary();
	lib->LibLoad(esLibPath.GetData());
	lib->LibExecute();
	delete lib;
}

//主处理函数
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

//加载配置文件
void CSmartEngine::LoadEngineConfig(const char *pszConfigFile)
{
	//配置文件路径
	/*CEString esConfPath;
	esConfPath.Format("%s%s%s", m_szWorkPath, SE_PATH_SPLIT_CHAR, pszConfigFile);
	printf("esConfig is %s\n", esConfPath.GetData());

	//打开文件
	FILE *fileConf = MPFileOpen(esConfPath.GetData(), SE_FILE_READ);*/

	//未完..
}



