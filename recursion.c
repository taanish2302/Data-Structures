//Fibonacci Series with recursion
/*
#include <stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("Fibonacci Series up to %d terms:\n", n);
    for(int i=0;i<n;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}
    */

//Fibonacci without recursion
/*
#include <stdio.h>
int main(){
    int n, t1=0,t2=1,next;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("Fibonacci Series up to %d terms:\n", n);
    for(int i=0;i<n;i++){
        if(i==0){
            printf("%d ",t1);
            continue;
        }
        if(i==1){
            printf("%d ",t2);
            continue;
        }
        next=t1+t2;
        t1=t2;
        t2=next;
        printf("%d ",next);
    }
    return 0;
}*/

//factorial of a number using recursion
/*
#include <stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}*/


//sum of n natural numbers using recursion
/*
#include <stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is %d\n", n, sum(n));
    return 0;
}
*/