#include<stdio.h>

int BinarySearch(int *arr,int size,int v){
   int left=0;                  
   int right=size;
   while(left<right){
   int mid=left+(right-left)/2; 
   if(arr[mid]==v){
     return mid;
   } 
   else if(arr[mid]<v){
     left=mid+1;
   }
   else{
     right=mid;
   }


  }
return -1;

}

int main(){

int arr[9]={1,2,12,13,14,112,222,333,444,};
int b=0;
scanf("%d",&b);
int a=BinarySearch(arr,sizeof(arr)/sizeof(arr[0]),b);
printf("%d",a);
return 0;
}















