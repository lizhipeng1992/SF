/*************************************************************************************
  FileName: F:\vs2012Proj\SmartFrame\SmartFrame\SmartFrame.cpp
  Author:   lizhipeng
  Version : 1.0.0.0
  Date:2017/11/23
  Description: Ӧ�ó���������ļ�
  History: 
*************************************************************************************/

#include "SmartEngine.h"
int main(int argc, char* argv[])
{
	//��ʼ��Ӧ��
	CSmartEngine::GetInstance()->SEngineInit(argv[1]);

	try
	{
		//Ӧ��Ԥ����
		CSmartEngine::GetInstance()->SEnginePreDeal();

		//����Ӧ��
		CSmartEngine::GetInstance()->SEngineProcess();
	}
	catch(...)
	{

	}

	return 0;
}

