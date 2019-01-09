/*project Euler problem 7 Hackerrank
  By: Rakesh Kumar Verma (Broken Coder)
  Date: 8th Jan 2019
  This code requires some optimisations
*/
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(unsigned int x){
    if(x%2==0)
        return x==2;
    if(x%3==0)
        return x==3;
    for(unsigned int i=5;i<=int(sqrt(x)); i+=6){
        if(x%i==0)
            return false;
        if(x%(i+2)==0)
            return false;
    }
    return true;
}

unsigned int nthPrime(unsigned int n){
    unsigned int count=0;
    unsigned int i=2;
    unsigned int res;
    while(count<n){
        if(isPrime(i)){
            count++;
            res=i;
        }
        i++;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned int n;
        cin >> n;
        unsigned int res=nthPrime(n);
        cout<<res<<endl;
    }
    return 0;
}
