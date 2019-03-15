// sum of first 10 prime numbers
#include<bits/stdc++.h>
using namespace std;
int isPrime(int x){

    int flag = 0;
    for(int i = 2; i<=x/2; i++){
        if(x % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag)
        return 0;
    else
        return 1;

}
int main(){

    int count = 0, sum = 0;
    int i = 2;
    while(true){
        if(count == 10)
            break;
        else
            if(isPrime(i)){
                count++;
                sum+=i;
                cout<<i<<" ";
            }
        i++;
    }
    cout<<endl;
    cout<<sum;

    return 0;
}