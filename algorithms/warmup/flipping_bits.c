#include <stdio.h>

int main(int argc, char **argv) {
  int n;
  scanf("%d", &n);
  unsigned int a[n];
  for(int i = 0; i < n; ++i) {
    scanf("%u", a + i);
  }
  for(int i = 0; i < n; ++i) {
    printf("%u\n", ~a[i]);
  }
}