#include <iostream>
using namespace std;
int main(){
	// // 1st
	// /*
	// ABCD
	// ABCD
	// ABCD
	// ABCD
	// */
	// int n ;
	// cin >> n;
	// int row = 1;
	// while(row <= n){
	// 	int col = 1;
	// 	while(col <= n){
	// 		cout << char('A'+col-1);
	// 		col++;
	// 	}
	// 	cout << endl;
	// 	row++;
	// }

	// 2nd
	/*
	ABCD
	BCDE
	CDEF
	DEFG
	*/
	int n ;
	cin >> n ;
	int row = 1;
	while(row <= n){
		int col = 1;
		while(col <= n){
			char ch = 'A'+row-1;
			cout << char(ch+col-1);
			col++;
		}
		cout << endl;
		row++;
	}
}