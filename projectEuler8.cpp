/*project Euler problem 8 Hackerrank
  By: Rakesh Kumar Verma (Broken Coder)
  Date: 14th Jan 2019
*/
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
  string num;
  cin>>num;
  int max=-999;
  int n=10,k=5;
  for(int i=0;i<=(n-k);i++){
    int mult=1;
    for(int j=i;j<k+i;j++){
        int m=num[j]-48;
        mult*=m;
    }
    if(mult>max)
      max=mult;
  }
  if(max>1)
    cout<<max<<endl;
  else
    cout<<0<<endl;

  return 0;
}
