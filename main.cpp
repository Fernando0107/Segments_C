#include <iostream>
#include <stdio.h>
#include <stdlib.h>

extern char edata;   //for data segment
static int temp_bss; // for bss address

int main(int argc, char **argv)
{
    int var_temp = 1;            // dummie var to get the stack segment address
    int *stack_sa = &var_temp;   //get the address of the var_temp in the stack
    int *bss_a = &temp_bss;      //get the address of the bss
    int *code_sa = (int *)&main; //get the code segment address

    printf("Code Segment: %p", code_sa, "\n");
    printf("\nData segment: %10p\n", &edata, "\n");
    printf("BSS address: %p", bss_a, "\n");
    printf("\nStack Segment: %p\n", stack_sa, "\n");

    return 0;
}