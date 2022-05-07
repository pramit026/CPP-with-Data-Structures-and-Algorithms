#include <iostream>
using namespace std;

/*
// print prime between 2 to n
bool isPrime(int n){
	for (int d = 2; d < n; ++d)
	{
		if(n % d== 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n ;
	cin >> n;
	for (int i = 2; i <= n; ++i)
	{
		if(isPrime(i)){
			cout << i << " ";
		}
	}

}
*/

// function stack

void B(){
	cout << 5 << endl;
}

void A(int a){
	cout << 1 << endl;
	B();
	cout << 2 << endl;
}
int main(){
	int n = 10;
	cout << 3 << endl;
	A(n);
	cout << 4 << endl;
}