#include <iostream>
using namespace std;

void main() {

	//O(n)
	int size;
	cout << "Enter the size of the elements";
	cin >> size;
	int* arr = new int[size+1];
	for (int i = 0; i < size; i++) {
		cout << "Enter the elements";
		cin >> arr[i];

	}

	for (int i = 0; i < size - 1; i++) {
		int flag = 0;
		for (int j = 0; j < size-1-i; j++) {
			int temp;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}if (flag==0) {
			break;
		}
	}

	for (int j = 0; j < size; j++) {
		cout << arr[j];

	}

}