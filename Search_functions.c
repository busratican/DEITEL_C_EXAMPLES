#include<stdio.h>
#include<string.h>

int main(void)
{
    /*********************************strchr*******************************************/
    const char *string = "This is a test";
    char character1 = 'a';
    char character2 = 'z';

    if(strchr(string,character1) != NULL)
    {
        printf("\'%c\' was found in \"%s\".\n",character1,string);
    }
    else
    {
        printf("\'%c\' was not found in \"%s\".\n",character1,string);
    }

    if(strchr(string,character2) != NULL)
    {
        printf("\'%c\' was found in \"%s\".\n",character2,string);
    }
    else
    {
        printf("\'%c\' was not found in \"%s\".\n",character2,string);
    }


    /****************************strcspn************************************/

    const char *string1= "The value is 3.14159";
    const char *string2="1234567890";

    printf("%s%s\n%s%s\n\n%s\n%s%u\n",
           "string1 = ",string1,"string2 = ",string2,
           "The length of the initial segment of string1",
           "containing no characters from string2 = ",
           strcspn(string1,string2));
    printf("\n");
    /**********************************strpbrk*********************************/

    const char *string3 = "beware";

    printf("%s\"%s\"\n\'%c\'%s\n\"%s\"\n",
           "Of the characters in ",string3,*strpbrk(string,string3),
           "appears earliest in ",string);

           //For more please look at page between Cheapter8,334-336
    return 0;
}
