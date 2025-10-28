//Stack Functions
#include <stdio.h>
#define size 5
int stack[size];
int top=-1;

void push(int value){
    if(top==size-1){
        printf("stack overflow\n");
    }
    else{
        top+=1;
        stack[top]=value;
    }
}
int pop(){
    if(top==-1){
        printf("stack underflow\n");
        return -1;
    }
    else{
        int value=stack[top];
        top-=1;
        return value;
    }
}
int peek(){
    if(top==-1){
        printf("stack is empty\n");
        return -1;
    }
    else{
        return stack[top];
    }
}

int display(){
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){
    int ch;
    while (1){
        printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch (ch){
            case 1:
                {
                    int value;
                    printf("enter value to push:");
                    scanf("%d",&value);
                    push(value);
                    break;
                }
            case 2:
                {
                    int value=pop();
                    if(value!=-1){
                        printf("popped value:%d\n",value);
                    }
                    break;
                }
            case 3:
                {
                    int value=peek();
                    if(value!=-1){
                        printf("top value:%d\n",value);
                    }
                    break;
                }
            case 4:
            {
                display();
                break;
            }
            case 5:
                {
                    return 0;
                }
            default:
                {
                    printf("invalid choice\n");
                }
        }
    }
}

