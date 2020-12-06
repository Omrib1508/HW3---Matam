/////////////////////////////////////////////////////////////////////////
///////////////////////// HardCodedData.h ///////////////////////////////
/////////////////////////////////////////////////////////////////////////

//info: This file contain all defines of the Father process.

#ifndef HARDCODEDDATA_H
#define HARDCODEDDATA_H

#include <Windows.h>

//............................Defines..................................//
//.....................................................................//

#define ARGUMENTS							5
#define MISSION_FILE						1
#define PRIORITY_FILE						2
#define MISSION_NUM							3
#define THREADS_NUM							4
#define TIMEOUT_IN_MILLISECONDS				8 * 1000
#define THREAD_WAIT_TIME_IN_MILISECONDS		500



#define ASSERT(name, arg) do{																\
	if (!arg){																				\
		if(errno)																			\
			printf("Error: %s was failed: %s\n", name, strerror(errno));					\
		else if (GetLastError())															\
			printf("Error: %s was failed: WinError 0x%X\n", name, GetLastError());			\
		else																				\
			printf("Error: %s was failed: unknown error\n", name);							\
		return(EXIT_FAILURE);																\
	}																						\
} while (0);



#endif // !HARDCODEDDATA_H
