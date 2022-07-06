#include <stdio.h>
#include <string.h>

void vuln(char *str){
    char str2[] = "beef";
    char overflowme[16];
    printf("inout string\n");
    scanf("%s", overflowme);

    if(strcmp(str, str2) == 0){
        printf("hacked!\n");
    } else {
        printf("failed!\n");
    }
}

int main(){
    char string[] = "fish";
    vuln(string);
}