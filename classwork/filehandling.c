//read and write character into a file and prints them

#include<stdio.h>
#include<stdlib.h>

// int main(){
//     char ch;

//     FILE *firstfile;
//     firstfile = fopen("file1.txt","a");

//     printf("Enter the line of text, press ctrl + z to stop: ");
//     while((ch = getchar())!=EOF)
//     {
//         putc(ch,firstfile);
//     }
    
//     fclose(firstfile);
//     return 0;

// }

/* EOF stands for end of file it is an integer value send to the program by os its value is predefined to be -1 in stdio.h, 
 no character with same value is saved on a disk while ceating a file os detect that the last character of the file has been sent, 
 it transmits EOF signal. */

//read a character from a file and print it
// int main(){

//     FILE *rdfile;
//     char ch;

//     rdfile = fopen("file1.txt","r");
    
//     printf("The line of text is:\n");
//     ch = getc(rdfile);
//     printf("%c",ch);
//     // while ((ch = getc(rdfile))!= EOF)
//     // {
//     //     printf("%c",ch);
//     // }
//     fclose(rdfile);
//     return 0;
// }

// int main(){
//     FILE *userf;
//     char name[20], arr[50];

//     printf("Enter the file name: ");
//     scanf("%s",name);

//     userf = fopen(name,"w");
//     if (userf == NULL)
//     {
//         printf("file can't be open");
//     }
//     else
//     {
//         printf("The string is ");
//         gets(arr);
//         fputs(arr,userf);
//     }
//     fclose(userf);
// }

//normal prinf

// int main(){
//     FILE *fb;
//     char name[80];
//     int roll;
//     int x;

//     fb = fopen("student1.txt","r");
//     if (fb == NULL){
//         printf("File is absent");
//         exit(1);
//     }
//     x = fscanf(fb,"%s %d",name,&roll);
//     printf("\n NAME: %s\t ROLL NUMBER:%d",name,roll);
//     fclose(fb);
//     return 0;
// }

//fprintf use

// int main(){
//     int i;
//     char name[20];
//     float salary;

//     FILE *fp;
//     fp = fopen("file1.txt","w");

//     for ( i = 0; i < 3; i++)
//     {
//         puts("\n Enter your name: ");
//         gets(name);
//         fflush(stdin);
//         puts("\n Enter your salary: ");
//         scanf("%f",&salary);
//         fprintf(fp,"%s \t %.2f\n",name,salary);
//         fflush(stdin);        
//     }
//     fclose(fp);
// }

// use of fread

// int main(){
//     FILE *fp;
//     char str[9];
//     fp = fopen("student1.txt","r");
//     if (fp == NULL){
//         printf("\n The file could not be open");
//     }
//     fread(str,1,8,fp);
//     // str[8]="\0";
//     printf("\n First 9 characters of the file");
//     fclose(fp);
//     return 0;
// }

//wap to demonstrate the consept of fseek ftell and rewind
// int main(){

//     FILE *fp;
//     char str[12];

//     fp = fopen("file1.txt","r");
//     fseek(fp,-4,SEEK_END);//seek_end will take the cursor to the end and negative value represent that we are moving backward
//     fscanf(fp,"%s",str);
//     printf("%s\n",str);
//     printf("%ld\n",ftell(fp));//use to tell the cursor position
//     rewind(fp);
//     fseek(fp,2,SEEK_SET);
//     fgets(str,12,fp);
//     printf("%s",str);
//     fclose(fp);
//     return 0;
// }