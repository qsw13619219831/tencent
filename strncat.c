#include<stdio.h>
#include<assert.h>
#include<string.h>
char*strncatt(char* dest,char* src,size_t num){
assert(dest!=NULL);
assert(src!=NULL);
for(;;){
dest++;
  if(*dest=='\0')
    break;
}
for(int i=0;i<(int)num;i++){
  *(dest+i)=*(src+i);
}
return dest;
}
int main(){
char str1[20];
  char str2[20];
    strcpy (str1,"To be ");
      strcpy (str2,"or not to be");
        strncatt (str1, str2, 6);
          puts (str1);
            return 0;


return 0;
}
