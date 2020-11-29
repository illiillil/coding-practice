#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v[501];

int main (void){
	int a, x;
	cin >> a;

	for(int i = 0; i < a; i++){
		for(int j = 0; j <= i; j++){
			cin >> x;
			v[i].push_back(x);
		}
	}

	for(int i = 0; i < a; i++){
		for(int j = 0; j <= i; j++){			
			if(i != 0 && j == 0){
				v[i][j] += v[i-1][j];
			}else if(i != 0 && i == j){
				v[i][j] += v[i-1][j-1];
			}else if(i != 0 && j != 0){
				v[i][j] += max(v[i-1][j-1],v[i-1][j]);
			}
		}
	}
	
	sort(v[a-1].begin(),v[a-1].end());
	int result = v[a-1][a-1];
	cout << result;
}
