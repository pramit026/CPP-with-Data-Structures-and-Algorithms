#include <iostream>
using namespace std;
int main(){
	// /*
	// 1 1 1 1
	// 2 2 2 2
	// 3 3 3 3
	// 4 4 4 4

	// */
	// int n ;
	// cin >> n;
	// int row = 1;
	// while(row <= n){
	// 	int col = 1;
	// 	while(col <= n){
	// 		cout << row <<' ';
	// 		col++;
	// 	}
	// 	cout << endl;
	// 	row ++;
	// }


	// // 2nd pattern
	// /*
	// 1 2 3 4
	// 1 2 3 4
	// 1 2 3 4
	// 1 2 3 4
	// */
	// int n ;
	// cin >> n;
	// int row = 1;
	// while(row <= n){
	// 	int col = 1;
	// 	while(col <= n){
	// 		cout << col <<' ';
	// 		col++;
	// 	}
	// 	cout << endl;
	// 	row++;
	// }


	// 3rd pattern

	/*
	4 3 2 1
	4 3 2 1 
	4 3 2 1 
	4 3 2 1

	*/
	int n ;
	cin >> n;
	int row = 1;
	while(row <= n){
		int col = 1;
		while(col <= n){
			cout << n-col+1 << ' ';
			col++;
		}
		cout << endl;
		row ++;
	}
}