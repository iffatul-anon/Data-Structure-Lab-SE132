#include <stdio.h>

int main()
{
    int array[] = {5, 30, 25, 10, 40, 15, 20, 45, 35, 50};
    int n = 10, number, flag = 0;

    printf("Before Deletion : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("After Sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Enter a Number To Delete : ");
    scanf("%d", &number);

    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == number)
        {
            n--;
            for (int i = mid; i < n; i++)
            {
                array[mid] = array[mid + 1];
                flag = 1;
                break;
            }
        }
        else if (array[mid] > number)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (flag == 0)
    {
        printf("This element can not be deleted as it does not exist\n");
    }

    printf("After Deletion : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}