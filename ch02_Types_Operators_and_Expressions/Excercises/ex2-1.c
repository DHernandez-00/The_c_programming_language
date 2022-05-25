/*
    Program will determine the ranges of 
    char, short, int, and long both unsigned and signed
    by printing approproate values from standard headers and by direct computation
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){

    //printing by standard headers
   printf("size range of char is from %d to %d\n", CHAR_MIN, CHAR_MAX);
   printf("size of unsigned char: %d\n", UCHAR_MAX);
   printf("size range of int is from %d to %d\n", INT_MIN, INT_MAX);
   printf("size of unsigned int: %lld\n", UINT_MAX);
   printf("size range of long is from %ld to %ld\n", LONG_MIN, LONG_MAX);
   printf("size of unsigned long: %lld\n", ULONG_MAX);
   printf("size range of short is from %d to %d\n", SHRT_MIN, SHRT_MAX);
   printf("size of unsigned short: %d", USHRT_MAX);

    

   
}