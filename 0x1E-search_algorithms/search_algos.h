#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary(int *array, size_t low, size_t high, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);


#endif
