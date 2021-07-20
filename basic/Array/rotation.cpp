#include <bits/stdc++.h>
using namespace std;

//reverse array algorithm for array rotation

void reverseArray(int arr[], int start, int end)
{
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void leftRotate(int arr[], int d, int n)
{
	if (d == 0)
		return;
	// d>n
	d = d % n;

	reverseArray(arr, 0, d - 1);
	reverseArray(arr, d, n - 1);
	reverseArray(arr, 0, n - 1);
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

int main()
{
	int n;cin >> n;
	int arr[n];
  for(int i = 0; i < n; i++)cin >> arr[i];
	int d;cin >> d;

	leftRotate(arr, d, n);
	printArray(arr, n);

	return 0;
}
