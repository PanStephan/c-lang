#include <stdio.h>

int main() {

    int length = 0;
    int i;
    int sum;

	int arr[] = {7, 8, 0, 7, 5, 1, 2};

    length = sizeof(arr)/sizeof(int);

    for(i = 0; i < length; i++) {
        sum = sum + arr[i];
    }

    printf("average%f", (float)sum/length);

	return 0;
}