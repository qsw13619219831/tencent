#include<stdio.h>
#include<assert.h>
#include<string.h>
int strcmpp(const char* dest,const char* src){
  while(*dest!='\0'||*src!='\0'){
    if(*dest>*src){
      return 1;
    }
    else if(*dest<*src){
      return -1;
    }
  dest++;src++;
  }

return 0;
}
int main(){
  char str1[]= "ABCDEF00";
  char str2[]= "ABCDEF";
 printf("%d    ",strcmpp(str1,str2));
 printf("%d",strcmp(str1,str2));
return 0;
}
