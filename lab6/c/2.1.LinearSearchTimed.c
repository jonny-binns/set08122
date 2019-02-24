#include <time.h>
#include <stdio.h>

#define MAX 5

void search(int* array, int num)
{
      int idx;
      for(idx=0; idx<MAX; idx++)
      {
          if(array[idx] == num)
          {
              printf("%d found in position %d\n", num, idx+1);
              return;
          }
      }
      if(idx == MAX)
      {
          printf("%d not found in array\n", num);
      }
}

void initialize(int* array)
{
      int idx;
      for(idx=0; idx < MAX; idx++)
      {
          array[idx] = 0;
      }
}

void insert(int* array, int pos, int num)
{
      int idx;

      for(idx = MAX-1; idx>= pos; idx--)
      {
          array[idx] = array[idx-1];
      }
      array[idx] = num;
}

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
      int array[MAX];
      initialize(array);

      int c, n;

      for (c = 1; c <= MAX; c++)
      {
          n = rand() % 100 + 1;
          insert(array, c, n);
        }

        clock_t t;
        printf("Start: %d \n", (int) (t=clock()));

        int x, y;

        for (x = 1; x <= 1; x++)
        {
          y = rand() % 100 + 1;
          search(array, y);
        }


        printf("Stop: %d \n", (int) (t=clock()-t));
        RunTime = (double) t/CLOCKS_PER_SEC;
        printf("Elapsed: %f seconds \n", (double) t / CLOCKS_PER_SEC);
        TotalTime += RunTime;
  }

  printf("Average Time: %f\n", (double) TotalTime/NumberOfRuns);

  return 0;
}
