#include<bits/stdc++.h>
#define int long long int

using namespace std;
int fact(int n)
{
	//baseCase
	if(n == 1) return 1;

	//recursiveCase
	return n * fact(n-1);
}
int nCr(int n, int r)
{
	int numer = fact(n);
	int deno = fact(r) * fact(n-r);

	return numer/deno;
}
signed main()
{
	int n, r; cin>>n>>r;
	cout<<nCr(n, r);
	return 0;
}