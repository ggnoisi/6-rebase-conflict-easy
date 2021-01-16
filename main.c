#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int min_element(int* arr, size_t size)
{
    int min = *arr;

    int* it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it < min) {
            min = *it;
        }
    }

    return min;
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

<<<<<<< HEAD
    const int min = min_element(arr, 10);
||||||| parent of d9796db (Count array items with macro)
    const int min = min_element(arr, 7);
=======
    const int min = min_element(arr, N_ELEMENTS(arr));
>>>>>>> d9796db (Count array items with macro)

    printf("Array: ");
<<<<<<< HEAD
    size_t i;
<<<<<<< HEAD
    for (i = 0; i < 10; ++i) {
||||||| parent of d9796db (Count array items with macro)
    for (i = 0; i < 7; ++i) {
=======
    for (i = 0; i < N_ELEMENTS(arr); ++i) {
>>>>>>> d9796db (Count array items with macro)
        printf("%d ", arr[i]);
||||||| parent of 330f3ad (Separate elements with comma)
    size_t i;
    for (i = 0; i < N_ELEMENTS(arr); ++i) {
        printf("%d ", arr[i]);
=======
    size_t i = 0;
    printf("%d", arr[i]);
    ++i;
    for (; i < N_ELEMENTS(arr); ++i) {
        printf(", %d", arr[i]);
>>>>>>> 330f3ad (Separate elements with comma)
    }
    printf("\n");

    printf("Min element: %d\n", min);

    return 0;
}
