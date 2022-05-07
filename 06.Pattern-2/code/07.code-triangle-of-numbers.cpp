#include <iostream>
using namespace std;
int main(){
	/*
	   1
	  232
	 34543
	4567654

	*/

	// increasing part
	int n ;
	cin >> n;
	int row = 1;
	while(row <= n){
		int spaces = 1;
		int col = 1;
		int val = row;
		while(spaces <= n-row){
			cout << ' ';
			spaces++;
		}
		while(col <= row){
			cout << val;
			val++;
			col++;
		}
		// decreasing part
		col = 2*row -2;
		while(col >= row){
			cout << col ;
			col--;
		}
		cout << endl;
		row++;
	}
}