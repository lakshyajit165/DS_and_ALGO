// To compute the largest prime factor of a given number

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    
    for(int i = 2; i<sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int max(int a, int b){
    if(a>b)
        return a;
    return b;
}
int main(){
    
    int t,n,max_fact;
    cin>>t;
    while(t--){
        max_fact = 2;
        cin>>n;
        if(isPrime(n))
            cout<<n<<endl;
        else{
             for(int i = 2; i<sqrt(n); i++){
                    if(n % i == 0){
                        if(isPrime(n/i))
                            max_fact = max(max_fact,n/i);
                        else if(isPrime(i))
                            max_fact = max(max_fact,i);
                    }
                }
                cout<<max_fact<<endl;
        }
       
    }
    return 0;
}