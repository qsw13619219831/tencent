#include<stdio.h>
#include<assert.h>
const char* strstrr(const char* dest,const char* src){
assert(dest!=NULL);
assert(src!=NULL);
  while(*dest!='\0'){
    if(*dest==*src){
    const char*a=dest;
    const char*b=src;
   int i=0;
   for(;*(b+i)!='\0';i++){
     if(*(a+i)!=*(b+i)){
       break;
     }
   }
   if(*(b+i)=='\0') {
     return dest;
   }

    }
  
    dest++;
    }
  return NULL;
}
int main(){
  char str[]="hehe";
  char dest[]="hahhheaa";  
printf("%s",strstrr(dest,str));
  return 0;
}
