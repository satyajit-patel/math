#include<bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
	//baseCase
	if(b == 0) return a;

	//recursiveCase
	return gcd(b, a%b);
}
int lcm(int a, int b)
{
	return (a*b)/gcd(a, b);
}
int main()
{
	int a, b; cin>>a>>b;
	cout<<lcm(abs(a), abs(b));
	return 0;
}