//Given an array finding duplication values
/*
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,3,2,6,7,8};
    int n=10;
    printf("Duplicate elements are:");
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}
*/

//Identify location of element in given array
/*
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int key=7;
    int flag=0;
    for (int i=0;i<n;i++){
        if (arr[i]==key){
            printf("Element found at position %d",i+1);
            flag=1;
            break;
        }
    }
    if (flag==0){
        printf("Element not found");
    }
    return 0;
}
*/

//given set of Array elements - display 5th iterated element
/*
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int step=5;
    printf("Elements at every 5th position are:\n");
    for (int i=step-1;i<n;i+=step){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

//Given unsorted array -  Display missing element
/*
#include <stdio.h>
int main(){
    int arr[10] = {3,7,1,2,8,4,5};
    int n=7;
    int max=10;
    printf("Missing elements are:\n");
    for (int i=1;i<=max;i++){
        int flag=0;
        for (int j=0;j<n;j++){
            if (arr[j]==i){
                flag=1;
                break;
            }
        }
        if (flag==0){
            printf("%d ",i);
        }
    }
    return 0;
}
*/

//Given 2 D matrix print largest element
/*
#include <stdio.h>
int main(){
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rows=3,cols=3;
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            if (matrix[i][j]>max){
                max=matrix[i][j];
            }
        }
    }
    printf("Largest element is %d",max);
    return 0;
}
    */

//Given a string  - sort in alphabetical order
/*
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="dogwater";
    int n=strlen(str);
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("Sorted string is %s",str);
    return 0;
}
*/

//Print the index of repeated characters given in an array
/*
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="programming";
    int n=strlen(str);
    printf("Repeated characters and their indices:\n");
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (str[i]==str[j]){
                printf("Character %c at indices %d and %d\n",str[i],i,j);
            }
        }
    }
    return 0;
}
    */

//Print the frequently repeated numbers count from an array

/*
#include<stdio.h>
int main(){
    int arr[10]={1,2,3,2,4,5,3,6,1,2};
    int n=10;
    int freq[10]={0};
    for (int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    printf("Frequency of elements:\n");
    for (int i=0;i<10;i++){
        if (freq[i]>0){
            printf("Element %d occurs %d times\n",i,freq[i]);
        }
    }
    return 0;
}
*/

//sum of row and column elements in an array
/*
#include <stdio.h>
int main(){
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rows=3,cols=3;
    for (int i=0;i<rows;i++){
        int row_sum=0;
        for (int j=0;j<cols;j++){
            row_sum+=matrix[i][j];
        }
        printf("Sum of row %d is %d\n",i+1,row_sum);
    }
    for (int j=0;j<cols;j++){
        int col_sum=0;
        for (int i=0;i<rows;i++){
            col_sum+=matrix[i][j];
        }
        printf("Sum of column %d is %d\n",j+1,col_sum);
    }
    return 0;
}
*/

//elements repeated twice in an araay
/*
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,2,5,3,6,7,8};
    int n=10;
    printf("Elements repeated twice are:\n");
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}
*/
