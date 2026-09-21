#include <stdio.h>
#include <string.h>
int main() {
  char str[1000006];
  if (scanf("%s", str) != 1) {
    return -1;
  }
  long long n = strlen(str);

  long long count[26] = {0};
  for (long long i = 0; i < n; i++) {
    count[str[i] - 'A']++;
  }
  int odd_count = 0;
  int odd_letter = -1;

  for (int i = 0; i < 26; i++) {
    if (count[i] % 2 != 0) {
      odd_count++;
      odd_letter = i;
    }
  }

  if (odd_count > 1) {
    printf("NO SOLUTION");
    return 0;
  }

  char left_half[500005];
  int pos = 0;
  for (int i = 0; i < 26; i++) {
    int pairs = count[i] / 2;
    for (int j = 0; j < pairs; j++) {

      left_half[pos] = 'A' + i;
      pos++;
    }
  }
  left_half[pos] = '\0';

  char right_half[500005];
  for (int i = 0; i < pos; i++) {
    right_half[i] = left_half[pos - 1 - i];
  }
  right_half[pos] = '\0';

  if (odd_letter != -1) {
    printf("%s%c%s\n", left_half, 'A' + odd_letter, right_half);
  } else {
    printf("%s%s\n", left_half, right_half);
  }
  return 0;
}
