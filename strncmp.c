#include<stdio.h>
int strncmpp(const char* dest,const char* src,size_t num){
  for(int i=0;i<(int)num;i++){
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
    char str[][5] = { "R2D2" , "C3PO" , "R2A6"  };
      int n;
        puts ("Looking for R2 astromech droids...");
          for (n=0 ; n<3 ; n++)
                if (strncmpp (str[n],"R2xx",2) == 0)
                {
                        printf ("found %s\n",str[n]);
                            
                }
            return 0;

}




