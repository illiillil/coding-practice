#include <iostream>
#include <vector>

using namespace std;

int n, k, result = 0;
int main(void){
	cin >> n >> k;
	vector<int> v(n);
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	for(int j = (n-1); j >= 0; j--){
		int x = v[j];
		if(k >= x && k != 0){
			result += k / x; 
			k %= x;
		}
	}
	cout << result;
}
