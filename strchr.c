#include<stdio.h>
#include<assert.h>
const char*strchr(const char*dest,int x){
assert(dest!=NULL);
for(;*dest!='\0';dest++){
  if(*dest==x){
    return dest;
  }

}

return NULL;
}
int main(){
char str[]="hahahfahaha";
printf("%s",strchr(str,'t'));  

  return 0;
}
