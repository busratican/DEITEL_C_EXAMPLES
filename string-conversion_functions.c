#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    double d;
    int i;
    long l;

    const char *string = "51.2% are admitted";
    double ds;
    char *stringPtr;

    const char *string2 = "-1234567abc";
    char *reminderPtr;
    long x;

    const char *string3 = "1234567abc";
    unsigned long y;
    char *lReminderPtr;

    d=atof("99.0");
    i=atoi("2593");
    l=atol("1000000");
    ds = strtod(string,&stringPtr);
    x = strtol(string2,&reminderPtr,0);
    y = strtoul(string3,&lReminderPtr,0);

    printf("%s%.3f\n%s%.3f\n","The string \"99.0\" converted to double is ", d,
           "The converted value divided by 2 is ", d/2.0);
    printf("\n");
    printf("%s%d\n%s%d\n","The string \"2593\" converted to int is ", i,
           "The converted value divided by 2 is ", i/2);
    printf("\n");
    printf("%s%ld\n%s%ld\n","The string \"1000000\" converted to long int is ", l,
           "The converted value divided by 2 is ", l/2);
    printf("\n");
    printf("The string \"%s\" converted to the\n",string);
    printf("double value %.2f and the string \"%s\"\n",ds,stringPtr);
    printf("\n\n");
    printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
           "The original string is ", string2,
           "The converted value is ", x,
           "The reminder of the original string is ",reminderPtr,
           "The converted value plus 567 is ", x + 567);
    printf("\n");
    printf("%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
           "The original string is ", string3,
           "The converted value is ", y,
           "The reminder of the original string is ",lReminderPtr,
           "The converted value plus 567 is ", y + 567);
    return 0;
}
