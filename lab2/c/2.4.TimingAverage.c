#include <time.h>
#include <stdio.h>

void code()
{
    for(int i = 0; i < 10000; i++)
    {
        printf(".");
    }
    printf("\n");
}

int main()
{
    clock_t t;
    char Number[3];
    double TotalTime;
    double RunTime;

    printf("How many runs of the code should be completed?\n");
    fgets(Number, 3, stdin);
    int NumberOfRuns = atoi(Number);

    for(int i = 0; i < NumberOfRuns; i++)
    {
        printf("Start: %d \n", (int) (t=clock()));

        code();

        printf("Stop: %d \n", (int) (t=clock()-t));
        RunTime = (double) t/CLOCKS_PER_SEC;
        printf("Elapsed: %f seconds \n", (double) RunTime);
        //printf("Elapsed: %f seconds \n", (double) t / CLOCKS_PER_SEC);
        TotalTime += RunTime;
    }

    printf("Average Time: %f\n", (double) TotalTime/NumberOfRuns);

    return 0;
}

/*
#include <stdio.h>
#include <time.h>

void code()
{
    for (int i = 0; i < 10000; i++)
    {
        printf(".");
    }
    printf("\n");
}
double count()
{
    clock_t t;
    printf("Start: %d \n", (int) (t=clock()));

    code();

    printf("Stop: %d \n", (int) (t=clock()-t));
    double TimeElapsed = t / CLOCKS_PER_SEC;
    //printf("Elapsed: %f seconds \n", (double) t / CLOCKS_PER_SEC);
    printf("Elapsed: %f seconds \n", TimeElapsed);
}

int main()
{
    char Number[2];
    double TotalTime = 0.0;
    double TimeElapsed;

    printf("How many runs of the code should be completed?\n");
    fgets(Number, 2, stdin);
    int NumberOfRuns = atoi(Number);

    for(int i = 0; i < NumberOfRuns; i++)
    {
        count();
        TotalTime = TotalTime + count(TimeElapsed);
    }

    printf("Average Time: %d\n", (double) TotalTime / NumberOfRuns);

    return 0;
}
*/
