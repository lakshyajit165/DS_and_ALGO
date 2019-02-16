/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 17 February, 2019, 12:02 AM
 */

#include <iostream>

struct Node{
    int data;
    struct Node *next;
};
using namespace std;

void printList(struct Node *n){
    
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}
int main() {
    
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 1;
    head->next = second;
    
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = NULL;
    
    printList(head);
    return 0;
}

