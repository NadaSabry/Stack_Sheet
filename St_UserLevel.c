#include "St.h"
void printstack(Stack st){
   EntryType i;
   int c=stack_size(st);
   while(c--){
   pop(&i,&st);
   printf("%c",i);
   }printf("\n");
}

int firstU(Stack st){
   EntryType i;
   while(!EmptyStack(st)){
   pop(&i,&st);
   }return i;
}
int lastU(Stack st){
   EntryType i;
   pop(&i,&st);
   return i;
}

void Destroy_U(Stack *st){
    EntryType i;
    while(!EmptyStack(*st))
       pop(&i,&(*st));
    //or  pop(&i,st);
}

void copy_stack_U(Stack s1,Stack *s2){
Stack temp;
createStack(&temp);
EntryType i;
while(!EmptyStack(s1)&&!FullStack(temp)){
    pop(&i,&s1);
    push(i,&temp);
}
while(!EmptyStack(temp)&&!FullStack(*s2)){
    pop(&i,&temp);
    push(i,&(*s2));
 }
}

int stack_size_U(Stack s){
int count=0,i;
while(!EmptyStack(s)){
    pop(&i,&s);
    count++;
}return count;
}
