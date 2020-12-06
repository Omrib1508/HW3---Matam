/////////////////////////////////////////////////////////////////////////
/////////////////////////////// Lock.h //////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: This file contain the Queue struct and all  function declarion
//      that responsible for monipulate the Queue.

#ifndef LOCK_H
#define LOCK_H

#define _CRT_SECURE_NO_WARNINGS
//............................Includes.................................//
//.....................................................................//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

#include "HardCodedData.h"
//............................Defines..................................//
//.....................................................................//

//...........................Structs...................................//
//.....................................................................//
typedef struct lock {
	HANDLE read_lock;
	HANDLE write_lock;
} Lock;

//...........................Functions.................................//
//.....................................................................//

Lock* Lock__InitializeLock();

int Lock__read_lock(Lock* lock);

int Lock__read_realese(Lock* lock);

int Lock__write_lock(Lock* lock);

int Lock__write_realese(Lock* lock);

int Lock__DestroyLock(Lock* lock);

#endif // !LOCK_H
