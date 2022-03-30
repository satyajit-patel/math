#include<bits/stdc++.h>

using namespace std;
bool isPrime(int n){
	int factor = 0;
	for(int i=1; i*i <= n; i++){
		if(n%i == 0){
			factor++;
			if((n/i) != i) factor++;
		}
	}
	if(factor == 2) return true;
	else return false;
}
void prime(int l, int r){
	for(int i=l; i<=r; i++){
		if(isPrime(i) == true) cout<<i<<" ";
	}
}
void sievePrime(int l, int r){
	int n = 1000;
	vector<int> vec(n, 0);
	
	for(int i=2; i<=n; i++) vec[i] = 1;
	for(int i=2; i*i < n; i++){
		if(vec[i] == 0) continue;
		for(int j= i*i; j<=n; j = j+i) vec[j] = 0;
	}

	for(int i=l; i<=r; i++) if(vec[i] == 1) cout<<i<<" ";
}
int main() {
	//find number of primes between l And r
	int l,r; cin>>l>>r;
	prime(l, r);//O(n * sqrt(n))
	cout<<"\n";
	sievePrime(l, r);//O(n * loglogn)
	return 0;
}   