#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *a;
}s1;
int main(){
    s1.size=80;
    s1.top=-1;
    s1.a=(int*)malloc(s1.size*sizeof(int));
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->a=(int*)malloc(s->size*sizeof(int));    
    return 0;
}
int isEmpty(struct stack *ptr){
    if(ptr->top==-1)
    return 1;
    return 0;
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1)
    return 1;
    return 0;
}
