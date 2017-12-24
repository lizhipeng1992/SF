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
#include "EString.h"
#include "MpFile.h"

CSmartEngine* CSmartEngine::m_AppOperation = NULL;

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
	CEString esLibPath;
	esLibPath.SetData("F:\\vs2012Proj\\SmartFrame\\SmartFrame\\bin\\libbusiness.dll");

	CLibrary *lib = new CLibrary();
	lib->LibLoad(esLibPath.GetData());
	lib->LibExecute();
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
	//获取配置文件目录
	char szPathBuf[SE_PATH_MAX] = {0};
	MPGetCurrPath(szPathBuf, SE_PATH_MAX);

	CEString esConfPath;
	esConfPath.Format("%s%s%s", szPathBuf, SE_PATH_SPLIT_CHAR, pszConfigFile);
	printf("esConfig is %s", esConfPath.GetData());

}



