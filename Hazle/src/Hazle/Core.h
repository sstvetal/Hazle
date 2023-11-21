#pragma once


#ifdef HZ_PLATFORM_WINDOWS
   #ifdef HZ_BUILD_DLL
       #define HAZLE_API _declspec(dllexport)
    #else
       #define HAZLE_API _declspec(dllimport)
    #endif
#else
    #error Hazle only support Windows!
#endif