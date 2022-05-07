#include <iostream>
using namespace std;
int main(){
	// // 1st pattern

	// /*
	// 1
	// 1 2
	// 1 2 3
	// 1 2 3 4
	// */
	// int n ;
	// cin >> n;
	// int row = 1;
	// while(row <= n){
	// 	int col = 1;
	// 	while(col <= row){
	// 		cout << col <<' ';
	// 		col++;
	// 	}
	// 	cout << endl;
	// 	row++;
	// }

	// // 2nd pattern
	// /*
	// 1
	// 2 3
	// 3 4 5
	// 4 5 6 7
	// */
	// int n ;
	// cin >> n;
	// int row = 1;
	// while(row <= n){
	// 	int col = 1;
	// 	int val = row;
	// 	while(col <= row){
	// 		cout << val << ' ';
	// 		col++;
	// 		val++;
	// 	}
	// 	cout << endl;
	// 	row++;
	// }

	// 3rd pattern
	/*
	1
	2 3 
	4 5 6 
	7 8 9 10
	*/
	int n ;
	cin >> n;
	int row = 1;
	int val = row;
	while(row <= n){
		int col = 1;
		while(col <= row){
			cout << val <<' ';
			val++;
			col++;
		}
		cout << endl;
		row++;
	}
}