/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\include\libentry.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/24
  Description: �������ʵ��
  History: 
*************************************************************************************/

#include <stdio.h>
#include "BaseEntry.h"

extern "C"
DLLIMP CBaseEntry *DllEntry();

class CLibentry : public CBaseEntry
{
public:
	CLibentry();
	~CLibentry();

	static CLibentry *GetInstance()
	{
		if (m_libentry == NULL)
		{
			m_libentry = new CLibentry();
		}

		return m_libentry;
	}

	static CLibentry *m_libentry;
private:
	void execute(CProtoImpl *pProtoImpl);
	
};

CLibentry::CLibentry()
{
}

CLibentry::~CLibentry()
{
}