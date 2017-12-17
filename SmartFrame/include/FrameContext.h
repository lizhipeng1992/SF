/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\include\FrameContext.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/26
  Description: 系统上下文
  History: 
*************************************************************************************/

#include "public.h"

class CFrameContext
{
public:
	static CFrameContext *GetInstance()
	{
		if (m_FrameContext == NULL)
		{
			m_FrameContext = new CFrameContext();
		}
		return m_FrameContext;
	}

	~CFrameContext();

private:
	CFrameContext();
	static CFrameContext *m_FrameContext;
};

CFrameContext::CFrameContext()
{
}

CFrameContext::~CFrameContext()
{
}