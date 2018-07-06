#include<iostream>
using namespace std;
int main(){
	
	int n,count=0;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
		 cin>>A[i];
	for(int i=0;i<n;i++){
		while(i+2<n){
			if(A[i+2] == 0){
			   i = i+2;	
			   count++;
			}else{
				if(A[i+1] == 0){
					i = i+1;
					count++;
				}
			}
		}
	}	 
	cout<<count;
	return 0;
}
