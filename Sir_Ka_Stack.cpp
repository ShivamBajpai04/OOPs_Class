#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

struct Stack {
    char data[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, char value) {
    if (isFull(stack)) {
        printf("Stack is Full. Cannot Push %c\n", value);
        return;
    }
    stack->top++;
    stack->data[stack->top] = value;
}

char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop\n");
        return '\0';
    }
    char poppedValue = stack->data[stack->top];
    stack->top--;
    return poppedValue;
}

void reverseString(char *str) {
    int length = strlen(str);
    struct Stack stack;

    initialize(&stack); // Initialize the stack

    for (int i = 0; i < length; i++) {
        push(&stack, str[i]);
    }

    for (int i = 0; i < length; i++) {
        str[i] = pop(&stack);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseString(str);
    printf("Reversed String is : ");
    puts (str);
    return 0;
}