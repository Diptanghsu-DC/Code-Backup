#include <stdio.h>

int main()
{
    int t, n;
    int odd_sum = 0, even_sum = 0;
    scanf("%d", &t);
    char *ans[t];
    int arr[100];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % 2 == 0)
            {
                even_sum += arr[j];
            }
            else
            {
                odd_sum += arr[j];
            }
        }
        if (even_sum > odd_sum)
        {
            ans[i] = "YES";
        }
        else
        {
            ans[i] = "NO";
        }
        even_sum = 0;
        odd_sum = 0;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%s\n", ans[i]);
    }

    return 0;
}
