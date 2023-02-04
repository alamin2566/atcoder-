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
  int x,y,cnt=0;
   cin>>x>>y;
   string s[100];
    for(int i=0;i<x;i++){
        cin>>s[i];
        for(int j=0;j<y;j++){
            if(s[i][j]=='#')
                cnt++;
        }
    }
    cout<<cnt<<n;
  }
