#include<bits/stdc++.h>
using namespace std;
int n,m;
int pri[30],imp[30];
int f[40000];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>pri[i]>>imp[i];
	}
	f[0]=0;
	for(int i=1;i<=m;i++)
		for(int j=n;j>=0;j--)
			if(j>=pri[i]) f[j]=max(f[j],f[j-pri[i]]+pri[i]*imp[i]);
	cout<<f[n];
}

