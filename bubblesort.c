#include<stdio.h>

void BubbleSort(int*arr,int size){
  for(int i=size-1;i>=0;i--){
    int singal=1;
  for(int j=0;j<i;j++){
    if(*(arr+j)>*(arr+j+1)){
        int tem=*(arr+1+j);
        *(arr+1+j)=*(arr+j);
        *(arr+j)=tem;
        singal=0;
        }
  }
  if(singal){
    break;
  }
  } 
}

void print(int* arr,int size){
  for(int i=0;i<size;i++){
    printf("%d ",*(arr+i));
  }

}

int main(){

  int arr[]={12,33,345435,6,7,9,3,543,67,232,56,7,43,6546,767,};
  BubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
  print(arr,sizeof(arr)/sizeof(arr[0]));
  return 0;

}
