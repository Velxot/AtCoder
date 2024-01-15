#include <bits/stdc++.h>
using namespace std;

int main(){
  long long N;
  cin>>N;
  N-=1;
  vector<int> n(19,0);
  
  for(int i=18;i>=0;i-=1){
    for(int j=0;j<5;j++){
      if(N>=pow(5,i)){
        n[18-i]+=1;
        N-=pow(5,i);
      }
    }
  }
  int c=18;
  for(int i=0;i<19;i++){
    if(n[i]!=0){
      c=i;
      break;
    }
  }
  for(int i=c;i<19;i++){
    cout<<2*n[i];
  }
}
