/*project Euler problem 5 Hackerrank
  By: Rakesh Kumar Verma (Broken Coder)
  Date: 7th Jan 2019
*/
#include<iostream>
//#include<algorithm>
using namespace std;

long long gcd(long long a, long long b){
    if(b==a)
      return a;
    if(b==0)
      return a;
    if(a==0)
      return b;
    if(a > b)
        return gcd(a-b, b);

    return gcd(a, b-a);
}

long long smallestMult(int n){
    long long res=1;
    for(long long i=1;i<=n;i++)
        //res=(res*i)/(__gcd(res,i));//direct algorithm for gcd() include algorithm header file
        res=(res*i)/(gcd(res,i));
    return res;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long res = smallestMult(n);
        cout<<res<<endl;
    }
    return 0;
}
