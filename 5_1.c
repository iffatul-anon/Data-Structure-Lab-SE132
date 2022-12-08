#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], c;
    int left, right, middle;
    printf("\nEnter a string:");
    gets(str);
    int n = strlen(str);

    printf("\nEnter a character to find :");
    scanf("%c", &c);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    left = 0;
    right = n - 1;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (str[middle] == c)
        {
            printf("Character is found\n");
            return 0;
        }
        else if (str[middle] < c)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    printf("Character is not found\n");
}
