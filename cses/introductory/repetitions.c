#include <stdio.h>
#include <string.h>
int main() {
  char target[1000006];
  if (scanf("%s", target) == 1) {

    long long current_streak = 1;
    long long best_streak = 1;
    long long end = strlen(target);

    for (int i = 1; i < end; i++) {
      if (target[i] == target[i - 1]) {
        current_streak++;
      } else {
        if (current_streak > best_streak) {
          best_streak = current_streak;
        }
        current_streak = 1;
      }
    }

    if (current_streak > best_streak) {
      best_streak = current_streak;
    }
    printf("%lld", best_streak);

    return 0;
  }
}
