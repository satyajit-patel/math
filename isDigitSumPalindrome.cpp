#include<bits/stdc++.h>

using namespace std;
int isDigitSumPalindrome(int N){
        
    int sum=0;
    while(N != 0){
        int lastDigit = N%10;
        sum += lastDigit;
        N /= 10;
    }
        
    string s = to_string(sum);
    reverse(s.begin(), s.end());
    int rev = stoi(s);
    if(sum == rev) return 1;
    else return 0;
}
int main() {
	cout<<isDigitSumPalindrome(98);
	return 0;
}