/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\include\BaseEntry.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/24
  Description: ������ڻ���
  History: 
*************************************************************************************/

#ifdef WIN32
#define DLLIMP __declspec(dllimport)
#define DLLEXP __declspec(dllexport)
#endif

class CBaseEntry
{
public:
	CBaseEntry();
	~CBaseEntry();
	virtual void execute() = 0;
private:
};

CBaseEntry::CBaseEntry()
{
}

CBaseEntry::~CBaseEntry()
{
}