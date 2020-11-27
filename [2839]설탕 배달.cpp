#include <iostream>

using namespace std;

int main(void){
	int n, result = 0; 

	cin >> n;
	result += n / 5;
	n %= 5;
	while(n != 0){
		if(n % 3 == 0){
			result += n/3;
			n %= 3;
		}else{
			result -= 1;
			n += 5;
			
			if(result < 0){
				cout << -1;
				return 0;
			}
		}
	}		
	
	cout << result ;
}
