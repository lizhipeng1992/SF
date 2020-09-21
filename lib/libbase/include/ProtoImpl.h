/*************************************************************************************
  FileName: SmartFrame\lib\libbase\include\ProtoImpl.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2018/01/03
  Description: 协议实现部分
  History: 
*************************************************************************************/

#ifndef   PROTOIMPL_H_FILE
#define   PROTOIMPL_H_FILE

#include "BaseProtocol.h"
#include "Json.h"

class CProtoImpl : public CBaseProtocol
{
public:
	CProtoImpl(){m_pszProcCode = "";};
	~CProtoImpl(){};

	void SetProcCode(const char *pszProcCode);
	const char *GetProcCode();

	//协议报文体
	CJson m_MsgBody;
private:
	
	//报文唯一标识
	const char *m_pszProcCode;
};

#endif
