#include<bits/stdc++.h>
using namespace std;
int top = -1;
void check(string s, int n, string st){

	for(int i = 0; i<n; i++){
		if(s[i] == '('){
			top = top+1;
			st[top] = '(';
		}
		if(s[i] == ')'){
			if(top == -1){
				top -= 1;
				break;
			}else{
				top -= 1;
			}
		}
	}
	if(top == -1){
		cout<<"String is Balanced!";
	}else{
		cout<<"String is not Balanced";
	}
}
int main(){

	string s,st;
	cin>>s;
	check(s,s.length(),st);
	return 0;
}
