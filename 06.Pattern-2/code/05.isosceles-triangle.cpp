#include <iostream>
using namespace std;
int main(){
	/*
	   1
	  121
	 12321
	1234321
	*/
	int n ;
	cin >> n;
	// 1st increasing part
	int row = 1;
	while(row <= n){
		int spaces = 1;
		int col = 1;
		while(spaces <= n-row){
			cout <<' ';
			spaces++;
		}
		while(col <= row){
			cout << col;
			col++;
		}
		// deccreasing part
		col = row - 1;
		while(col >= 1){
			cout << col;
			col--;
	}
		cout << endl;
		row ++;
	}

}