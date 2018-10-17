#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int n,t,a,flag,pos,l;
	cin>>n;
	int A[n];
	for(int i = 0; i<n; i++)
		cin>>A[i];
	cin>>t;	
	while(t--){
		pos = 0;
		flag = 0;
		cin>>a;
		for(int i = 0; i<n; i++){
			if(A[i] == a){
				flag = 1;
				pos = i+1;
				break;
			}
		}
		if(flag){
			cout<<"Yes "<<pos<<endl;
		}else{
			for(int i = 0; i<n; i++)
			{
				if(A[i] > a){
					l = i+1;
					break;
				}
			}
			cout<<"No "<<l<<endl;
		}
			
			
	}	
	return 0;
}
