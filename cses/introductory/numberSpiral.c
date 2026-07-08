#include <stdio.h>
int main() {
  long long t;
  if (scanf("%lld", &t) != 1) {
    return 1;
  }

  for (long long i = 0; i < t; i++) {
    long long y, x;
    if (scanf("%lld %lld", &y, &x) != 2) {
      return 1;
    }

    long long k = (y > x) ? y : x;
    long long inner = (k - 1) * (k - 1);
    long long value;

    if (y == k) {
      if (y % 2 == 1) {
        value = inner + x;
      } else {
        value = inner + (2 * k - x);
      }
    }

    else {
      if (x % 2 == 0) {
        value = inner + y;
      } else {
        value = inner + (2 * k - y);
      }
    }
    printf("%lld\n", value);
  }
  return 0;
}
