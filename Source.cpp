#include <iostream>
#include <string>
using namespace std;

/////////////
// SORTING ////////////////////////////////////////////////////////
/////////////



// QUICK
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int* arr,int low, int high) {
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void quicksort(int* arr, int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quicksort(arr, low, pi - 1);
		quicksort(arr, pi + 1, high);
	}
}
// END QUICK	




void printArray(int* arr,int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	/*int arr[] = { 2,3,1,9,5,7,6,8,4 };
	int size = sizeof(arr) / sizeof(int);
	printArray(arr, size);
	quicksort(arr, 0, size-1);
	printArray(arr, size);*/
	std::string str = "abcdef";
	int k = 2;
	std::cout << str + std::to_string(k);
	getchar();
}