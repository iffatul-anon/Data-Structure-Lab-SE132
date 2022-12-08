#include <stdio.h>

int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value, n = 10;

    printf("Before Insertion \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Enter First Element To Insert at Last Position : ");
    scanf("%d", &value);
    array[n] = value;
    n++;
    printf("Enter Second Element To Insert at Last Position : ");
    scanf("%d", &value);
    array[n] = value;
    n++;
    printf("\n");

    printf("After Insertion\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
