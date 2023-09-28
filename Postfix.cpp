#include <iostream>
using namespace std;
#define MAX_SIZE 100

struct Stack {
    int data[MAX_SIZE];
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

void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack is Full. Cannot Push %c\n", value);
        return;
    }
    stack->top++;
    stack->data[stack->top] = value;
    cout<<"Added num "<<stack->data[stack->top]<<endl;
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop\n");
        return '\0';
    }
    int poppedValue = stack->data[stack->top];
    stack->top--;
    cout<<"Deleted num "<< poppedValue<<endl;
    return poppedValue;
}



int main() {
    struct Stack stack;
    initialize(&stack);
    string equation;
    printf("Enter a string: ");
    getline(cin,equation);
    for(int i=0;i<equation.length();i++){
        char c = equation[i];
        if(isdigit(c)){
            int temp=0;
            while(isdigit(equation[i])){
                temp=temp*10 + equation[i]-'0';
                i++;
            }
            push(&stack,temp);
        }
        if(equation[i]==' '){
            continue;
        }
        
        else{
            int q1=pop(&stack);
            int q2=pop(&stack);
            if(c=='+'){
                push(&stack,q1+q2);
            }
            if(c=='-'){
                push(&stack,q2-q1);
            }
            if(c=='*'){
                push(&stack,q2*q1);
            }
            if(c=='/'){
                if(q1==0){
                    cout<<"Cannot divide by zero"<<endl;
                }
                else{
                    push(&stack,q2/q1);
                }
            }
        }
    }
    int ans=pop(&stack);
    cout<<"Final answer is "<<ans<<endl;
}