#include<stdio.h>
#include<stdlib.h>
struct node{
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

// insertion at end function
void insert_end(struct node*head,int data){
    struct node* ptr=malloc(sizeof(struct node));
    struct node*temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;

    ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
   printf(" after insertion at end ");
    traverse(head);
}

// insert node at beginning 
void insert_beg(struct node*head, int data2){
    struct node* ptr=malloc(sizeof(struct node));
    ptr->data=data2;
    ptr->next=head;
    head=ptr;

    printf("after insertion at the beginning ");
    traverse(head);
}

// add node anyhwere
void insert_anywhere(struct node*head, int data3, int pos){
     struct node* ptr=malloc(sizeof(struct node));
     ptr=head;
     struct node* ptr2=malloc(sizeof(struct node));
    ptr2->data=data3;
    ptr2->next=NULL;

    while(pos!=2){
        ptr=ptr->next;
        pos--;
    }
        ptr2->next=ptr->next;
        ptr->next=ptr2;
       printf("after insertion at node %d ",pos);
        traverse(head);
    
}
int main(){
    // creatinh head node
    struct node* head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;
    
    // creating next node as current
    struct node* current=NULL;
    current=malloc(sizeof(struct node));
    current->data=9;
    current->next=NULL;

    // connecting two nodes
    head->next=current;

    // creating third node 
    current=malloc(sizeof(struct node));
    current->data=8;
    current->next=NULL;

    // connecting third node
    head->next->next=current;

    //calling traverse function
    traverse(head);

    // adding node in the end
    int data =7;
    insert_end(head,data);

    // adding node in the beginning
    int data2=12;
    insert_beg(head,data2);

    // add node anywhere
    int data3=5;
    int pos=3;
    insert_anywhere(head,data3,pos);

    return 0;
}