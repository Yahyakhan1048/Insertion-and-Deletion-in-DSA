#include <iostream>
#include<climits>
using namespace std;
int main() {
	int size;
	cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "Enter the Array Size: ";
	cin >> size;
	int arr[size];
	for (int i=0; i<size; i++) {
		cout << "Enter the element: " << i << "--> ";
		cin >> arr[i];
	}
	cout << "The is the whole array before deleting: ";
	for (int i=0; i<size; i++) {
		cout << arr[i]<< " ";
	}
	int element;
	cout << "\n Enter the index for delete: ";
	cin >> element;
//	while (element > size || element < size) {
//		cout << "Enter the correct index: ";
//		cin >> element;
//	}
	for (int i=element; i<size; i++) {
		arr[i] = arr[i+1];   // we store the forward element in backward index like at the index we store 4 index element
//		arr[i-1] = arr[i]      You can also used that step for deletion
	}
	size = size-1;
	cout << "Array After Deletion: ";
	for (int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	return 0;
}
