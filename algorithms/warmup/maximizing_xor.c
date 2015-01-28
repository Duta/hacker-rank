#include <stdio.h>

int main(int argc, char **argv) {
  int L, r;
  scanf("%d %d", &L, &r);
  int max = 0;
  for(int i = L; i < r; ++i) {
    for(int j = i + 1; j <= r; ++j) {
      int res = i ^ j;
      if(res > max) {
        max = res;
      }
    }
  }
  printf("%d", max);
}
