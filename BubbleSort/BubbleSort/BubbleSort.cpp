#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 1, 10, 5, 8, 7 ,6, 4, 3, 2, 9 };
	int temp;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9-i; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}