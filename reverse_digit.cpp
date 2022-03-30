#include<bits/stdc++.h>
#define int long long int

using namespace std;
int reverse_digit(int n){
	string s = to_string(n);
	reverse(s.begin(), s.end());
	string ans = "";
	int i = s.find_first_not_of('0');
	for(i; i != s.size(); i++){
		ans += s[i];
	}
	return stoll(ans);
}
signed main() {
	cout<<reverse_digit(200);
	return 0;
}