#include "sort.h"
#include <stdlib.h>

/**
 * pow_10 - calculates a positive power of 10
 * @power: power of 10 to calculate
 *
 * Return: the corresponding power of 10
 */
unsigned int pow_10(unsigned int power)
{
	unsigned int i, result;

	result = 1;
	for (i = 0; i < power; i++)
		result *= 10;
	return (result);
}

/**
 * count_sort - sorts an array of integers in ascending order at a specific
 * digit location using the Counting sort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 * @digit: digit to sort by
 *
 * Return: 1 if there is a need to keep sorting, 0 if not
 */
unsigned int count_sort(int *array, size_t size, unsigned int digit)
{

