#include <stdio.h>

int main()
{
    int n = 10, number;
    int array[n];

    printf("Give Array of 10 Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");

    printf("Enter a Number for Search: ");
    scanf("%d", &number);

    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        count1++;
        if (array[i] == number)
        {
            break;
        }
    }

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

    int low, high, mid;
    low = 0;
    high = n - 1;
    int count2 = 0;
    while (low <= high)
    {
        count2++;
        mid = (low + high) / 2;
        if (array[mid] == number)
        {
            break;
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

    printf("Element found through Linear Search In %d steps\n", count1);
    printf("Element found through Binary Search In %d steps\n", count2);

    printf("\n");
    return 0;
}
