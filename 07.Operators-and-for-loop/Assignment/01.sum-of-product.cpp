#include <iostream>
using namespace std;
int main(){
	int n , choice;
	cin >> n >> choice;
	if(choice == 1){
		// print the sum
		int sum = 0;
		for (int i = 1; i <= n; ++i)
		{
			sum = sum + i;
		}
		cout << sum << endl;
	}
	else if(choice == 2){
		// product
		int product = 1;
		for (int i = 1; i <= n; ++i)
		{
			product *= i;
		}
		cout << product << endl;
	}else{
		cout << -1 << endl;
	}
}