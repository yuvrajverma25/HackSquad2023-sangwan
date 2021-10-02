#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void merge(int A[],  int p,  int q,  int r){
     int n1 = q - p;
     int n2 = r - q;


    int L[n1 + 1]; // elements from p before q
    int R[n2 + 1]; // elements from q to r

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    for (int i = 0; i < n1; i++){
        L[i] = A[p + i];
    }

    for (int i = 0; i < n2; i++){
        R[i] = A[q + i];
    }

    int i = 0;
    int j = 0;

    for ( int k = p; k < r; k++){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
    }

}
void merge_sort(int A[],  int p,  int r) {
    if (p < r - 1) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q, r);
        merge(A, p, q, r);
    }

}

int main(){

    int size;
    printf("Enter size of array to generate: ");
    scanf("%d", &size);
    int A[size];
    int n = sizeof(A)/sizeof(A[0]);

    for(int i=0;i<n;i++){
     A[i]=rand()%100;
    }
    printf("original order of elements in Array: \n");

    for (int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }

    merge_sort(A, 0, n);

    printf("\n\n");
    printf("after performing merge_sort: \n");


    for (int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }

    printf("\n\n");

return 0;
}
