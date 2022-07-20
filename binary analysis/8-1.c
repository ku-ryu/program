#include <stdio.h>

void pwn(){
    printf("hacked!");
}

void vuln(){
    char overflowme[48];
    scanf("%[^\n]", overflowme);
}

int main(){
    vuln();
    printf("failed!");
    return 0;
}