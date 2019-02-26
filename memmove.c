#include<stdio.h>
void memmovee(void* aa,const void* bb,int size){
char* a=(char*)aa;
const char* b=(char*)bb;
if((b+size)>=(a+size)){
   for(int i=size;i>=0;i--){
    *a=*b;
  }
}
else{
     for(int i=0;i<=size;i++){
    *a=*b;
     }     


    }
}
int main(){
   char dest[] = "oldstring";
     const char src[]  = "newstring";

        printf("Before memmove dest = %s, src = %s\n", dest, src);
           memmovee(dest, src, 9);
              printf("After memmove dest = %s, src = %s\n", dest, src);
              return 0;
}
