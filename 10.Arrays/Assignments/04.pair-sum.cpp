#include <iostream>
using namespace std;

void pairSum(int arr[], int n, int x){
	for (int i = 0; i < n; i++)
	{
		int j;
		for (j = i+1; j < n; j++)
		{
			if(i != j){
				if((arr[i] + arr[j]) == x){
					if(arr[i] > arr[j]){
						cout << arr[j] << " " << arr[i] << endl;
					}else{
						cout << arr[i] << " " << arr[j] << endl;
					}
				}
		}
	}
  }
}
int main(){
	int n;
	cin >>n;
	int x;
	int arr[1000];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cin >> x;
	pairSum(arr, n, x);
}