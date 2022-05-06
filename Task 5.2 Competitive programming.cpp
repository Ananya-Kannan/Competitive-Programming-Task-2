#include <stdio.h>
#include <malloc.h>

void print_arr(int * arr, int len) {
	for (int i = 0; i < len; i++) printf("%d ", arr[i]);
}

void include_number(int * arr, int num, int index, int * new_arr) {
	for (int i = 0; i < 6; i++) {
		if (i < index) new_arr[i] = arr[i];
		else if (i == index) { 
			new_arr[i] = num;
			new_arr[i+1] = arr[i];
		}
		else new_arr[i + 1] = arr[i];
	}
}

int main() {
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int num, index, * new_arr;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter index: ");
	scanf("%d", &index);
	
	new_arr = (int *) malloc(sizeof(arr) + sizeof(int));
	
	include_number(arr, num, index, new_arr);
	print_arr(new_arr, 7);
	return 0;
}
