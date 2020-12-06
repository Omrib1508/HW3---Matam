/////////////////////////////////////////////////////////////////////////
//////////////////////////// PrimeNum.h /////////////////////////////////
/////////////////////////////////////////////////////////////////////////


//info: This file contain PrimeNum list struct and all  function 
//      declarion that responsible for dismantle a number to primes 
//      numbers and arrange them in order from small to bigest one.

#ifndef PRIMENUM_H
#define PRIMENUM_H

#define _CRT_SECURE_NO_WARNINGS
//............................Includes.................................//
//.....................................................................//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "HardCodedData.h"
//............................Defines..................................//
//.....................................................................//

//...........................Structs...................................//
//.....................................................................//
typedef struct PrimeNum_node {
	int prime_num;
	struct PrimeNum_node* next;
} PrimeNum_List;

//...........................Functions.................................//
//.....................................................................//
PrimeNum_List* PrimeNum_List__init_node();

int PrimeNum_List__add_node(int prime_num, PrimeNum_List* list);

int PrimeNum_List__realese_list(PrimeNum_List* list);

void PrimeNum_list__arrange(PrimeNum_List* list);

PrimeNum_List* num_2_PrimeNum_List(int num, PrimeNum_List* list);

#endif // !PRIMENUM_h
