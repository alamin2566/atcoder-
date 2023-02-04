#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
void recurs(ll n){
     if(n==1){
        cout<<1<<sp;
        return;
     }
     else{
        recurs(n-1);
        cout<<n<<sp;
        recurs(n-1);


     }
}

int main(){
   fast_tle;
   ll n;
   cin>>n;
   recurs(n);

  }
