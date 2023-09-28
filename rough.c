#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

#define SIZE 100

struct Stack{
    char data[SIZE];
    int top;
};

void init(struct Stack * s){
    s->top=-1;
}

void isFull(struct Stack * s){
    return s->top==SIZE-1;
}

void isEmpty(struct Stack * s){
    return s->top==-1;
}

void push(struct Stack * s,char val){
    if(!isFull){
        s->data[++s->top]=val;
    }
    else{
        printf("Stack underflow");
    }
}


int main(){
    
}