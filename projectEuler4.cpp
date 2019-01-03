/*project Euler problem 4 Hackerrank
  By: Rakesh Kumar Verma (Broken Coder)
  Date: 3rd Jan 2019
*/
#include<iostream>
#include<string>
using namespace std;

bool isPalin(long int n){
    bool ispalin = true;
    string number = to_string(n);
    for(int i=0;i<number.size()/2;i++){
        if(number[i]!=number[number.size()-1-i]){
            ispalin=false;
            return false;
        }
    }
    return true;
}

long int largestPalindrome(int n){
    long int maxProduct = 0;
    for(int i=990;i>99;i-=11){
        for(int j=999;j>99;j--){
            int product = i*j;
            if(maxProduct < product && product < n && isPalin(product) ){
                maxProduct=product;
                break;
            }
            else if(maxProduct > product)
                break;
        }
    }
    return maxProduct;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long int res = largestPalindrome(n);
        cout<<res<<endl;
    }
    return 0;
}
