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

    printf("Enter a Number: ");
    scanf("%d", &number);

    int low, high, mid;
    low = 0;
    high = n - 1;
    int count1 = 0;
    while (low <= high)
    {
        count1++;
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

    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        count2++;
        if (array[i] == number)
        {
            break;
        }
    }

    printf("Element found through Binary Search In %d steps\n", count1);
    printf("Element found through Linear Search In %d steps\n", count2);

    printf("\n");
    return 0;
}