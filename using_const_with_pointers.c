#include<stdio.h>
#include<ctype.h>

void convertToUpperCase(char *sPtr);
void printCharacters(const char *sPtr);

int main(void)
{
    char string[] = "characters and $32.98";
    printf("The string before conversion is: %s",string);
    convertToUpperCase(string);
    printf("\nThe string after conversion is: %s\n",string);

    const char string1[] = "print characters of a string.";
    printCharacters(string1);
    printf("\n");
    return 0;
}


void convertToUpperCase(char *sPtr)
{
    while(*sPtr != '\0')
    {
        if(islower(*sPtr))
        {
            *sPtr = toupper(*sPtr);
        }

        ++sPtr;
    }
}

void printCharacters(const char *sPtr)
{
    for(; *sPtr != '\0'; sPtr++)
    {
        printf("%c",*sPtr);
    }
}
