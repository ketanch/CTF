#include<stdio.h>
#include <unistd.h>
#include<strings.h>
#include<math.h>
int main(){
    int z;
    scanf("%d",&z);
    if(z<0||z+15>0){
        printf("You failed!");
        return 0;
    }
    char inp[10];
    char res[12]="FlagValue=0";
    read(0,inp,0x20);
    res[11]='\0';
    int i=abs(z)%10;
    res[i]=res[i] & 0xfffe;
    if(strcmp(res,"FlagValue=1")==0){
        printf("Level Passed!\n");
    }
    return 0;
}
