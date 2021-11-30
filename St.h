
#define MAX 10
typedef char EntryType;

typedef struct{
int top;
EntryType entry[MAX];
}Stack;

void createStack(Stack *s);
int EmptyStack(Stack s);
int FullStack(Stack s);
void push(EntryType item,Stack *s);
void pop(EntryType *item,Stack *s);
int stack_size(Stack s);
EntryType firstelement(Stack s);
EntryType lastelement(Stack s);
