/*project Euler problem 2 Hackerrank
  By: Rakesh Kumar Verma (Broken Coder)
  Date: 2nd Jan 2019
*/
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long int first, second, next;
        first = 0, second =1;
        next = first+second;
        long int sum=0;
        while(next<n){
            if(next%2==0){
                sum+=next;
            }
            first = second;
            second = next;
            next = second+first;
        }
        cout<<sum<<endl;
    }
    return 0;
}
