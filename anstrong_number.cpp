#include<iostream>
using namespace std;
int main(){
	
	int no,n1,d,final_no=0;
	cin>>no;
	n1 = no;
	while(no!=0){
		d = no%10;
		final_no += d*d*d;
		no/=10;
	}
	if(final_no == n1)
		cout<<"Armstrong No!";
	else
		cout<<"Not an Armstrong Number";	
	return 0;
}
