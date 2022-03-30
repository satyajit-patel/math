#include <bits/stdc++.h>

using namespace std;
int main() {
	int n; cin>>n;
	if(n%4 == 0){
		if(n%100 == 0){ //check century year or not like 2100, 3100
			if(n%400 == 0) cout<<"leafYear";
			else cout<<"notLeafYear";
		}
		else cout<<"leafYear";
	}
	else cout<<"notLeafYear";
	return 0;
}