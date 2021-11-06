#pragma once

#ifdef AL_PLATFORM_WINDOWS
	#ifdef AL_BUILD_DLL
		#define ALMOND_API _declspec(dllexport)
	#else
		#define ALMOND_API _declspec(dllimport)
	#endif
#else
	#error Hazel only supports windows!
#endif // AL_BUILD_DLL

