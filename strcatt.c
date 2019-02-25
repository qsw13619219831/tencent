#include<stdio.h>
#include<assert.h>
char*strcatt(char*dest,const char* src){
 assert(dest!=NULL);
 assert(src!=NULL);
   int i=0;
  for(;dest[i]!='\0';i++){
  }
  dest[i]=' ';
  int j=0;
  for(i=i+1;src[j]!='\0';j++,i++){
    dest[i]=src[j];
  }
  dest[i]='\0';

return dest;
}

int main(){
char src[]="hehehe";
strcatt(src,"haha");
printf("%s",src);

  return 0;
}
