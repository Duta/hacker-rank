#include <stdio.h>

int main(int argc, char **argv) {
  int t;
  scanf("%d", &t);
  int a[t];
  for(int i = 0; i < t; ++i)
    scanf("%d", a + i);
  for(int i = 0; i < t; ++i) {
    int n = a[i];
    int height = 1;
    for(int j = 0; j < n; ++j)
      if(j % 2)
        ++height;
      else
        height *= 2;
    printf("%d\n", height);
  }
  return 0;
}
