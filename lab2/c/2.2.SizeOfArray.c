#include <stdio.h>

int main()
{
      int a[100];
      size_t s = sizeof(a);
      printf("%zu bytes\n", s);

      size_t num = s/sizeof(int);
      printf("Space for storing %zu elements\n", num);

      return 0;
}
