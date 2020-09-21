/*************************************************************************************
  FileName: SmartFrame\lib\libmultiplat\include\MpBase.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/17
  Description: 跨平台库公共头文件
  History: 
*************************************************************************************/
#ifndef   MPBASE_H_FILE
#define   MPBASE_H_FILE

enum PLATTYPE
{
	WIN,
	LINUX,
	UNIX,
	AIX
};

#ifdef _WIN32
#define HANDLE_MOD HMODULE
#else
#define HANDLE_MOD void*
#endif

#if _WIN32
#include <Windows.h>
#include <direct.h>
#else
#include <dlfcn.h>
#include <unistd.h>
#endif

#endif