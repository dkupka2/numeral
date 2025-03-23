#include <stdio.h>
#include "nameval.h"

int main(int argc, char **argv) {
  char name[100] = {0};

  printf("Enter a name: ");
  fgets(name, 100, stdin);
  printf("The value of your name is: %d\n", nameval(name));

  return 0;
}
