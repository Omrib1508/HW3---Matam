/////////////////////////////////////////////////////////////////////////
//////////////////////////////// Lock.c /////////////////////////////////
/////////////////////////////////////////////////////////////////////////

//info: This Lock.c file of the Factori process is incharge for create
//      the Lock sturct and incharge all the functions for the Lock.

//............................Includes.................................//
//.....................................................................//
#include "Lock.h"

//...........................Functions.................................//
//.....................................................................//
/*
* Function:        Lock__InitializeLock
* description:     this fuction create new Lock sturct
* input:           Null
* output:          Lock pointer
*/
Lock* Lock__InitializeLock() {}

/*
* Function:        Lock__read_lock
* description:     this fuction lock the Lock for reading
* input:           Lock pointer
* output:          lock_status
*/
int Lock__read_lock(Lock* lock) {}

/*
* Function:        Lock__read_realese
* description:     this fuction realese the Lock from reading
* input:           Lock pointer
* output:          realse_status
*/
int Lock__read_realese(Lock* lock) {}

/*
* Function:        Lock__write_lock
* description:     this fuction lock the Lock for writeing
* input:           Lock pointer
* output:          lock_status
*/int Lock__write_lock(Lock* lock) {}

/*
* Function:        Lock__write_realese
* description:     this fuction realese the Lock from writing
* input:           Lock pointer
* output:          realse_status
*/
int Lock__write_realese(Lock* lock) {}

/*
* Function:        Lock__DestroyLock
* description:     this fuction realese the Lock struct
* input:           Lock pointer
* output:          exit_status
*/
int Lock__DestroyLock(Lock* lock) {}
