//program to arrange series of numbers using quick sort
/*
#include <stdio.h>
void quicksort(int arr[], int low, int high){
    int i=low;
    int j=high;
    int pivot=arr[(low+high)/2];
    int temp;
    while(i<=j){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<=j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    if(low<j){
        quicksort(arr,low,j);
    }
    if(i<high){
        quicksort(arr,i,high);
    }
}

int main(){
    int arr[100],n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

//program to arragne series of numbers using merge sort
/*
#include <stdio.h>
void merge(int arr[], int left, int mid, int right){
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1], R[n2];
    for(i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }
    i=0;
    j=0;
    k=left;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        } else {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

*/

//program to arrange series of numbers using insertion sort
/*
#include <stdio.h>
void insertionSort(int arr[], int n){
    int i, key, j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[100],n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,n);
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

//implement heap sort
/*
#include <stdio.h>
void heapify(int arr[], int n, int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    int temp;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr,n,largest);
    }
}
    */