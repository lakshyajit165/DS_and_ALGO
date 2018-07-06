#include<iostream>
using namespace std;
template <typename X> 
inline void swap(X &a, X &b){
	X tp;
	tp = a;
	a = b;
	b = tp;
	cout<<"Swapped Values : "<<a<<" "<<b<<endl;
}
int main(){
	
	int a = 10, b = 20;
	swap(a,b);
	float c = 15.4, d = 13.2;
	swap(c,d);
	return 0;
}
