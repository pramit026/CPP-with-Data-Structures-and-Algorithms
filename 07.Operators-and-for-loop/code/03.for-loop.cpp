#include <iostream>
using namespace std;
int main(){
	// print 1 to n
	// int n ;
	// cin >> n;
	// for (int i = 1; i <= n; ++i)
	// {
	// 	cout << i << " ";
	// }


	// check prime
	int n ;
	cin >> n;
	bool isDiv = false;

	for (int div = 2; div < n; div++)
	{
		if(n % div == 0){
			isDiv = true;
		}
	}
	if(isDiv){
		cout << "not prime" << endl;
	}else{
		cout << "Prime" << endl;
	}
}