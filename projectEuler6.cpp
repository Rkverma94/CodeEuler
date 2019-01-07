/*project Euler problem 6 Hackerrank
  By: Rakesh Kumar Verma (Broken Coder)
  Date: 7th Jan 2019
*/
#include<iostream>
using namespace std;
long int sumSquareDiff(int n){
    //Simplified formula for square of(sum of n)- sum of squares till n
    return ((3*n*n*n*n)+(2*n*n*n)-(3*n*n)-(2*n))/12;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long int n;
        cin >> n;
        long int result=sumSquareDiff(n);
        cout<<result<<endl;
    }
    return 0;
}
