#include <iostream>
using namespace std;
int main(){
	/*
	4444
	333
	22
	1

	*/
	int n ;
	cin >> n;
	int row = 1;
	while(row <= n){
		int col = 1;
		while(col <= n-row+1){
			cout << n-row+1;
			col++;
		}
		cout << endl;
		row++;
	}
}