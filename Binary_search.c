#include<stdio.h>

int binarySearch(int arr[],int x,int low, int high){
    if(high>=low){
        int mid = low + (high-low)/2;
        if(arr[mid]==x)
        return mid;

        if(arr[mid]>x)
        return binarySearch(arr,x,low,mid-1);
        return binarySearch(arr,x,mid+1,high);
    }
    return -1;
}

int main(void){
    int arr[]={3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=4;
    int result = binarySearch(arr,x,0,n-1);
    if(result==-1)
    printf("Not found");
    else{
        printf("Element is found at index %d",result);
    }
}