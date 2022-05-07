#include <iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	int row = 1;
	while(row <= n){
		int col = 1;
		int spaces = 1;
		int val = row;
		while(spaces <= n - row){
			cout << " ";
			spaces++;
		}
		while(col <= row){
			cout << val;
			val--;
			col++;
		}
		int part = 2;
		while(part <= row){
			cout << part;
			part++;
		}
	cout << endl;
	row++;
	}
}