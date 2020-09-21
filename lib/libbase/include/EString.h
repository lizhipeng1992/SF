/*************************************************************************************
  FileName: SmartFrame\lib\libbase\include\EString.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/11
  Description: 
  History: 
*************************************************************************************/

#ifndef   ESTRING_H_FILE
#define   ESTRING_H_FILE

#include "ObjectBase.h"
#include <stdarg.h>

class CEString : public CObjectBase
{
public:
	//ͨ�ù��캯��
	CEString(const char *pStr = NULL);

	//�������캯��
	CEString(const CEString &str);

	size_t size() const;		//��ȡ����
	const char* c_str() const;	//��ȡ�ַ���

	const char* GetData();
	const void SetData(const char *pStr = NULL);
	const char* Format(const char *pszFormat, ...);

	~CEString();

private:
	char *m_data;
	size_t m_length;
};



#endif