#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num;

int main(void){
	
	cin >> num;
	vector<int> v(num);
	vector<int> r(num);
	
	for(int i = 0; i < num; i++){
		int x;
		cin >> x;
		v[i] = x;
	}
	sort(v.begin(), v.end());	

	for(int i = 0; i < num; i++){
		r[i] = (num-i) * v[i];
	}
	sort(r.begin(), r.end());
	
	cout << r[num-1];
}
