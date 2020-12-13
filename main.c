/////////////////////////////////////////////////////////////////////////
///////////////////////////////// main.c ////////////////////////////////
/////////////////////////////////////////////////////////////////////////

//info: This main.c file of the Factori process is incharge of reading the
//      input file, dicript the factori code, and update the input file.


//............................Includes.................................//
//.....................................................................//
#include "Factori.h"
#include "HardCodedData.h"
#include "Queue.h"

//...........................Functions.................................//
//.....................................................................//
/*
* Function:        main
* description:     the main function does the process
* input:           number of arguments, array of argument
* output:          process exit code
*/
int main(int argc, char* argv[]) {
    PrimeNum_List* list;
    int exit_code = EXIT_SUCCESS;

    list=PrimeNum_List__init_node();
    ReadFromFile(argc, argv, list);
    return exit_code;
}
