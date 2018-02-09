/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdbool.h>
#include "sorting_algorithms.h"
#include <stdlib.h>


void init_random(int* small_array, int SMALL)
{
  for(int i = 0; i < SMALL; i++){
    small_array[i] = rand();
  }
}
void bubble_sort(int* small_array, int SMALL){
  for(int j = 0; j < SMALL; j++){
    for(int i = j; i < SMALL; i++){
      if(small_array[j] > small_array[i]){
        int swap = small_array[j];
        small_array[j] = small_array[i];
        small_array[i] = swap;
      }
    }
  }
}
void insertion_sort(int* small_array, int SMALL){
    for (int j = 1; j < SMALL; j++) {
      int key = small_array[j];
      int i = j - 1;
      while (i >= 0 && small_array[i] > key) {
        small_array[i + 1] = small_array[i];
        i--;
      }
      small_array[i + 1] = key;
    }
}
