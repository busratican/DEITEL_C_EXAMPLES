#include<stdio.h>

void reverse(const char * const sPtr);

int main(void)
{
    char c;
    char sentence[80];
    char sentence2[80];
    char s[80];
    int i=0;
    int x;
    double y;


    printf("\nEnter a line of text:\n");
    fgets(sentence,80,stdin);

    printf("\nThe line printed backward is:\n");
    reverse(sentence);

    puts("\nEnter a line of text:\n");

    while((c=getchar()) != '\n')
    {
        sentence2[i++] = c;
    }

    sentence2[i] = '\0';

    puts("\nThe line entered was:\n");
    puts(sentence2);

    printf("\nEnter an integer and a double:\n");
    scanf("%d%lf",&x,&y);

    sprintf(s,"integer %6d\ndouble:%8.2f",x,y);
    printf("%s\n%s\n","The formatted output stored in array s is:\n",s);
    return 0;
}

void reverse(const char * const sPtr)
{
    if(sPtr[0] == '\0')
    {
        return ;
    }
     else
    {
        reverse(&sPtr[1]);
        putchar(sPtr[0]);
    }
}
