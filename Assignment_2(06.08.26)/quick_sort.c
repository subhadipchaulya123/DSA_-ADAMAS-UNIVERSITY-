/*
WAP in c to take input in an array 10 unorder number and apply
Quick sort to order the array i ascending order
Sample input:[5,2,1,3,8,9,6,4,7,12]
*/

#include<stdio.h>
void quick_sort(int arr[],int low,int high){
if(low>=high){
    return;
}
int start=low;
int end=high;
int mid=start+(end-start)/2;
int pivot=arr[mid];
while(start<=end){
    while(arr[start]<pivot){
        start++;
    }
     while(arr[end]>pivot){
        end--;
    }
    if(start<=end){
       swap(arr,start,end);
        start++;
        end--;
    }
    
}
quick_sort(arr,low,end);
quick_sort(arr,start,high);
}
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int main(){
    int arr[]={5,2,1,3,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
