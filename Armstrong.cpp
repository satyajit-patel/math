#include <iostream>
#include<math.h>

using namespace std;
string armstrongNumber(int n){
        string s = to_string(n);
        int digit = 0;
        for(int i=0; i<s.size(); i++){
            digit++;
        }
        n = stoi(s);


        int temp=n;
		int ans=0;
        while(temp != 0){
            int lastDigit = temp%10;
            ans += pow(lastDigit, digit);
            temp /= 10;
        }
        if(ans == n) return "Yes";
        else return "No";
}
int main() {
	cout<<armstrongNumber(153);
	return 0;
}