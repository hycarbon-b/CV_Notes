#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    puts("Hello world.");
    
    // bash interation
    fp = popen("ls -l", "r");
    if(fp == NULL){
        printf("popen error\n");
    }
    char buf[1024];
    // show the result 
    while(fgets(buf, 1024, fp) != NULL){
        printf("%s", buf);
    }
    return 0;
}