#include <stdio.h>
#include <stdlib.h>
 
int main(){
  int gho[20] = {2 , 13, 7, 9, 3 ,
                 12, 19, 5, 8, 1 ,
                 15, 21, 6, 9, 14,
                 11, 2 , 3,16, 17};
  int i = 0;
  int s, n = 0;
  printf("����� �����: ");
  scanf("%i", &s);

  for(i = 0; i < 20; ++i)
  if (gho[i] == s) {
    ++n;
    printf("����� �������\n");
    printf("���������� �����: %i\n\n", i);
  }
 if (n == 0) {
   printf("����� �� �������\n");
 }

  return 0;
}