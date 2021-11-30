
#include "St.h"

void createStack(Stack *s){
    s->top=-1;
}
int EmptyStack(Stack s){
    return(s.top==-1);
}
int FullStack(Stack s){
    return(s.top==MAX-1);
}
void push(EntryType item,Stack *s){
    if(s->top==MAX-1)
        printf("Error : stack is full");
    else
        s->entry[++s->top]=item;
}
void pop(EntryType *item,Stack *s){
     if(s->top==-1)
        printf("Error : stack is Empty\n");
     else
        *item=s->entry[s->top--];
}
int stack_size(Stack s){
    return(s.top+1);
}
EntryType firstelement(Stack s){
    if(s.top==-1)
        return '0';
    else
      return s.entry[0];
}
EntryType lastelement(Stack s){
    if(s.top==-1)
        return '0';
    else
      return s.entry[s.top];
}
void Destroy_I(Stack *s){
    s->top=-1;
}

void copy_stack_I(Stack s1,Stack *s2){
int i;
s2->top=s1.top;
for(i=0;i<=s1.top;i++){
    (*s2).entry[i]=s1.entry[i];
}
}

