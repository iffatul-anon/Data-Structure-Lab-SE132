#include <stdio.h>
#include <string.h>

#define STACK_MAX 5

int top;
char str[STACK_MAX + 1];

void push(int item)
{
    if (top < STACK_MAX)
    {
        str[top] = item;
        top = top + 1;
    }
    else
    {
        printf("Don't overflow\n");
    }
}

void pop()
{
    if (top == 0)
    {
        printf("Don't underflow");
        return;
    }
    else
    {
        top = top - 1;
        str[top] = '\0';
    }
    return;
}

int main()
{
    top = 0;
    char ch;
    ch = 'o';
    push(ch);
    ch = 'g';
    push(ch);
    ch = 'n';
    push(ch);
    printf("After insert 3 characters: %s\n", str);

    pop();
    printf("After delete 1 characters: %s\n", str);

    ch = 'n';
    push(ch);
    ch = 'a';
    push(ch);
    printf("After insert 2 characters: %s\n", str);

    pop();
    printf("After delete 1 characters: %s\n", str);

    ch = 'a';
    push(ch);
    ch = 'm';
    push(ch);
    printf("After insert 2 characters: %s\n", str);

    pop();
    printf("After delete 1 characters: %s\n", str);

    ch = 'm';
    push(ch);
    printf("After insert 1 characters: %s\n", str);

    printf("Array in Reverse Order: ");
    for (int i = STACK_MAX - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    printf("Enter new character: ");
    scanf("%c", &ch);
    push(ch);
    return 0;
}
