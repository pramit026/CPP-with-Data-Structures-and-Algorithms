#include <iostream>
using namespace std;
int main(){
	int n ;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int arrSum = 0;
	for (int i = 0; i < n; ++i)
	{
		arrSum += arr[i];
	}
	cout << "sum is "<< arrSum;
}