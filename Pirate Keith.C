#include <stdio.h>
#include <string.h>

int main(){

    char* msg="CGULKVIPFRGDOOCSJTRRVMORCQDZG";

    char plain[strlen(msg)];

    int i,j,tmp,shift;
    
    printf("%s\n", msg);

    for(i = 0;i< 26; i++){

    shift=26-i;
    for(j=0;j< strlen(msg); j++){

            tmp=msg[j]-shift;

            if(tmp <0x41) tmp+=26;
            if(tmp>0x5A) tmp-=26;
            
            shift--;

            plain[j]=tmp;
    }
    printf("%s\n", plain);

    }
    return 0;
}
