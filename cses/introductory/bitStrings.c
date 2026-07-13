#include <stdio.h>
int main() {
  long long n;
  if (scanf("%lld", &n) != 1) {
    return 1;
  }

  long long result = 1;
  while (n > 0) {
    result = (result * 2 % (1000000007));
    n--;
  }
  printf("%lld", result);
}
