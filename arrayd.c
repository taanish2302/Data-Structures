/*
// delete an element from an array
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5};
    int n=5;
    int pos=3; 
    for (int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

//delete an element from the end of an array
/*
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5};
    int n=5;
    n--;
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

//delete an element from the start of an array
/*
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5};
    int n=5;
    for (int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

// delete an element from a given position in an array
/*
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5};
    int n=5;
    int pos=3; 
    for (int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/
