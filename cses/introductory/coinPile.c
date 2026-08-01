#include <stdio.h>
int main()
{
    long long t;
    if (scanf("%lld", &t) != 1)
    {
        return 1;
    }
    long long a, b;
    for (long long i = 1; i <= t; i++)
    {
        if (scanf("%lld %lld", &a, &b) != 2)
        {
            return 1;
        }

        long long p = (2 * b - a) / 3;
        long long q = (2 * a - b) / 3;

        if ((2 * b - a) % 3 == 0 && p >= 0 && (2 * a - b) % 3 == 0 && q >= 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}