#include <stdio.h>
#include <ctype.h>
#include <string.h>

int nameval(char *str) {
  
  int val = 0,
       tempval = 0;

  for (int n = 0; n < strlen(str) - 1; n++) {
    str[n] = tolower(str[n]);
    tempval = str[n] - 96;
    val += tempval;
  }

  return val;
}
