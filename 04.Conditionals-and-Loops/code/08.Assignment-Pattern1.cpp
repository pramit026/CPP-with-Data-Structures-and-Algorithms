#include <iostream>
using namespace std;
int main(){
	/*
	1
	2 3
	3 4 5
	4 5 6 7
	*/
	int n ; 
	cin >> n;
	int row = 1;
	while(row <= n){
		int col = 1;
		int val = row;
		while(col <= row){
			cout << val;
			val ++;
			col ++;
		}
		cout << endl;
		row++;
	}

}