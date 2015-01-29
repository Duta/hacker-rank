#include <stdio.h>

int lonely(int n, int *a) {
  int occurences[101] = {0};
  for(int i = 0; i < n; ++i)
    ++occurences[a[i]];
  for(int i = 0; i < 101; ++i)
    if(occurences[i] == 1)
      return i;
  return 0;
}

int main(int argc, char **argv) {
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; ++i)
    scanf("%d", a + i);
  printf("%d", lonely(n, a));
  return 0;
}