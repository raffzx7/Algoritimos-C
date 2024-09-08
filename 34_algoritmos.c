#include <stdio.h>
#include <stdlib.h>
void mergeArrays(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
      int n2 = right - mid;
        int* leftArray = (int*)malloc(n1 * sizeof(int));
          int* rightArray = (int*)malloc(n2 * sizeof(int));
    for (int i = 0; i < n1; i++)
          leftArray[i] = arr[left + i];
      for (int j = 0; j < n2; j++)
          rightArray[j] = arr[mid + 1 + j];
    int i = 0, j = 0;
    int k = left;
      while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
              arr[k] = leftArray[i];
                i++;
        } else {
            arr[k] = rightArray[j];
              j++;
        }
      k++;
    }-
      while (i < n1) {
        arr[k] = leftArray[i];
          i++;
            k++;
    }
      while (j < n2) {
        arr[k] = rightArray[j];
          j++;
            k++;
    }
    free(leftArray);
      free(rightArray);
}
void mergeSort(int arr[], int left, int right) {
      if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
          mergeSort(arr, mid + 1, right);
            mergeArrays(arr, left, mid, right);
    }
}
void printArray(int arr[], int size) {
      for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int size;
    printf("insira o array: ");
    scanf("%d", &size);
      int* array = (int*)malloc(size * sizeof(int));
    printf("insira %d elementos:\n", size);
      for (int i = 0; i < size; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &array[i]);
    }
    printf("Array original: \n");
      printArray(array, size);
        mergeSort(array, 0, size - 1);
    printf("Array ordenado: \n");
      printArray(array, size);
        free(array);
    return 0;
}
