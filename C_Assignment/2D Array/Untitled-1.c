#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fptr1=NULL, *fptr2=NULL;
    char ch;
    fptr1=fopen("f1.txt", "r");
    if(fptr1==NULL)
    {
        printf("no file");
        exit(1);
    }
    fptr2=fopen("f2.txt","w");
    if(fptr2==NULL){
        printf("no file");
        exit(1);
    
    }
    while((ch=fgetc(fptr1))!=EOF)
    {
        fputc(ch,fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
    printf("Successfully Copied");
}