#pragma once
#include"stdafx.h"

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "Winmm.lib")

#include<WS2tcpip.h>
#include<WinSock2.h>
#include<MSWSock.h>
#include<mmsystem.h>
#include<WS2spi.h>
#include<mstcpip.h>

#include<Windows.h>
#include<iostream>
#include<io.h>
#include<cstdlib>
#include<stdio.h>
#include<cstdint>

#include<assert.h>
#include<fcntl.h> // 파일관리를 위한 헤더
#include<algorithm>
#include<functional>

#include<thread>
#include<mutex>
#include<memory>

#include<string>
#include<tchar.h>

#include<ctime>
#include<random>

#include<typeinfo>

#if _DEBUG
#define CONTEXT_SWITCH  sleep(1)
#else
#define CONTEXT_SWITCH  ::SwitchToThread()
#endif

typedef void(*Function)(void *);

