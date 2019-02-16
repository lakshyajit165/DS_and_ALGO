#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void push_front(struct Node** head_ref, int new_data){
    
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    new_node->data = new_data;
    
    new_node->next = *head_ref;
    
    *head_ref = new_node;
}

void insert_after(struct Node* prev_node, int new_data){
    
    if(prev_node == NULL){
        cout<<"Previous node cannot be null!";
        return;
    }
    
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    new_node->data = new_data;
    
    new_node->next = prev_node->next;
    
    prev_node->next = new_node;

}

void append(struct Node** head_ref, int new_data){
    
    struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
    
    struct Node *last = *head_ref;
    
    new_node->data = new_data;
    
    new_node->next = NULL;
    
    //If linked list is empty, then make the new node as head
    if(*head_ref == NULL){
        *head_ref = new_node;
    }
    
    while(last->next != NULL){
        last = last->next;
    }
    
    last->next = new_node;
}
void printList(struct Node* node) 
{ 
  while (node != NULL) 
  { 
      cout<<node->data<<" ";
     node = node->next; 
  } 
} 
int main(){
    
    struct Node* head = (struct Node*)malloc(sizeof(struct Node*));
    
    head->data = 1;
    head->next = NULL;
    
    // Insert 6.  So linked list becomes 1->6->NULL 
  append(&head, 6); 
  
  // Insert 7 at the beginning. So linked list becomes 7->1->6->NULL 
  push_front(&head, 7); 
  
  // Insert 1 at the beginning. So linked list becomes 1->7->1->6->NULL 
  push_front(&head, 1); 
  
  // Insert 4 at the end. So linked list becomes 1->7->1->6->4->NULL 
  append(&head, 4); 
  
  // Insert 8, after 7. So linked list becomes 1->7->8->1->6->4->NULL 
  insert_after(head->next, 8); 
  
   printList(head); 
    return 0;
}