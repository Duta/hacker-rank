#include <stdio.h>
#include "add.h"

int main(int argc, char **argv) {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = add(a, b);
    printf("%d", sum);
    return 0;
}
