#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num;

int main(void){
	cin >> num;
	vector<int> v[num];
	vector<int> a;
	
	int x, y;

	for(int i = 0; i < num; i++){
		cin >> x >> y;

		v[i].push_back(y);
		v[i].push_back(x);
	}	
	
	sort(v,v+num);
	
	a.push_back(v[0][0]); 
	for(int i = 1; i < num; i++){
		if(v[i][1] >= a.back()){
			a.push_back(v[i][0]);
		}
	} 
	cout << a.size();
} 
