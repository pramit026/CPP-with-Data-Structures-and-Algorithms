#include <iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	// /*
	// 1
	// 1 2
	// 1 2 3
	// 1 2 3 4
	// */
	// int row = 1;
	// while(row <= n){
	// 	int col = 1;
	// 	while(col <= row){
	// 		cout << col <<" ";
	// 		col ++;
	// 	}
	// 	cout << endl;
	// 	row ++;
	// }


	// 2nd pattern
	/*
	1
	2 3
	4 5 6
	7 8 9 10

	*/

	// int row = 1;
	// int val = 1;
	// while(row <= n){
	// 	int col = 1;
	// 	while(col <= row){
	// 		cout << val <<" ";
	// 		col++;
	// 		val ++;
	// 	}
	// 	cout << endl;
	// 	row++;
	// }


	/*
	   1
	  23
	 345
	4567

	*/

	int row = 1;
	int val = row;
	while(row <= n){
		int spaces = 1;
		while(spaces <= n-row){
			cout << ' ';
			spaces++;
		}
		int column = 1;
		while(column <= row){
			cout << val ;
			column++;
			val++;
		}
		cout << endl;
		row++;
	}


}