#include <stdio.h>

int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value, position, n = 10;

    printf("Before Insertion \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 1; i <= 2; i++)
    {
        printf("Enter %dst Element To Insert: ",i);
        scanf("%d", &value);
        printf("Enter Position: ");
        scanf("%d", &position);
        for (int j = n; j >= position; j--)
        {
            array[j] = array[j - 1];
        }
        array[position - 1] = value;
        n++;
    }

    printf("After Insertion\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}