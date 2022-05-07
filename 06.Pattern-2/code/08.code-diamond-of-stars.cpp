#include <iostream>
using namespace std;
int main(){
	/*
		*
	   ***
	  *****
	   ***
	    *
	*/

// 	int n ;
// 	cin >> n;
// 	int part1 = (n + 1)/2;
// 	int part2 = (n/2);

// 	// 1st part
// 	int row = 1;
// 	while(row <= part1){
// 		int spaces = 1;
// 		int col = 1;
// 		while(spaces <= n-row){
// 			cout << ' ';
// 			spaces++;
// 		}
// 		while(col <= 2*row-1){
// 			cout <<'*';
// 			col++;
// 		}
// 		cout << endl;
// 		row++;
// 	}
// 	// 2nd part 
// 	int row1 = 1;
// 	while(row1 <= part2){
// 		int spaces1 = 1;
// 		while(spaces1 <= row1){
// 			cout <<" ";
// 			spaces1++;
// 		}
// 		int col1 = 2*(part2-row1+1)-1;
// 		while(col1 >= 1){
// 			cout << '*';
// 			col1--;
// 		}
// 		cout << endl;
// 		row1++;

// 	}
// }

int n;
    cin >> n;
    int i = 1;
    while(i <= (n/2) + 1) {
        int k = 1; //k is the number of spaces
        while(k <= (n/2) + 1 - i) {
            cout << " "; k++; 
        }
        int j = 1; 
        while(j <= (2*i) - 1) {
            cout << "*"; 
            j++;
        }
        cout << endl;
        i++; 
    }
    i = 1;
    while(i <= n / 2){
        int k = 1;
        while(k <= i) {
            cout << " "; 
            k++;
        } 
        int j = 2 * ((n/2) - i + 1) - 1;
        while(j >= 1) {
            cout << "*"; 
            j--; 
        }
        cout << endl;
        i++;
    }
}    