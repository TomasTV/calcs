#include <stdbool.h>

#ifndef TEST_SORT_H
#define TEST_SORT_H

// Tests that given list of integers is in sorted order
bool is_sorted(int *numbers, int count);
// Prints all integers in the given array
void print_ints(int numbers[], int count);
// Returns true if both arrays contain the same elements, regardless of order
bool contain_same_ints(int arr1[], int arr2[], int count);

#endif // PROJECT_TEST_SORT_H
