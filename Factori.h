//info: This file contain PrimeNum list struct and all  function
//      declarion that responsible for dismantle a number to primes
//      numbers and arrange them in order from small to bigest one.

#ifndef FACTORI_H
#define FACTORI_H

#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib,"Shlwapi.lib")
//............................Includes.................................//
//.....................................................................//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
//#include <windows.h>
//#include "Shlwapi.h"

#include "HardCodedData.h"
#include "Queue.h"

//...........................Structs...................................//
//.....................................................................//
typedef struct PrimeNum_node {
    char *input; 
    int prime_num;
    int size; 
    struct PrimeNum_node* next;
} PrimeNum_List;

//...........................Functions.................................//
//.....................................................................//
PrimeNum_List* PrimeNum_List__init_node();

int prime_factor(PrimeNum_List* list, int n);

int PrimeNum_List__release_list(PrimeNum_List* list);

PrimeNum_List* num_2_PrimeNum_List(int num, PrimeNum_List* list);

int Print__PrimeFactors(PrimeNum_List* list, int n);

int ReadFromFile(int argc, char*argv[], PrimeNum_List* list);

char* create_str(char c, int letter_counter);

#endif // !FACTORI_h
