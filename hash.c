// cprogram to implement hash using linear probing
#include <stdio.h>
#define size 10
int a[size];
void add(){
    int key,i,index,flag=0;
    printf("Enter the key to be added: ");
    scanf("%d",&key);
    index=key%size;
    for(i=index;i<size;i++){
        if(a[i]==-1){
            a[i]=key;
            printf("Key %d added at index %d\n",key,i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        for(i=0;i<index;i++){
            if(a[i]==-1){
                a[i]=key;
                printf("Key %d added at index %d\n",key,i);
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("Hash table is full, cannot add key %d\n",key);
    }

}
void display(){
    int i;
    printf("Hash table contents:\n");
    for(i=0;i<size;i++){
        if(a[i]!=-1){
            printf("Index %d: %d\n",i,a[i]);
        } else {
            printf("Index %d: Empty\n",i);
        }
    }
}
int main(){
    int i,choice;
    for(i=0;i<size;i++){
        a[i]=-1;
    }
    while(1){
        printf("\nMenu:\n1. Add Key\n2. Display Hash Table\n3. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                add();
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}