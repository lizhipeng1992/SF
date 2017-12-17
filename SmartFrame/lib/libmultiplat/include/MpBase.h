/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\lib\libmultiplat\include\MpBase.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: 跨平台库公共头文件
  History: 
*************************************************************************************/

enum PLATTYPE
{
	WIN,
	LINUX,
	UNIX,
	AIX
};

#ifdef WIN32
#define HANDLE_MOD HMODULE
#elif LINUX
#define HANDLE_MOD void
#endif

