#include<bits/stdc++.h>

using namespace std;
int largestPrimeFactor(int N){
    set<int> ans;
    for(int i=2; i*1 <= N; i++){
        while(N%i == 0){
            ans.insert(i);
            N /= i;
        }
    }
    if(N > 1) ans.insert(N);
    auto it = ans.rbegin();
    return (*it);
}
int main() {
	int n; cin>>n;
	cout<<largestPrimeFactor(n);
	return 0;
}   