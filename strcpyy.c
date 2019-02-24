#include<stdio.h>
#include<assert.h>
char* strcppy( char* dest,char* src){
  assert(dest!=NULL);
  assert(src!=NULL);
 int i=0;
 for(;src[i]!='\0';i++ ){
dest[i]=src[i];
 }
dest[i]='\0';
return dest;
}
int main(){
char a[]="hehe";
strcppy(a,"hahahaha");
printf("%s",a);
  return 0;
}
