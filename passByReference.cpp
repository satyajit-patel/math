#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
void solve(int &n, int arr[], vector<int> &vec)
{
	n *= 5;
	for(int i=0; i<5; i++){
		arr[i] *= 5;
	}
	for(auto it=vec.begin(); it != vec.end(); it++){
		*it += 1;
	}
}
int main() {
	int n; cin>>n;
	int &a = n; //nickName
	int arr[5] ={1,2,3,4,5};
	vector<int> vec = {5,10,15,20,25};
	solve(a, arr, vec);
	cout<<n<<" * 5 is "<<a<<"\n";
	for(auto it : arr) cout<<it<<" ";
	cout<<"\n";
	for(auto it : vec) cout<<it<<" ";
	return 0;
}