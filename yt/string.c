#include<stdio.h>
#include<string.h>
//types of writing a string

// int main(){
//     char name[] = {'A','B','H','A','Y','\0'};
//     char name2[] = "ABHAY";
// }

//how to print a string

// void printstring(char arr[]);

// int main(){
//     char firstname[] = "abhay";
//     char lastname[] = "chaturvedi";

//     printstring(firstname);
//     printstring(lastname);

// }

// void printstring(char arr[]){
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         printf("%c",arr[i]);
//     }
//     printf("\n");
    
// }

//take multiword string as input (gets(str))

// int main(){
//     char name[100];
//     fgets(name, 100, stdin);
//     puts(name);


//     return 0;
// }

//string using pointers

// int main(){
//     char *canchange = "Hello World";
//     puts(canchange);

//     canchange = "hello";
//     puts(canchange);

//     char cannotchange[] = "Hello mam";
//     puts(cannotchange);

//     // cannotchange = "hie";
//     puts(cannotchange);

// }

//print length of string

// int main(){
//     char name[100];
//     fgets(name, 100, stdin);
// //     int count = 0;
// //     for(int i = 0; name[i]!= '\0';i++){
// //         count++;
// //     }
// //     printf("%d",count-1); or
//     int len = strlen(name);
//     printf("%d",len);
// }

//copy value from one string to another string (strcpy)

//concatenate first string with second string without any space (strcat)

//string comparision (strcmp)

//take a string input from the user using %c
//we have to add \0 by ourselves because %c didnt put it

// int main(){
//     char str[100];
//     char ch;
//     int i = 0;

//     while (ch != '\n')
//     {
//         scanf("%c",&ch);
//         str[i] = ch;
//         i++;
//     }
//     str[i] = '\0';
//     puts(str);
// }

//salting

// int main(){
//     char password[100];
//     scanf("%s",password);

//     char salt[] = "123";
//     char newpass[200];

//     strcpy(newpass, password);
//     strcat(newpass, salt);
//     puts(newpass);
// }

//wap to slice a string 

// int main(){

//     char str[100]= "hello world";
//     char newstr[100];
//     int n= 3,m= 2;
//     j=0;
//     for (int i = n;i<=m;i++,j++){
//         newstr[j] = str[i];
//     }
//     newstr[j] = '\0';
//     puts(newstr);

// }

// int main(){
//     char ch = 'A';
//     char str[100] = "Abhay";
//     for (int i = 0; str[i] == '\0'; i++)
//     {
//         if (str[i] == ch){
//             printf("Matched");
//         }
//     }  
// }


