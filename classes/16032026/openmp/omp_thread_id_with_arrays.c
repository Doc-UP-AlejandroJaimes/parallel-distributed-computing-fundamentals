/**
 * Ecercise 2: Thread ID with Arrays in OpenMP
 * Brief: Create a program that initializes an array of integers and uses OpenMP t
 * o have multiple threads print their thread ID along with the corresponding array 
 * element they are processing.
 * Question: Is the print order consistent? What happens if you change 
 * opm_set_num_threads() to a different value?
*/

#include <stdio.h>
#include <omp.h>
