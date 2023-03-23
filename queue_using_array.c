#include<stdio.h>
#include<stdlib.h>
#define qs 5
int queue[qs];
int rear=-1,front=-1;
int isEmpty(){
    if(front=-1&&rear==-1)
    return 1;
    else
    return 0;
}
int isFull(){
    if(rear==qs-1)
    return 1;
    else
    return 0;
}

void enqueue(int ele){
    if(isFull()){
        printf("Queue is full\n");
    }
    else if(isEmpty()){
        front=0;
        rear=0;
        queue[rear]= ele;
        printf("Element Enqueued is %d\n",queue[rear]);
    }
    else{
        rear=rear+1;
        queue[rear]=ele;
        printf("Element Enqueued is %d\n",queue[rear]);
    }
}

void dequeue(){
    if(isEmpty()){
        printf("Underflow");
    }
    else if(front==rear){
        printf("Element Enqueued is %d\n",queue[front]);
        front--;
        rear--;
    }
    else{
        int ele=queue[front];
        front++;
        printf("Element enqueued is %d\n",queue[front]);
    }
}

void peek(){
    if(isEmpty()){
        printf("Nothing to peek\n");
    }
    else{
        printf("Peek value is %d\n",queue[front]);
    }
}

void display(){
    if(isEmpty()){
        printf("Nothing to display\n");
    }
    else{
        int i;
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

void main(){
    int ele,choice;
    printf("1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n");
    while(1){
        printf("Enter your choice: \n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the Element to be Enqueued: \n");
            scanf("%d",&ele);
            enqueue(ele);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("Enter the valid choice....");
        }
    }
}