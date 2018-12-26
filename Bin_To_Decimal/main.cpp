#include <iostream>
using namespace std;

int main() {
	//code
	long long t,n,base,d,dec;
	cin>>t;
	while(t--){
	    dec = 0;
	    base = 1;
	    cin>>n;
	    while(n!=0){
	        d = n % 10;
	        dec += d*base;
	        n /= 10;
	        base *= 2;
	    }
	    cout<<dec<<endl;
	    
	}
	return 0;
}