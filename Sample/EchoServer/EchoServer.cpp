#include "stdafx.h"
#include "EchoLogicEntry.h"
#include "SFJsonProtocol.h"

#pragma comment(lib, "EngineLayer.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	EchoLogicEntry* pLogicEntry = new EchoLogicEntry();
	
	auto isResult = SFEngine::GetInstance()->Intialize(pLogicEntry, new SFPacketProtocol<SFJsonProtocol>);

	if (isResult == false)
	{	
		return 0;
	}

	SFEngine::GetInstance()->Start();	

	getchar();
	
	SFEngine::GetInstance()->ShutDown();

	return 0;
}