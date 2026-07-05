#include <stdio.h>
int main() {
  long long n;
  if (scanf("%lld", &n) == 1) {
    long long arr[n];
    for (int i = 0; i < n; i++) {
      if (scanf("%lld", &arr[i]) != 1) {
        return 1;
      }
    }
    long long prev = arr[0];
    long long total_moves = 0;
    for (int i = 1; i < n; i++) {
      if (arr[i] < prev) {
        total_moves += (prev - arr[i]);
      } else {
        prev = arr[i];
      }
    }
    printf("%lld", total_moves);
  }
}
