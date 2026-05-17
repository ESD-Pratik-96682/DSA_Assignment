#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

// Push operation
void push(int value)
{
    if(top == SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = value;
}

// Pop operation
int pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }

    int value = stack[top];
    top--;

    return value;
}

int main()
{
    int arr[SIZE] = {10, 20, 30, 40, 50};

    printf("Original Array:\n");

    for(int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    // Push array elements into stack
    for(int i = 0; i < SIZE; i++)
        push(arr[i]);

    // Pop back into array
    for(int i = 0; i < SIZE; i++)
        arr[i] = pop();

    printf("\nReversed Array:\n");

    for(int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}