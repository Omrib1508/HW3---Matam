/////////////////////////////////////////////////////////////////////////
///////////////////////////// PrimeNum.c ////////////////////////////////
/////////////////////////////////////////////////////////////////////////

//info: This PrimeNum.c file handles all the functions that PrimeNum list
//      needs for create, add value to list and realese it.

//............................Includes.................................//
//.....................................................................//
#include "PrimeNum.h"

//...........................Functions.................................//
//.....................................................................//
/*
* Function:        PrimeNum_List__init_node
* description:     this fuction create new node to the list
* input:           PrimeNum list
* output:          process exit code
*/
PrimeNum_List* PrimeNum_List__init_node(){
	PrimeNum_List* new_node = NULL;

	new_node = (PrimeNum_List*)malloc(sizeof(PrimeNum_List));
	if (new_node == NULL) {
		printf("Fatal error: memory allocation failed!\n");
		return NULL;
	}
	return new_node;
}

/*
* Function:        PrimeNum_List__add_node
* description:     this fuction add new node to the list
* input:           PrimeNum list
* output:          process exit code
*/
int PrimeNum_List__add_node(int prime_num, PrimeNum_List* list) {
	PrimeNum_List* new_node = PrimeNum_List__init_node();
	ASSERT("PrimeNum_List__init_node", new_node);

	new_node->prime_num = prime_num;
	if (!list) {
		list = new_node;
	}
	else {
		list->next = new_node;
	}

	return EXIT_SUCCESS;
}

/*
* Function:        PrimeNum_List__realese_list
* description:     this fuction realse node from the list
* input:           PrimeNum list
* output:          process exit code
*/
int PrimeNum_List__realese_list(PrimeNum_List* list) {
	PrimeNum_List* node;
	while (!list) {
		node = list;
		list = list->next;
		free(node);
		if (node) {
			printf("Error: free node had failed\n");
			return EXIT_FAILURE;
		}
	}
	return EXIT_SUCCESS;
}

/*
* Function:        PrimeNum_list__arrange
* description:     this fuction arrange the list from small to big
* input:           PrimeNum list
* output:          void
*/
void PrimeNum_list__arrange(PrimeNum_List* list){}

/*
* Function:        num_2_PrimeNum_List
* description:     this fuction take a number and return orderd prime num list
* input:           number for transform, PrimeNum list
* output:          PrimeNum ordered list
*/
PrimeNum_List* num_2_PrimeNum_List(int num, PrimeNum_List* list){}