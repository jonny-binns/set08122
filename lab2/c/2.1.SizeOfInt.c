#include <stdio.h>

int main()
{
      int IntegerVariable;
      size_t size;

      size = sizeof(IntegerVariable);

      printf("Size of IntegerVariable is %zu bytes\n", size);

      return 0;
}
