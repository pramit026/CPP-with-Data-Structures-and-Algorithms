#include <iostream>
using namespace std;
int main(){
	/*
	   *
	  ***
	 *****
	*******

	*/
	int n ;
	cin >> n;
	int row = 1;
	while(row <= n){
		int spaces = 1;
		int col = 1;
		while(spaces<=n-row){
			cout << ' ';
			spaces++;
		}
		while(col<= row){
			cout << '*';
			col++;
		}
		// decreasing part
		col = row - 1;
		while(col >= 1){
			cout << '*';
			col--;
		}
		cout << endl;
		row++;
	}
}