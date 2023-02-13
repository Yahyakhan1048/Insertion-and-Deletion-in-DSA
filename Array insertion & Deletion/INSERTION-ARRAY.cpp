#include <iostream>
#include<climits>
using namespace std;
int main() {
	


	int arr[5];
	for (int i=0; i<5; i++) {
		cout << "Enter the array Element: " << endl;
		cin >> arr[i];
	}
	cout << "Befor Sorting My Array output: ";
	for(int i=0; i<5; i++) { 
	
		cout << arr[i] << " " << endl;
	}
	int pos;
	int num;
	cout << "Enter number that your are put: ";
	cin >> num;
	cout << "Enter the position where you want to put: ";
	cin >> pos;
	for (int i= 6; i>=pos; i--) {
		arr[i+1] = arr[i];
	}
	arr[pos] = num;
	pos  = pos + 1;
	cout << "Your New Array: ";
		for (int i=0; i<6; i++) {
		cout << arr[i] << " ";
	}
	return 0;
	
}
