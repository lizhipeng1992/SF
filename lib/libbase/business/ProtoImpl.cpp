/*************************************************************************************
  FileName: SmartFrame\lib\libbase\business\ProtoImpl.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2018/01/03
  Description: 
  History: 
*************************************************************************************/
#include "ProtoImpl.h"

void CProtoImpl::SetProcCode(const char *pszProcCode)
{
	m_pszProcCode = pszProcCode;
}

const char * CProtoImpl::GetProcCode()
{
	return m_pszProcCode;
}