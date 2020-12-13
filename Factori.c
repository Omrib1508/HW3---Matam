/////////////////////////////////////////////////////////////////////////
///////////////////////////// PrimeNum.c ////////////////////////////////
/////////////////////////////////////////////////////////////////////////

//info: This PrimeNum.c file handles all the functions that PrimeNum list
//      needs for create, add value to list and realese it.

//............................Includes.................................//
//.....................................................................//
#include "Factori.h"

//...........................Functions.................................//
//.....................................................................//

int ReadFromFile(int argc, char*argv[], PrimeNum_List* list){
    int retVal;
    FILE*        input_file = NULL;
    int            file_lines = 1, letter_counter = 0;
    char        c;
    if (argc != ARGUMENTS) {
        printf("Error: invalid number of arguments(%d instead of %d)\n",(argc - 1), ARGUMENTS);
        exit(EXIT_FAILURE);
    }
    else {
        /* get input file path */
       list->input = argv[INPUT_FILE];
        retVal = PathFileExistsA(list->input);
        if(!retVal){
            ASSERT("PathFileExistsA", list->input);
        }
        input_file = fopen(list->input, "r");
       
        ASSERT("fopen", input_file);
        
        if (input_file==NULL) {
            printf("ERROR FILE");
            exit(EXIT_FAILURE);
        }
        /* Calc number of lines in input file */
        for (c = fgetc(input_file); c != EOF; c = fgetc(input_file)) {
            letter_counter++;
            if (c == '\n') {
                file_lines++;
                letter_counter=0;
            }
        }
        
        fclose(input_file);
        ASSERT("fclose", input_file);
        
        input_file=fopen(list->input, "r");
        ASSERT("fopen", input_file);
        int number=0, line=0;
        while (line<file_lines-1) {
            fscanf(input_file, "%d", &number);
            prime_factor(list, number);
            line++;
        }
        fclose(input_file);
        ASSERT("fclose", input_file);
        }
    return EXIT_SUCCESS;
    }

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
* Function:        prime_factor
* description:     this fuction finds prime factors
* input:           PrimeNum list and value n
* output:          process exit code
*/
int prime_factor(PrimeNum_List* list, int n){
    int n_copy=n, size=0;
    while (n%2==0) {
        n=n/2;
        list=num_2_PrimeNum_List(2, list);
        size++;
        list->size=size;
    }
    int y=3;
    while (y<=sqrt(n))
    {
        while (n%y==0)
        {
            n = n / y;
            list=num_2_PrimeNum_List(y, list);
            size++;
            list->size=size;
        }
        y = y + 2;
    }
    if (n>2) {
        list=num_2_PrimeNum_List(n, list);
        size++;
        list->size=size;
    }
    Print__PrimeFactors(list, n_copy);
    return EXIT_SUCCESS;
}

/*
* Function:        PrimeNum_List__release_list
* description:     this fuction realse node from the list
* input:           PrimeNum list
* output:          process exit code
*/
int PrimeNum_List__release_list(PrimeNum_List* list) {
    PrimeNum_List* node;
    while (!list) {
        node = list;
        list = list->next;
        list->size--; 
        free(node);
        if (node) {
            printf("Error: free node had failed\n");
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}

/*
* Function:        num_2_PrimeNum_List
* description:     this fuction take a number and return orderd prime num list
* input:           prime number to add to the list, PrimeNum list
* output:          PrimeNum ordered list
*/
PrimeNum_List* num_2_PrimeNum_List(int num, PrimeNum_List* list){
    PrimeNum_List *iter, *prev=NULL;
    PrimeNum_List* new_node = PrimeNum_List__init_node();
    // ASSERT("PrimeNum_List__init_node", new_node);
    new_node->prime_num = num;
    new_node->next=NULL;
    if (list->size==0) {
        return new_node;
    }
    if (new_node->prime_num<=list->prime_num) {
        new_node->next=list;
        return new_node;
    }
    iter=list;
    while (iter!=NULL && new_node->prime_num > iter->prime_num) {
        prev=iter;
        iter=iter->next;
    }
    prev->next=new_node;
    new_node->next=iter;
    return list;

}

/*
* Function:        Print__PrimeFactors
* description:     this fuction prints the prime factors to the file
* input:           PrimeNum list, intial read number from the file, the file
* output:          process exit code
*/
int Print__PrimeFactors(PrimeNum_List* list, int n){
    PrimeNum_List* copy=list;
    FILE*        input_file = NULL;
    
    input_file=fopen(list->input, "a");
    ASSERT("fopen", input_file);
    for (int i=0; i<list->size; i++) {
        if (i==0) {
            fprintf(input_file, "\r\nThe prime factors of %d are: %d", n, copy->prime_num);
        }
        else{
            copy=copy->next;
            fprintf(input_file,", %d", copy->prime_num);
        }
        
    }

    fclose(input_file);
    ASSERT("fclose", input_file);
    
    PrimeNum_List__release_list(list);
    return EXIT_SUCCESS;
}
