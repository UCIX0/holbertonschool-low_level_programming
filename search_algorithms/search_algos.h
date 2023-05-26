#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdlib.h>
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
void print_array(int *array, int start, int end);
int binary_search_recursive(int *array, int start, int end, int value);
int binary_search(int *array, size_t size, int value);
#endif /* _SEARCH_ALGOS_H_ */
