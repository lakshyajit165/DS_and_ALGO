<<<<<<< HEAD
#include<iostream>
using namespace std;
int top;
void check(char str[],int n, char stack[]){
	
	for(int i=0; i<n; i++){
		
		if(str[i] == '('){
			top = top+1;
			stack[top] = '(';
		}
		if(str[i] == ')'){
			
			if(top == -1){
				top = top-1;
				break;
			}
			else{
				top = top - 1;
			}
		}
		
	}
	if(top == -1)
		cout<<"String is balanced!"<<endl;
	else
		cout<<"String is not balanced"<<endl;	
	
	
}
int main(){
	
	//balanced parenthesis string
	char str[] = {'(','a','+','(','b','-','c',')',')'};
	
	//unbalanced parenthesis string
	char str1[] = {'(','(','a','+','b',')'};
	
	char stack[15];
	
	top = -1;
	
	check(str,9,stack);
	
	top = -1;
	
	check(str1,5,stack);
	
	return 0;
	
}
=======
#include<iostream>
using namespace std;
int top;
void check(char str[],int n, char stack[]){
	
	for(int i=0; i<n; i++){
		
		if(str[i] == '('){
			top = top+1;
			stack[top] = '(';
		}
		if(str[i] == ')'){
			
			if(top == -1){
				top = top-1;
				break;
			}
			else{
				top = top - 1;
			}
		}
		
	}
	if(top == -1)
		cout<<"String is balanced!"<<endl;
	else
		cout<<"String is not balanced"<<endl;	
	
	
}
int main(){
	
	//balanced parenthesis string
	char str[] = {'(','a','+','(','b','-','c',')',')'};
	
	//unbalanced parenthesis string
	char str1[] = {'(','(','a','+','b',')'};
	
	char stack[15];
	
	top = -1;
	
	check(str,9,stack);
	
	top = -1;
	
	check(str1,5,stack);
	
	return 0;
	
}
>>>>>>> 4fee85f7a02eb180270f32d24655b69d109ce50e
