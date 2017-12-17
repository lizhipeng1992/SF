/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\lib\libbase\include\FileBase.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: 
  History: 
*************************************************************************************/

#ifndef   FILE_H_FILE
#define   FILE_H_FILE

class CFileBase
{
public:
	CFileBase();
	~CFileBase();

	int Open(const char *pszFileName, int iFlags, int iMode = 0);
	int Create(const char *pszFileName, int iMode = 0);
	int Close(int iFileDes);
private:

};

#endif