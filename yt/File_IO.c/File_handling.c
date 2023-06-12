#include<stdio.h>
//create file

//open and close file

//read and write file

int main(){
    FILE *fptr;//declare like int and char
    // fptr = fopen("text1.txt","r");//r(read),w(write),a(append),wb,rb

    char ch[100];
    fscanf(fptr,"%s",&ch);
    // puts(ch);
    //fprintf
    //fgetc
    //fputc
    //EOF
    
    fclose(fptr);
}