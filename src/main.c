#include <stdio.h>
#include <stdlib.h>

int WichIsGreater(float a, float b){
  if (a > b) return 1;
  return 2;
}

int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main ()
{
  float class1[18];
  float class2[18];
  for (int i = 0; i < 18; i++)scanf("%f", &class1[i]);
  for (int i = 0; i < 18; i++)scanf("%f", &class2[i]);
  qsort(class1, sizeof(class1)/sizeof(*class1), sizeof(*class1), comp);
  qsort(class2, sizeof(class2)/sizeof(*class2), sizeof(*class2), comp);
  printf("%d", WichIsGreater(class1[2], class2[2]));
  return 0;
}
