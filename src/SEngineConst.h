/*************************************************************************************
  FileName: SmartFrame\src\SEngineConst.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/24
  Description: 系统常量定义头文件
  History: 
*************************************************************************************/

#ifndef   SENGINECONST_H_FILE
#define   SENGINECONST_H_FILE

#define SE_PATH_MAX 512  //路径最大长度

//路径分割符
#ifdef _WIN32
#define SE_PATH_SPLIT_CHAR "\\"
#else
#define SE_PATH_SPLIT_CHAR "//"
#endif

#endif