#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,num,sum;
	cin>>t;
	while(t--){
	   sum = 0; 
	   cin>>num;
	   for(int i = 1; i<sqrt(num); i++)
	   {
	       if(num % i == 0)
	            sum += i;
	   }
	   if(sum == num)
	        cout<<"1"<<endl;
	   else
	        cout<<"0"<<endl;
	}
	return 0;
}