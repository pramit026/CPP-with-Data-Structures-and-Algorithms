#include <iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	if(n == 1 || n == 2){
		cout << 1 << endl;
	}
	int first = 1;
	int second = 1;
	int next ;
	for (int i = 3; i <= n; ++i)
	{
		next = first + second;
		first = second;
		second = next;
	}
	cout << next << endl;
}