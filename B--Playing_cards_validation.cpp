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
   for(int i=0;i<t;i++){
    string s;
    cin>>s;
    if(s[i]=="H"||s[0]=="D"||s[0]=="C"||s[0]=="S"){
        if(s[1]=="A"||s[1]>="2"&&s[1]=>"9"||s[1]=="T"||s[1]=="J"||s[1]=="Q"||s[1]=="K"){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }

   }
  }
