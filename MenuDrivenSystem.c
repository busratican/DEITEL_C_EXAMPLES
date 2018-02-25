#include<stdio.h>

/*prototypes*/
void function1(int a);
void function2(int b);
void function3(int c);


int main(void)
{
    /*initialize array of 3 pointers to functions that each take an int
    argument and return void*/
    void (*f[3])(int) = {function1,function2,function3};

    int choice; //variable to hold user's choice.

    printf("Enter a number between 0 and 2,-----3 to END: ");
    scanf("%d",&choice);

    while(choice < 3 && choice >= 0)
    {
        (*f[choice])(choice); /*invoke function at location choice in array f and
        pass choice as an argument*/

        printf("\nEnter a number between 0 and 2,-----3 to END: ");
        scanf("%d",&choice);
    }

    printf("Program execution completed!\n");
    return 0;
}

void function1(int a)
{
    printf("\nYou entered %d so function1 was called\n\n",a);
}

void function2(int b)
{
     printf("\nYou entered %d so function2 was called\n\n",b);
}

void function3(int c)
{
    printf("\nYou entered %d so function3 was called\n\n",c);
}
