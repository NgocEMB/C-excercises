#include <stdio.h>

void convert(int n)
{
    if (n < 2)
    {
        printf("%d", n % 2);
    }
    else
    {
        convert(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    freopen("D:/DAY C/SWJOB/output.txt", "w", stdout);
    convert(36);

    return 0;
}