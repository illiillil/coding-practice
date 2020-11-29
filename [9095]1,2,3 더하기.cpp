#include <iostream>
#include <vector>

using namespace std;

int d[11];

int dp(int x){
	if(x == 1) return 1;
	if(x == 2) return 2;
	if(x == 3) return 4;
	if(d[x] != 0) return d[x];
	return d[x] = dp(x-1) + dp(x-2) + dp(x-3);
	
}
int main (void){
	int a, b;
	
	cin >> a;
	
	vector<int> v(a);

	for(int i = 0; i < v.size(); i++){
		cin >> v[i];
	}
	
	for(int i = 0; i < v.size(); i++){
		cout << dp(v[i]) << '\n';
	}
}
