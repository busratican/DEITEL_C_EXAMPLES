#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 99

void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[],const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);

int main(void)
{
    int frequency[10] = {0};
    int response[SIZE];
    int i;

    srand(time(NULL));   // should only be called once
    for(i=0; i<SIZE; i++)
    {
        response[i] = rand() % 10;
    }

    mean(response);
    median(response);
    mode(frequency,response);
    return 0;
}

void mean(const int answer[])
{
    int j;
    int total = 0;

    printf("%s\n%s\n%s\n","*******"," Mean","*********");

    for(j=0; j<SIZE; j++)
    {
        total += answer[j];
    }

    printf("The mean is the average value of the data\n"
           "items. The mean is equal to the total of\n"
           "all the items divided by the number of\n"
           "data items (%d). The mean value for this\n"
           "run is: %d / %d =%.4f\n\n",
           SIZE,total,SIZE,(double) total /SIZE );
}

void median(int answer[])
{
     printf("%s\n%s\n%s\n%s\n","*******"," Median","*********","The unsorted array of response is");
     printArray(answer);
     bubbleSort(answer);
     printf("\n\nThe sorted array is");
     printArray(answer);

     printf("\n\nThe median is the element %d of\n"
            "the sorted %d element array.\n"
            "For this run the median is %d\n\n",
            SIZE/2,SIZE,answer[SIZE/2]);
}

void mode(int freq[], const int answer[])
{
    int rating;
    int j;
    int h;
    int largest = 0;
    int modeValue = 0;

    printf("%s\n%s\n%s\n","*******"," Mode","*********");
    for(rating = 1; rating <= 9; rating ++)
    {
        freq[rating] = 0;
    }

    for(j=0; j<SIZE; j++)
    {
        ++freq[answer[j]];
    }

    printf("%s%11s%19s\n\n%54s\n%54s\n\n","Response","Frequency","Histogram",
           "1   1   2   2","5   0   5   0   5");

    for(rating = 1; rating <=9; rating++)
    {
        printf("%8d%11d     ",rating,freq[rating]);

        if(freq[rating] > largest)
        {
            largest = freq[rating];
            modeValue = rating;
        }

    for(h=1; h<=freq[rating]; h++)
    {
        printf("*");
    }

    printf("\n");
    }

    printf("The mode is the most frequent value.\n"
           "For this run the mode is %d which occured"
           "%d times.\n",modeValue,largest);
}

void bubbleSort(int a[])
{
    int pass;
    int j;
    int hold;

    for(pass=1; pass<SIZE; pass++)
    {
        for(j=0; j<SIZE-1; j++)
        {
            if(a[j]>a[pass])
            {
                hold = a[j];
                a[j] = a[pass];
                a[pass] = hold;
            }
        }
    }
}

void printArray(const int a[])
{
    int j;

    for(j=0; j<SIZE; j++)
    {
        if(j%20 == 0)
        {
            printf("\n");
        }

        printf("%2d",a[j]);
    }
}
