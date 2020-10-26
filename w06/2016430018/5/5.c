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
    int *arr1, *arr2, *_inter, *_union;
    int i, j, k=0, l=0;

    arr1 = (int *)malloc(4 * sizeof(int));
    arr2 = (int *)malloc(4 * sizeof(int));
    _inter = (int *)malloc(4 * sizeof(int));
    _union = (int *)malloc(8 * sizeof(int));

    printf("input first set: ");
    for(i=0;i<4;i++) scanf(" %d", &arr1[i]);
    printf("input second set: ");
    for(i=0;i<4;i++) scanf(" %d", &arr2[i]);

    for(i=0;i<4;i++)
    for(j=0;j<4;j++){
        if(arr1[i] == arr2[j]){
            _inter[k] = arr1[i];
            k++;
        }
    }

    for(i=0;i<4;i++){
        _union[l] = arr1[i];
        l++;
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(arr2[i] == _union[j])
            goto Label1;
        }
        _union[l] = arr2[i];
        l++;
Label1: continue;
    }

    arr1 = sort(arr1, 4);
    arr2 = sort(arr2, 4);
    _inter = sort(_inter, k);
    _union = sort(_union, l);

    printf("The first set: {");
    for(i=0;i<4;i++){
        printf("%d", arr1[i]);
        if(i < 3) printf(", ");
        else printf("}\n");
    }
    printf("The second set: {");
    for(i=0;i<4;i++){
        printf("%d", arr2[i]);
        if(i < 3) printf(", ");
        else printf("}\n");
    }
    printf("The intersection set: {");
    if(k == 0) printf(" }\n");
    for(i=0;i<k;i++){
        printf("%d", _inter[i]);
        if(i < k-1) printf(", ");
        else printf("}\n");
    }
    printf("The union set: {");
    for(i=0;i<l;i++){
        printf("%d", _union[i]);
        if(i < l-1) printf(", ");
        else printf("}\n");
    }

    free(arr1);
    free(arr2);
    free(_inter);
    free(_union);
}