//Linear queue implementation in C
#include <stdio.h>
#include <stdlib.h>
void enque();
void deque();
void display();
#define size 5
int que[size];
int f=-1;
int r=-1;

void enque(){                                                                                                 
    int ele;
    if(r==size-1){
        printf("queue Overflow\n");
    }
    else{
        printf("Enter data: ");
        scanf("%d",&ele);
        if(f==-1)
            f=0;
        r++;
        que[r]=ele;
    }
}

void deque(){
    if(f==-1){
        printf("queue Underflow\n");
    }
    else{
        printf("\nDequeued element: %d\n", que[f]);
        if(f==r)
            f=r=-1;
        else
            f++;
    }
}

void display(){
    if(f==-1)
        printf("queue is empty\n");
    else{
        printf("queue elements: ");
        for(int i=f; i<=r; i++)
            printf("%d ", que[i]);
        
    }
        
}
int main(){
    enque();
    enque();
    enque();
    enque();
    enque();
    display();
    deque();
    deque();
    display();
    return 0;
}
