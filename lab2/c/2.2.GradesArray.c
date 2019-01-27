
#include <stdio.h>

const char * ModuleNames[] = { "Computer Systems 1",
                              "Human Computer Interaction",
                              "Information Systems in Organisations",
                              "Foundations Of Software Design and Development",
                              "Programming Fundimentals",
                              "Mathematics for Software Engineering",
                              "Object Oriented Software Development",
                              "Database Systems",
                              "Systems and Services"};
const int Grades[] = {100,100,100,100,100,100,100,100,100};

#define NumberOfModules (sizeof (ModuleNames) / sizeof (const char *))
#define NumberOfGrades (sizeof (Grades) / sizeof (const int *))

int main(int argc, char **argv)
{
      if(NumberOfModules == NumberOfGrades)
      {
          for(int i = 0; i < NumberOfModules; i++)
          {
              printf("%s: ", ModuleNames[i]);
              printf("%i", Grades[i]);
              printf("\n");
          }
      }
      else
      {
        printf("The amount of grades does not match the amount of modules");
      }

      return 0;
}
