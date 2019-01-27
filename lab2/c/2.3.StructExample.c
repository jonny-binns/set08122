#include <stdio.h>

typedef struct
{
      int id;
      char name[30];
}     employee;

int main()
{
    employee e1 = {1, "Jonny"};
    printf("ID: %d\nName: %s\n", e1.id, e1.name);

    return 0;
}
