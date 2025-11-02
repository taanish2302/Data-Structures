// Odd or Even count program
/*
#include <stdio.h>

void main() {
    int n, num, even = 0, odd = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);

        if (num % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);  
}
*/

//program for matrix multiplication
/*
#include <stdio.h>
int main(){

int a=[[1,2,3],[4,5,6],[7,8,9]];
int b=[[9,8,7],[6,5,4],[3,2,1]];
int c=[[0,0,0],[0,0,0],[0,0,0]];
int sum=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        sum=0;
        for(int k=0;k<3;k++){
            sum+= a[i][k]*b[k][j];
        }
        c[i][j]=sum;

    }
    printf("\n");
}
return 0;


}
*/
