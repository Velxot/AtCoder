#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin>>N;
  vector<int> n(31);
  int x=0;
  
  for(int i=30;i>=0;i-=1){
    if(N>=pow(2,i)){
      n[30-i]=1;
      N-=pow(2,i);
    }
  }
  
  for(int i=30;i>=0;i-=1){
    if(n[i]==0){
      x++;
    }
    else{
      break;
    }
  }
  cout<<x<<endl;
}
