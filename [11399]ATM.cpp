#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num, sum = 0;
int main(void){
	
	cin >> num;
	
	vector<int> v(num);
	for(int i = 0; i < v.size() ; i ++){
		cin >> v[i];
	}
	
	sort(v.begin(), v.end());
	
	sum += v[0];
	for(int i = 1; i < v.size(); i++){
		v[i] += v[i-1];
		sum += v[i];
	}
	cout << sum ; 
}
