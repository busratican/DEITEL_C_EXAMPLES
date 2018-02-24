#include<stdio.h>
#define RESPONSIVE_SIZE 40 /*define array size*/
#define FREQUENCY_SIZE 11

int main(void)
{
    int answer;
    int rating;

    int frequency[FREQUENCY_SIZE] = {0};

    int responses[RESPONSIVE_SIZE] = {1,2,6,4,8,5,9,7,8,10,1,6,3,8,6,10,3,8,2,7,6,5,
    7,6,8,6,7,5,6,6,5,6,7,5,6,4,8,6,8,10};

    for(answer = 0; answer < RESPONSIVE_SIZE; answer++)
    {
        ++frequency[responses[answer]];
    }

    printf("%s%17s\n","Rating","Frequency");
    for(rating = 1; rating < FREQUENCY_SIZE; rating++)
    {
        printf("%6d%17d\n",rating,frequency[rating]);
    }
}
