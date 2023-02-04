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
   string s;
   cin>>t>>s;

     for(int i=1;i<t;i++){
            int cnt=0;
        for(int j=0;j+i<t;j++){
            if(s[j]!=s[j+i])
                cnt++;

            else
                break;


        }
        cout<<cnt<<n;

     }

   }




