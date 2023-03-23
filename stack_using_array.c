#include<stdio.h>
#include<stdlib.h>
#define ss 3
int mstack[3];
int top=-1;
void push(int ele){
    if(top==ss-1){
        printf("Stack is full\n");
        return;
    }
    top++;
    mstack[top]=ele;
    printf("Element pushed\n");
}

void pop(){
    if(top==-1){
        printf("Stack is Empty\n");
        return ;
    }
    int ele = mstack[top];
    top--;
    printf("Element popped is %d\n",ele);
}

void size(){
    printf("Size of the stack is %d\n",top+1);
}

void display(){
    int i;
    if(top==-1){
        printf("Nothing to display\n");
    }
    else{
        printf("Elements are: ");
        for(i=0;i<=top;i++){
            printf("%d",mstack[i]);
        }
        printf("\n");
    }
}

void main(){
    int ele,choice;
    printf("1.push 2.pop 3.size 4.display 5.Exit\n");
    while(1){
    printf("Choose any option: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter the value to be pushed: ");
        scanf("%d",&ele);
        push(ele);
        break;
        case 2:
        pop();
        break;
        case 3:
        size();
        break;
        case 4:
        display();
        break;
        case 5:
        exit(0);
        break;
        default:
        printf("Enter the valid choice");
    }
    }
}
