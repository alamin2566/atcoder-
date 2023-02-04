
#include <bits/stdc++.h>
#define ll long long
#define maxn 200005
#define mod 998244353
using namespace std;
int n,k;
int a[maxn];
int main()
{
	cin>>n>>k;
	for (int i=1;i<=n;i++) cin>>a[i];
	if (k>=n)
	{
		for (int i=1;i<=n;i++) cout<<0<<" ";
		cout<<endl;
	}
	else
	{
		for (int i=k+1;i<=n;i++) cout<<a[i]<<" ";
		for (int i=1;i<=k;i++) cout<<"0 ";
		cout<<endl;
	}
}
