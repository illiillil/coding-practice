#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
	
	vector<int> a;
	vector<string> b;
	
	string str; // 입력 받을 string 
	string s = "";	// 한글자씩 처리할 string 
	string o;
	
	int abc;
	int sum = 0;
	
	cin >> str;
	
	for(int i = 0; i <= str.size(); i++){		
		if(str[i] != '+' && str[i] != '-' && i != str.size()){
			s += str[i];			
		}else{
			if(str[i] == '+' || str[i] == '-'){
				o = str[i];
				b.push_back(o);
			}
			abc = stoi(s);
			a.push_back(abc);
			s = "";
		}
	}

	int k = 0; 
	for(int j = 0 ; j < a.size()-1; j++){
		if(b[k] == "+"){
			a[j] += a[j+1];
			a.erase(a.begin()+(j+1));
			j--;
			k++;
		}
	}
	sum = a[0];
	for(int j = 1 ; j < a.size(); j++){
		sum -= a[j];
	}
	cout << sum;
}

//0+02+003+0004+00005
//0+50-40-25+40-125
