/*************************************************************************************
  FileName: SmartFrame\lib\libbase\include\Json.h
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/12/11
  Description: 
  History: 
*************************************************************************************/
#ifndef   JSON_H_FILE
#define   JSON_H_FILE

#include "json/json.h"

class CJson : public Json::Value
{
public:
	CJson();
	~CJson();

private:
}; 

#endif