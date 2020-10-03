#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	cin >> n;//num of elements in array
	int arr[n];
	for (i = 0; i < n; i++)
	{   //Enter element
		cin >> arr[i];
	}
	for (i = 0; i < n; ++i)
	{
		for (j = i + 1; j < n; ++j)
		{   // Comparing consecutive num and switching values if value at i > j.
			if (arr[i] > arr[j])
			{
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}
		}
	}
	// Display the sorted data.
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
