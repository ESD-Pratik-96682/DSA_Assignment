#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = SIZE;

// Push operation
void push(int value)
{
    if(top == 0)
    {
        printf("Stack Overflow\n");
        return;
    }

    top--;
    stack[top] = value;

    printf("%d pushed into stack\n", value);
}

// Pop operation
int pop()
{
    if(top == SIZE)
    {
        printf("Stack Underflow\n");
        return -1;
    }

    int value = stack[top];
    top++;

    return value;
}

// Display stack
void display()
{
    if(top == SIZE)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");

    for(int i = top; i < SIZE; i++)
        printf("%d ", stack[i]);

    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    printf("Popped element = %d\n", pop());

    display();

    return 0;
}