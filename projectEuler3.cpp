/*project Euler problem 3 Hackerrank
  By: Rakesh Kumar Verma (Broken Coder)
  Date: 2nd Jan 2019
  This is normal elementary method for finding factors
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        long maxPrime=0;
        while(n%2==0){//divide it by 2 till number reaches an odd value
            maxPrime=2;
            n>>=1;
        }
        for(long long i = 3; i <= sqrt(n); i+=2){//no need for its even part
            while(n%i==0){
                maxPrime=i;
                n=n/i;
            }
        }
        if(n > 2){//condition to print if n is prime number greater than 2
            maxPrime = n;
        }
        cout<<maxPrime<<endl;
    }
    return 0;
}
