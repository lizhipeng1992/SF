/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\lib\libbase\business\EString.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/11
  Description: 
  History: 
*************************************************************************************/

#include "EString.h"

CEString::CEString(const char *pStr/* = NULL*/)
{
	if (pStr == NULL)
	{
		m_length = 0;
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		m_length = strlen(pStr);
		m_data = new char[m_length + 1];
		strcpy(m_data, pStr);
	}
}

CEString::CEString( const CEString &str )
{
	m_length = str.size();
	m_data = new char[m_length + 1];
	strcpy(m_data, str.c_str());
}

size_t CEString::size() const
{
	return m_length;
}

const char* CEString::c_str() const
{
	return m_data;
}

const char* CEString::GetData()
{
	return m_data;
}

const void CEString::SetData( const char *pStr /*= NULL*/ )
{
	if (pStr == NULL)
	{
		m_length = 0;
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		m_length = strlen(pStr);
		m_data = new char[m_length + 1];
		strcpy(m_data, pStr);
	}
}

const char* CEString::Format( const char *pszFormat, ... )
{
	char szBuffer [204800] = {0};
	va_list ap;
	va_start(ap, pszFormat);
	vsprintf(szBuffer, pszFormat, ap);
	va_end(ap);

	m_length = strlen(szBuffer);
	m_data = new char[m_length + 1];
	strcpy(m_data, szBuffer);

	return szBuffer;
}

CEString::~CEString()
{
	m_length = 0;
	delete m_data;
}