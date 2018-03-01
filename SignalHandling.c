#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<time.h>

void signalHandler(int signalValue);

int main(void)
{
    int i;
    int x;

    signal(SIGINT,signalHandler); //register signal handler
    srand(time(NULL));

    /*output numbers 1 to 100*/
    for(i=1; i<=100;i++)
    {
        x = 1 + rand() % 50; /*generate random number to raise SIGINT*/

            /*raise SIGINT when x is 25*/
                if(x == 25){
                    raise(SIGINT);
                }
        printf("%4d",i);

        /*output \n when i is a multiple of 10*/
            if(i%10 == 0){
                printf("\n");
            }
    }

    return 0;
}
void signalHandler(int signalValue)
{
    int response;

    printf("%s%d%s\n%s",
           "\nInterrupt signal ( ", signalValue, " ) received.",
           "Do you wish to continue (1 = yes or 2 = no)? " );

    scanf("%d",&response);

        while(response != 1 && response != 2)
        {
            printf("(1 = yes or 2 = no)? ");
            scanf("%d",&response);
        }

        if(response == 1)
        {
            /*register signal handler for next SIGINT*/
            signal(SIGINT,signalHandler);
        }
        else
        {
            exit(EXIT_SUCCESS);
        }
}
