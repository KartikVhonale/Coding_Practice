#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node *next;
};
struct node *ptr,*new_node;
struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
int main(){
    
    return 0;
}
struct node *create_ll(struct node *ptr){
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
}
//display karna hain bhai
//traverse
struct node *display(struct node *start){
    ptr=start;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
    return start;
}