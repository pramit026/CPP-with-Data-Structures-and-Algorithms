#include <iostream>
#include <climits>
using namespace std;
int main(){
/*

	// take arr input from the user
	int n ;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i] ;  // i is index of current element
	}
	// printing arr
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;

*/
	// figure out the largest element
	int n ;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int largest = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] > largest){
			largest = arr[i];
		}
	}
	cout << "largest: " << largest << endl;
}