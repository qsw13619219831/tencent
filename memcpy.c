#include<stdio.h>
#include<string.h>

void memcpyy(void* aa,const void* bb,int size){
char* a=(char*)aa;
const char*b=(char*)bb;
for(int i=0;i<=size;i++){
*(a+i)=*(b+i);

}

}
int main(){
   const char src[50] = "http://www.runoob.com";
   char dest[50];
   memcpyy(dest, src, strlen(src)+1);
   printf("%s",dest);
  return 0;
}
