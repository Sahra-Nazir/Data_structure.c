#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*prev;
    int data;
    struct node*next;
};

  // traversal function
void traverse(struct node*head){
    struct node* ptr=NULL;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    printf("the traversed data is \n");
    while(ptr!=NULL){
        printf(" %d \n", ptr->data);
        ptr=ptr->next;
    }
}

 // deleting last node 
void delete_end(struct node*head){
    struct node* ptr=malloc(sizeof(struct node));
    ptr=head;
    while(ptr->next->next !=NULL){
        ptr=ptr->next;
    }
    ptr->next=NULL;
    ptr->prev=NULL;
    free(ptr->next);
   printf(" after deletion at end ");
    traverse(head);
}
  
  // deleting first node
void delete_beg(struct node*head){
    struct node* ptr=malloc(sizeof(struct node));
    ptr=head;
    head=ptr->next;
    ptr->next=NULL;
    ptr->prev=NULL;
    free(ptr);

    printf("after DELETING first node ");
    traverse(head);
}

 int main(){
    // creating head node
    struct node* head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=10;
    head->next=NULL;
    
    // creating second node as current
    struct node* current=NULL;
    current=malloc(sizeof(struct node));
    current->prev=NULL;
    current->data=9;
    current->next=NULL;

    // connecting two nodes
    current->prev=head;
    head->next=current;

     // creating third node 
    current=malloc(sizeof(struct node));
    current->prev=NULL;
    current->data=8;
    current->next=NULL;

    // connecting third node
    head->next->next=current;
    current->prev=head->next;

    //calling traverse function
     traverse(head);

      // deleting last node
    delete_end(head);

      // deletingg first node
    delete_beg(head);
     return 0;
 }