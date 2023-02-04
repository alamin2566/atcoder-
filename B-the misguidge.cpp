#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t,i,j,n,k,p,q;
    cin>>n>>k;
    while(1)
    {
        q=n%10;
        j=k/10;
        p=(n/10)*10+j;

        q=q*10+k%10;

        if(p<=23&&q<=59&&n<=23&&k<=59)
        {
            cout<<n<<" "<<k<<endl;
            break;
        }
        k++;
        if(k>=60)
        {
            k=0;
            n++;
            if(n>=24)
                n=0;
        }
    }

}
