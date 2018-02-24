#include<stdio.h>
#define SIZE 10
int main(void)
{
    int n[10]; /*n is array of 10 integers.*/
    int i; /*counter*/


    /*initialize elements of array n to 0.*/
    for(i=0; i< 10; i++)
    {
        n[i] = 0; //set element at location i to 0.
    }

    printf("%s%13s\n","Element","Value");
    /*output contents of array n in tabular format*/
    for(i=0; i< 10; i++)
    {
        printf("%7d%13d\n",i,n[i]);
    }
//--------------------------------------------------------
    //with initialization.
    int n2[SIZE] = {32,27,64,18,95,14,90,70,60,37}; /*use symbolic constant SIZE*/

    printf("%s%13s\n","Element","Value");
    /*output contents of array n in tabular format*/
    for(i=0; i< SIZE; i++)
    {
        printf("%7d%13d\n",i,n2[i]);
    }
}
