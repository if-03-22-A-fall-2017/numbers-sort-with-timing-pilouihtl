/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdbool.h>
#include "stopwatch.h"
#include <time.h>

clock_t start, end = 0;
void start_stopwatch(){
  start = clock();
  end = 0;
}
void stop_stopwatch(){
  end = clock();

}
double elapsed_time(){
  if(end == 0){
      stop_stopwatch();
  }
  return double(end - start) / CLOCKS_PER_SEC * 1000;
}
