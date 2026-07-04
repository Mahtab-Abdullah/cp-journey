#include <stdio.h>
int main() {
  long long n;
  long long expected_sum = 0;
  long long val;
  if (scanf("%lld", &n) == 1) {
    expected_sum = n * (n + 1) / 2;
  }
  long long actual_sum = 0;
  for (int i = 0; i < n - 1; i++) {
    long long x;
    if (scanf("%lld", &x) == 1) {
      actual_sum += x;
    }
  }
  printf("%lld", val = (expected_sum - actual_sum));
  return 0;
}
