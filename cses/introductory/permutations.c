#include <stdio.h>
int main() {
  long long n;
  if (scanf("%lld", &n) != 1) {
    return 1;
  }
  if (n == 1) {
    printf("%lld", n);
  } else if (n == 2 || n == 3) {
    printf("NO SOLUTION");
  } else {
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 0) {
        printf("%d ", i);
      }
    }

    for (int i = 1; i <= n; i++) {
      if (i % 2 != 0) {
        printf("%d ", i);
      }
    }
  }
  return 0;
}
