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
 // deleting last node 
void delete_end(struct node*head){
    struct node* ptr=malloc(sizeof(struct node));
    ptr=head;
    while(ptr->next->next !=NULL){
        ptr=ptr->next;
    }
    ptr->next=NULL;
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
    free(ptr);

    printf("after DELETING first node ");
    traverse(head);
}
//   delete node anyhwere
// void delete_anywhere(struct node*head, int pos){
//      struct node* current=malloc(sizeof(struct node));
//      struct node* prev=malloc(sizeof(struct node));
//      prev=head;
//      current=head;
//   while(pos!=1){
//      prev=current;
//      current=current->next;
//         pos--;
//     }
//         prev->next=current->next;
//         free(current);
//         current=NULL;

//        printf("after deletion at node %d ",pos);
//         traverse(head);
    
// }
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

    // creating fourth node
    current=malloc(sizeof(struct node));
    current->data=7;
    current->next=NULL;

    
    // connecting fouth node
    head->next->next->next=current;

    
    // creating fifth node
    current=malloc(sizeof(struct node));
    current->data=6;
    current->next=NULL;

    
    // connecting fifth  node
    head->next->next->next->next=current;

  //calling traverse function
    traverse(head);

    // deleting last node
    delete_end(head);

    // deletingg first node
    delete_beg(head);

    // delete node anywhere
    // int pos=2;
    // delete_anywhere(head,pos);

    return 0;
}