/*project Euler problem 1 Hackerrank
  By: Rakesh Kumar Verma (Broken Coder)
  Date: 2nd Jan 2019
*/
#include <iostream>
using namespace std;

long int multThreeFive(long int n){
    long int multThree = 0;
    long int multFive = 0;
    long int multFif = 0;


    long int n3 = n/3;
    multThree = 3*n3*(n3+1)/2;


    long int n5 = n/5;
    multFive = 5*n5*(n5+1)/2;

    long int n15 = n/15;
    multFif = 15*n15*(n15+1)/2;
    return (multThree + multFive - multFif);
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long int n;
        cin >> n;
        long int res = multThreeFive(n-1);
        cout<<res<<endl;
    }
    return 0;
}
