#include <stdio.h>

int lonely(int n, int *a) {
  for(int i = 0; i < n - 1; i += 2) {
    if(a[i] != a[i + 1]) {
      return a[i + (a[i + 1] == a[i + 2] ? 0 : 1)];
    }
  }
  return a[n - 1];
}

int main(int argc, char **argv) {
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  printf("%d", lonely(n, a));
}