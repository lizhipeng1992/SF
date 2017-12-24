/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\include\SmartEngine.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/23
  Description: 
  History: 
*************************************************************************************/

#include "public.h"

class CSmartEngine
{
public:

	~CSmartEngine(){};

	static CSmartEngine *GetInstance()
	{
		if (m_AppOperation == NULL)
		{
			m_AppOperation = new CSmartEngine();
		}

		return m_AppOperation;
	}

	bool SEngineInit(const char *pszConfigFile);
	void SEnginePreDeal();
	void SEngineProcess();
private:
	CSmartEngine(){};

	void LoadEngineConfig(const char *pszConfigFile);
	static CSmartEngine *m_AppOperation;
};
