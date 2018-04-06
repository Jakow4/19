#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
  char a[50];
  char b[50];
  scanf("%s", &a);
  scanf("%s", &b);
  char *a0 = a;
  char *b0 = b;
  strcat(a0, b0);
  puts(a0);
  return 0;
}