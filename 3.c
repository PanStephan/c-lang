#include <stdio.h>

void sorting(int *x, int y);

int main() {

    int length = 0;
    int i;
    int sum;

	  int arr[] = { 7, 8, 0, 7, 5, 1};

    length = sizeof(arr)/sizeof(int);
    sorting(arr, length);

    if (length % 2 == 1) {
      // odd
      printf("odd%d", arr[(int)length/2]);
    } else {
      printf("even%d", (arr[(int)(length)/2-1] + arr[(int)(length)/2])/2);
    }

	return 0;
}

void sorting(int *x, int y)
{
    int i, j, temp;
    for(i = 1; i <= y-1; i++)
    {
        for(j = 0; j < y-i; j++)
        {
            if(*(x+j) > *(x+j+1))
            {
                temp = *(x+j);
                *(x+j) = *(x+j+1);
                *(x+j+1) = temp;
            }
        }
    }
}