#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int t;
   cin>>t;
   int cnt=0;
   for(int i=0;i<t;i++){
    string s;
    cin>>s;
    if(s=="For"){
        cnt++;
    }
   }
  //debug cout<<"cnt"<<n;
  if(cnt>t/2){
    cout<<"Yes"<<n;
  }
  else{
    cout<<"No"<<n;
  }

}
