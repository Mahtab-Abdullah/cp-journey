#include <stdio.h>
int main(){
   long long n;
  if(scanf("%lld", &n) != 1){
      return 1;
  }
  long long count = 0;
  for (long long i = 5; n/i >= 1; i*=5){
     count += n/i;
  }
  printf("%lld", count);
}
