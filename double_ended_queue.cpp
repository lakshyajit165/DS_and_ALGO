#include<iostream>
using namespace std;
int front = 1, rear = 6;
void insert_at_back(int queue[], int element, int rear, int array_size){
    if(rear == array_size)
        printf("Overflow\n");
    else{
        queue[rear] = element;
        rear = rear + 1;
    }
}
void delete_from_back(int queue[], int rear, int front){
    if(front == rear)
        printf("Underflow\n");
    else{
        rear = rear - 1;
        queue[rear] = 0;
    }
}
void insert_at_front(int queue[], int rear, int front, int element, int array_size){
    if(rear == array_size)
        printf("Overflow\n");
    else{
        for(int i=rear; i>front; i--)
            queue[i] = queue[i-1];
        queue[front] = element;
        rear = rear+1;
    }
}
void delete_front_front(int queue[], int front, int rear){
    if(front == rear)
        printf("Underflow\n");
    else{
        queue[front] = 0;
        front = front + 1;
    }
}
int get_front(int queue[], int front){
    return queue[front];
}
int get_rear(int queue[], int rear){
    return queue[rear-1];
}
int main(){
	
	int QUEUE[] = {1,2,3,4,5,6};
	int length = sizeof(QUEUE)/sizeof(QUEUE[0]); 
	int query,element;
	cin>>query;
	switch(query){
		case 1: cin>>element;
				insert_at_back(QUEUE,element,rear,length);
				cout<<get_front(QUEUE,front)<<endl;
				cout<<get_rear(QUEUE,rear)<<endl;
				break;
		default: break;			
	}
	return 0;
	
}
