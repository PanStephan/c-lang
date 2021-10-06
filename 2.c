#include <stdio.h>

int main() {

    int length = 0;
    int i;
    int sum;

	  int arr[] = {7, 8, 0, 7, 5, 1, 2};

    int firstEl = arr[0];

    length = sizeof(arr)/sizeof(int);

    for(i = 0; i < length; i++) {
        if (firstEl >= arr[i]) {
          ++sum;
        }
    }
    printf("percentile%.1f", (double)sum*100/firstEl);

	return 0;
}