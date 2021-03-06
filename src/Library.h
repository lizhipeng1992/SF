/*************************************************************************************
  FileName: SmartFrame\src\Library.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/10
  Description: 
  History: 
*************************************************************************************/

#ifndef   LIBRARY_H_FILE
#define   LIBRARY_H_FILE

#include "public.h"
#include "BaseEntry.h"
#include "MpDll.h"

typedef CBaseEntry *(BaseEntry)();

#ifndef _WIN32
typedef void* HMODULE;
#endif

class CLibrary
{
public:
	CLibrary();
	~CLibrary();

	//加载条带
	bool LibLoad(const char* pszLibPath);

	//执行条带目标代码逻辑
	bool LibExecute();
private:

	//条带间访问接口指针变量
	BaseEntry *m_pEntry;
};

#endif
