#include <stdbool.h>
#include <stdio.h>
int main() {
  long long n;
  long long target;
  long long current_sum = 0;
  if (scanf("%lld", &n) != 1) {
    return 1;
  }
  bool set1[n + 1];
  long long total = (n * (n + 1) / 2);
  if (total % 2 != 0) {
    printf("NO\n");
  } else {
    target = total / 2;

    for (long long i = n; i >= 1; i--) {
      if ((i + current_sum) <= target) {
        current_sum += i;
        set1[i] = true;
      } else {
        set1[i] = false;
      }
    }

    long long count1 = 0;
    for (long long i = 1; i <= n; i++) {
      if (set1[i]) {
        count1++;
      }
    }
    long long count2 = n - count1;
    printf("YES\n");
    printf("%lld\n", count1);
    for (long long i = 1; i <= n; i++) {
      if (set1[i]) {
        printf("%lld ", i);
      }
    }
    printf("\n");

    printf("%lld\n", count2);
    for (long long i = 1; i <= n; i++) {
      if (!set1[i]) {
        printf("%lld ", i);
      }
    }
  }
}
