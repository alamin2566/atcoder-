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
   int x,a;
   cin>>x>>a;
   int arr[x];
   for(int i=1;i<=x;i++){
    cin>>arr[i];
   }

   for(int i=1;i<=x;i++){
       if(arr[i]==a){
          cout<<i<<n;
       }
   }






  }
