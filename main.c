#include <stdio.h>
#include <stdlib.h>
#include "St.h"
int main()
{
    Stack s,s2; EntryType item;
    createStack(&s2);
    createStack(&s);
    push('a',&s);
    push('h',&s);
    push('m',&s);
    push('e',&s);
    push('d',&s);
    copy_stack_U(s,&s2);
    printstack(s2);
    printf("%d\n",stack_size_U(s));

    //printstack(s);
//printf("%c\n",lastU(s));
//printf("%c\n",lastelement(s));

//   while(!EmptyStack(s)){
//    pop(&item,&s);
//    printf("%c",item);
//   }
//printf("\n%c",firstelement(s));
//printf("\n%c",lastelement(s));

//printf("\n%c",item);

//printf("%c 2",item);
 printf("%d\n",stack_size_U(s));

    return 0;
}
