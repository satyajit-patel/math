#include<bits/stdc++.h>

using namespace std;
//O(Log(min(a,b)))
int gcd(int a, int b)
{
	//baseCase
	if(b == 0) return a;

	//recursiveCase
	return gcd(b, a%b);
}
int main()
{
	int a, b; cin>>a>>b;
	cout<<gcd(abs(a), abs(b));
	return 0;
}