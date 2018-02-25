#include<stdio.h>
#include<string.h>

int main(void)
{
    char x[] = "Happy Birthday to you";
    char y[25];
    char z[15];

    char s1[20] = "Happy ";
    char s2[] = "New Year ";
    char s3[40] = "";


    //copy contents of x into y.
    printf("%s%s\n%s%s\n",
           "The string in array x is: ",x,
           "The string in array y is : ",strcpy(y,x));

    strncpy(z,x,14);
    z[14]='\0';

    printf("The string in array z is :%s\n",z);

    printf("s1=%s\ns2 = %s\n",s1,s2);
    printf("strcat(s1,s2) = %s\n",strcat(s1,s2));
    printf("strncat(s3,s1) = %s\n",strncat(s3,s1,6));
    printf("strcat(s3,s1) = %s\n",strcat(s3,s1));
    return 0;
}
