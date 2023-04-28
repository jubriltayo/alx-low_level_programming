#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int jump_search(int *array, size_t size, int value);
size_t min(size_t x, size_t y);
int interpolation_search(int *array, size_t size, int value);
int interpol_helper(int *array, size_t low, size_t high, int value);

#endif /* __SEARCH_ALGOS_H__ */
