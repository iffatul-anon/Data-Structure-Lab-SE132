#include <stdio.h>

int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value, n = 10;

    printf("Before Deletion Elements are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 1; i <= 2; i++)
    {
        int flag = 0;
        printf("Enter %dst Element To Delet: ", i);
        scanf("%d", &value);
        for (int j = 0; j < n; j++)
        {
            if (array[j] == value)
            {
                flag = 1;
                for (int k = j; k < n - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                n--;
            }
        }
        if (flag == 0)
        {
            printf("This element can not be deleted as it does not exist\n");
        }
    }

    printf("After Deletion Now The Element Is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
