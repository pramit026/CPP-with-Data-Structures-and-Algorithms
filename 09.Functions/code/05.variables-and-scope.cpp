#include <iostream>
using namespace std;

int fact(int n){
	int ans = 1;
	for (int i = 1; i <= n; ++i)
	{
		ans *= i;
	}
	return ans;
}


int main(){
	int a ;
	cin >> a;
	int output = fact(a);

	// we cant print ans or n here.. becaue it is local to the function only
	cout << output << endl;
}