#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/* Standard Library */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Function Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
