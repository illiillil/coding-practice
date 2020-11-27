#include <iostream>

using namespace std;

int num, result = 0;

int main(void){
	

	cin >> num;
	num = 1000 - num;
	
	result += num / 500;
	num %= 500;
	
	result += num / 100;
	num %= 100;
	
	result += num / 50;
	num %= 50;
	
	result += num / 10;
	num %= 10;
	
	result += num / 5;
	num %= 5;
	
	result += num / 1;
	num %= 1;
	
	cout << result <<' ';
	
	
}
