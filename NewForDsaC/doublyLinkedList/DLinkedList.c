#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
}*ptr;

//delclaring the functions
struct node *start=NULL;
struct node *create_new_node(struct node *start);
struct node *create_DL(struct node *start);

//main function 
void main(){

}

//creating new node thats all
struct node *create_new_node(struct node *start){
    struct node *NewNode;
    printf("\n creating new node ......\n");
    NewNode=(struct node *) malloc(sizeof(struct node));
    printf("enter data to be stored in new node : \n");
    scanf("%d",&NewNode->data);
    NewNode->prev=NULL;
    NewNode->next=NULL;
    return NewNode;
}

//creating the new doubly linked lsit
struct node *create_DL(struct node *start){
    struct node *NewNode;
    NewNode=create_new_node(start);
    start=NewNode;
    return start;
}