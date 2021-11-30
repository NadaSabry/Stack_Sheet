#include "stack.h"

void createStack(Stack *s){
    s->top=-1;
}
int EmptyStack(Stack s){
    return(s.top==-1);
}
int FullStack(Stack s){
    return(s.top==MAX-1);
}
void push(int item,Stack *s){
    if(s->top==MAX-1)
        printf("Error : stack is full");
    else
        s->entry[++s->top]=item;
}
void pop(EntryType *item,Stack *s){
     if(s->top==-1)
        printf("Error : stack is Empty");
     else
        *item=s->entry[s->top--];
}
