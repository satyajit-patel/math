#include<iostream>

using namespace std;
//O(sqrt(n))
string isPrime(int n){
	int factor = 0;
	for(int i=1; i*i <= n; i++){
		if(n%i == 0){
			factor++;
			if((n/i) != i) factor++;
		}
	}
	if(factor == 2) return "yeah prime";
	else return "nahh not prime";
}
int main() {
	int n; cin>>n;
	cout<<isPrime(n);
	return 0;
}   