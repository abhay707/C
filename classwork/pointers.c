// #include<stdio.h>

// int main() {
    // int age = 22;
    // int *ptr = &age;

    //address
    // printf("%p\n",&age);
    // printf("%u\n",&age);

    // //value of ptr
    // printf("%u\n",ptr);

    // //address of ptr
    // printf("%u\n",&ptr);

    // //value
    // printf("%d\n",age);
    // printf("%d\n",*ptr);
    // printf("%d\n",*(&age));

    // int *ptr,x;

    // ptr = &x;
    // *ptr = 0;

    // printf("x = %d\n",x);//0
    // printf("*ptr = %d\n",*ptr);//0

    // *ptr += 5;
    // printf("x = %d\n",x);//5
    // printf("*ptr = %d\n",*ptr);//5

    // (*ptr)++;
    // printf("x = %d\n",x);//6
    // printf("*ptr = %d\n",*ptr);//6

    //pointer to pointer
    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;

    // printf("%f",**pptr);

    // return 0;
// }

// void square(int n);
// void _square(int *n);

// int main(){
//     int number = 5;
//     square(number);
//     printf("number = %d\n",number);

//     _square(&number);
//     printf("number = %d\n",number);

// }

// //call by value
// void square(int n){
//     int sqaure_n = n*n;
//     printf("%d\n",sqaure_n);
// }

// //call by reference
// void _square(int *n){
//     *n = (*n) * (*n);
//     printf("%d\n",*n);
// }

//swap 2 numbers a,b
// void swap(int a,int b);
// void _swap(int *a,int *b);

// int main(){
//     int x = 10, y = 20;
//     swap(x,y);
//     printf("x = %d\ny = %d\n",x,y);

//     _swap(&x,&y);
//     printf("a = %d\nb = %d\n",x,y);
// }

// //call by value
// void swap(int a,int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("a = %d\nb = %d\n",a,b);
// }

// //call by reference
// void _swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("a = %d\nb = %d\n",*a,*b);
// }

//wap to calculate the sum, product and average of 2 numbers, Print that average in the main function,
// void calc(int a, int b, int *sum, int *product, int *average);

// int main(){
//     int a = 3, b = 5;
//     int *sum, *product, *average;
//     calc(a,b,&sum,&product,&average);
//     printf("Sum = %d\nProduct = %d\nAverage = %d\n",sum,product,average);
// }

// void calc(int a, int b, int *sum, int *product, int *average){
    
//     *sum = a+b;
//     *product = a*b;
//     *average = (a+b)/2;

// }

//wap to find the maximum number between two numbers using a pointer.
// int main(){
//     int a = 10 , b = 20;
//     int *ptr1 = &a;
//     int *ptr2 = &b;
//     while (*ptr1 <= *ptr2)
//     {
//         printf("%d\n",*ptr1);
//         (*ptr1)++;
//     }
//     return 0;
// }

//wap to print the element of an arrayin reverse order



//wap to print all the letters in english alphabet using a pointer.

// int main() {
//     char *alphabet = "abcdefghijklmnopqrstuvwxyz";
//     char *p = alphabet;
    
//     while (*p != '\0') {
//         printf("%c ", *p);
//         p++;
//     }
    
//     return 0;
// }



