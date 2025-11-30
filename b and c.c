#include<stdio.h>
int main(){
    int i;
    for(i=0; i<6; i++){
        if(i==3){
            continue;  // skip when i=2
        }
        if(i==4){
            break;     // stop loop when i=4
        }
        printf("%d\n", i);
    }
    return 0;
}

