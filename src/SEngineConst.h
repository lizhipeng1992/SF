/*************************************************************************************
  FileName: SmartFrame\src\SEngineConst.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/24
  Description: ϵͳ��������ͷ�ļ�
  History: 
*************************************************************************************/

#ifndef   SENGINECONST_H_FILE
#define   SENGINECONST_H_FILE

#define SE_PATH_MAX 512  //·����󳤶�

//·���ָ��
#ifdef _WIN32
#define SE_PATH_SPLIT_CHAR "\\"
#define SE_DYNAMIC_LIB_SUFFIX ".dll"
#else
#define SE_PATH_SPLIT_CHAR "//"
#define SE_DYNAMIC_LIB_SUFFIX ".so"
#endif

#endif