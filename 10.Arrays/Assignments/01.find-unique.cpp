#include <iostream>
#include <climits>
using namespace std;

int findUnique(int arr[], int n){
	for (int i = 0; i < n; ++i)
	{
		int j;
		for (j = 0; j < n; ++j)
		{
			if(i != j){
				if (arr[i] == arr[j]){
					break;
				}
			}
		}
		if(j == n){
			return arr[i];
		}
	}
	return INT_MIN;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cout << findUnique(arr,n) << endl;
	return 0;
   }
}