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

int main(void)
{
    int array[MAX];
    initialize(array);

    insert(array, 1, 11);
    insert(array, 2, 12);
    insert(array, 3, 13);
    insert(array, 4, 14);
    insert(array, 5, 15);

    search(array, 11);

    return 0;
}
