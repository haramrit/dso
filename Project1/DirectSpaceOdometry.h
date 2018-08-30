#pragma once

#ifdef PROJECT1_EXPORTS
    #define PROJECT1_API __declspec(dllexport)
#else
	#define PROJECT1_API __declspec(dllexport)
#endif


		extern "C"
		{
			 PROJECT1_API void my_exit_handler(int s);
			 PROJECT1_API void settingsDefault(int preset);
			 PROJECT1_API void parseArgument(char* arg);
			 PROJECT1_API void usleep(__int64 usec);
			 PROJECT1_API int _stdcall mymain(int argc, char** argv);


		}
	
