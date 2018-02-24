#include<stdio.h>

int cubeByValue(int n);
void cubeByReference(int *nPtr);

int main(void)
{
    int number = 5;

    printf("The original value of number is %d",number);
    cubeByValue(number);

    printf("\nThe new value of number is %d\n\n",number);

    printf("The original value of number is %d",number);
    cubeByReference(&number);

    printf("\nThe new value of number is %d\n\n",number);
    return 0;
}

int cubeByValue(int n)
{
    return n*n*n;
}

void cubeByReference(int *nPtr)
{
    *nPtr = (*nPtr)*(*nPtr)*(*nPtr);
}
