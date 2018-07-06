#include<iostream>
using namespace std;
int main(){
	
	int no,no1,d,revno;
	
	char ans;
	do{
		cin>>no;
	    no1 = no;
	    revno=0;
		while(no!=0){
			d = no%10;
			revno = revno*10+d;
			no/=10;
		}
		if(no1 == revno)
		  cout<<"Palindrome!"<<endl;
		else
		  cout<<"Not a Palindrome"<<endl; 
		 
		cout<<"Want to continue?(y/n)"<<endl;
		cin>>ans;  
      }while(ans!='n');
	return 0;
}
