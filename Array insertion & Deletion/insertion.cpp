#include <iostream>
#include <stack>
using namespace std;

void inserting(int, int, int, int);
void inserting(int arr[],int size,int element,int loc) {
	for (int i=size; i>=loc; i--) {
		arr[i+1] = arr[i];
	}
	arr[loc] = element;
	size = size +1;
	for (int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
}
 
 
int main()
{
	int size;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" <<endl;
	cout << "Enter the Size of Array: "	;
	cin >> size;
	int arr[size];
	
	for (int i=0; i<size; i++) {
		cout << "enter Element in Array " << i << " : ";
		cin >> arr[i];
	}
	
	int location;
	cout << "Enter the index where You put data: ";
	cin >> location;
	int element;
	cout << "Enter the number: ";
	cin >> element;
	inserting(arr,size, element,location);
	cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" <<endl;
	return 0;
}
