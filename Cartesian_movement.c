#include <stdio.h>
#include <stdbool.h>

int move(int a, int b, int c, int d)
{
    bool possible = false;

    if (d >= b)
    {
        if (a + (d - b) >= c)
        {
            possible = true;
            if (a + (d - b) == c)
            {
                return d - b;
            }
            else
            {
                a += (d - b);
                return (d - b) + (a - c);
            }
        }
    }

    if (!possible)
    {
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    int test, a, b, c, d;
    scanf("%d", &test);
    int ans[test];
    for (int i = 0; i < test; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        ans[i] = move(a, b, c, d);
    }
    for (int i = 0; i < test; i++)
    {
        printf("%d\n", ans[i]);
    }

    return 0;
}
