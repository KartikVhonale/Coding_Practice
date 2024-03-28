#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*ptr,*new_node;
struct node *start=NULL;
int main(){
    int num,count;
    while(1){
        scanf("%d",&num);
        if(num==-1)break;
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=num;
        if(start==NULL){
        new_node->next=NULL;
        start=new_node;
    }
    else{
        ptr=start;
        while (ptr->next!=NULL)
            ptr=ptr->next;
            ptr->next=new_node;
            new_node->next=NULL;
    }
    }
    ptr=start;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}