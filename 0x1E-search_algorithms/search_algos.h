#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int binary_helper(int *array, size_t low, size_t high, int value);

#endif /* __SEARCH_ALGOS_H__ */
