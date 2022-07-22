#include <stdio.h>
#include <string.h>

// https://www.quora.com/How-do-I-slice-an-array-using-C

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // 5/1 - size is 5, pointer points to the value of the index or 1 item
    size_t arr_len = sizeof(arr)/sizeof(*arr);

    int *slice = arr+2;
    size_t slice_len = arr_len+2-1;

    printf("%d %ld\n", *slice, slice_len);
    printf("%d %ld\n", *arr, arr_len);
}
