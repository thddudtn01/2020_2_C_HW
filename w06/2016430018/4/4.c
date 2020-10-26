#include <stdio.h>
#include <stdlib.h>

int *sort(int *arr, int size){
    int i, j, tmp, min;
    for(i=0;i<size;i++){
        min = i;
        for(j=i;j<size;j++){
            if(arr[j] < arr[min]) min = j;
        }
        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
    return arr;
}
int main(){
    int i, size, j, tmp;
    int *arr, *ret;
    printf("Enter a array size: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    printf("Elements of the array before sorting: ");
    for(i=0;i<size;i++) scanf(" %d", &arr[i]);
    printf("Elements of the array after sorting:");
    ret = sort(arr, size);
    for(i=0;i<size;i++) printf(" %d", ret[i]);
    printf("\n");

    free(arr);
}