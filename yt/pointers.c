#include <stdio.h>

// int main() {
// int age = 22;
// int *ptr = &age;

// address
//  printf("%p\n",&age);
//  printf("%u\n",&age);

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

// pointer to pointer
//  float price = 100.00;
//  float *ptr = &price;
//  float **pptr = &ptr;

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

// swap 2 numbers a,b
//  void swap(int a,int b);
//  void _swap(int *a,int *b);

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

// wap to calculate the sum, product and average of 2 numbers, Print that average in the main function,
//  void calc(int a, int b, int *sum, int *product, int *average);

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

// wap to find the maximum number between two numbers using a pointer.
//  int main(){
//      int a = 10 , b = 20;
//      int *ptr1 = &a;
//      int *ptr2 = &b;
//      while (*ptr1 <= *ptr2)
//      {
//          printf("%d\n",*ptr1);
//          (*ptr1)++;
//      }
//      return 0;
//  }

// wap to print the element of an arrayin reverse order

// wap to print all the letters in english alphabet using a pointer.

// int main() {
//     char *alphabet = "abcdefghijklmnopqrstuvwxyz";
//     char *p = alphabet;

//     while (*p != '\0') {
//         printf("%c ", *p);
//         p++;
//     }

//     return 0;
// }

// int main(){
//     int a = 7;
//     int *ptr;

//     ptr = &a;
//     printf("%u\n",ptr);
//     printf("%u \n",&a);
//     printf("%d\n",a);
//     printf("%d\n",*ptr);
//     printf("%d\n",&*ptr);
//     printf("%d\n",*&ptr);
//     return 0;
// }

// int main(){
//     int *pnum;
//     char *pchar;
//     float *pfnum;
//     double *pdnum;
//     long *plnum;
//     printf("\n Size of integer pointer = %d",sizeof(pnum));
//     printf("\n Size of charachter pointer = %d",sizeof(pchar));
//     printf("\n Size of float pointer = %d",sizeof(pfnum));
//     printf("\n Size of double pointer = %d",sizeof(pdnum));
//     printf("\n Size of long pointer = %d",sizeof(plnum));
//     return 0;
// }

// wap to find area of circle by using pointer
//  int main(){
//      double area= 0.0,radius;
//      double *pradius = &radius,*parea = &area;
//      printf("\n Enter the radius of the circle");
//      scanf("%lf",pradius);
//      *parea = 3.14*(*pradius)*(*pradius);
//      printf("\n The area of the circle with radius %.2lf = %.2lf",*pradius,*parea);
//      return 0;
//  }

// write a program to find the factorial of two numbers using pointer
//  int main(){
//      int n,fact = 1;
//      int *pfact,*pn;
//      pfact = &fact;
//      pn = &n;
//      printf("Enter the number: ");
//      scanf("%d",pn);
//      for (int i = 1; i <= *pn; i++)
//      {
//          *pfact = *pfact*i;
//      }
//      printf("\n%d",*pfact);

// }

// types of pointers
// null pointer
// wap to demonstrate null pointer

// int main(){

//     int *ptr = NULL;
//     int a = 10;

//     // printf("%u",ptr);

//     ptr = &a;
//     printf("\n%d",*ptr);
//     return 0;
// }

// wild pointer
//  int main(){
//      int *ptr;
//      int a = 10;

//     printf("%u",ptr);
//     printf("\n%d",*ptr);

//     ptr = &a;
//     printf("\n%d",*ptr);
//     return 0;
// }

// void pointer
//  int main(){
//      int x = 10;
//      char ch = 'A';
//      void *gp;

//     gp = &x;
//     printf("\n Generic pointer points to the integer value= %d",*(int*)gp);
//     gp = &ch;
//     printf("\n Generic pointer points to the character= %c",*(char*)gp);

//     return 0;
// }

// constant pointer
//  int main(){
//      int var1 = 60, var2 = 70;
//      int *const ptr = &var1;
//      printf("\n%d",*ptr);
//      // ptr = &var2;
//      // printf("%d\n",*ptr);
//  }

// dangling pointer
// when local variable goes out of score

// int main(){
//     int *ptr;
//     {
//         int val = 23;
//         ptr = &val;
//         printf("\n%d",*ptr);
//         printf("\n%u",ptr);
//     }
//     printf("\n%u",ptr);
//     ptr = NULL;
//     printf("\n%u",ptr);
//     return 0;
// }

// pointer to array(1D)
// int main()
// {
//     int a[] = {10, 20, 30, 40, 50};
//     int *ptr;
//     ptr = a;
//     printf("%d\n", *ptr); // 10
//     ptr = ptr + 1;
//     printf("%d\n", *ptr); // 20
//     ptr = &a[4];
//     printf("%d\n", *ptr); // 50
//     ptr = ptr - 2;
//     printf("%d\n", *ptr); // 30
// }

// int main()
// {
// 	int arr[]={1,2,3,4,5,6,7,8,9};
// 	int *p1,*p2;
// 	p1=arr;
// 	p1++;// p1 will point towards next memory location
// 	printf("\n%d",*p1);//2 will be displayed
// 	p1--;//p1 will point towards previous memory location
// 	printf("\n%d",*p1);// 1 will be displayed
// 	p1=p1+2;// Adding a constant to pointer(p1 will point towards 3rd element)
// 	printf("\n%d",*p1);// 3 will be displayed
// 	p1=p1-2;//Subtracting a constant from a pointer(P1 will point towards first element)
// 	printf("\n%d",*p1);// 1 will be displayed
// 	p2=&arr[4];
// 	printf("\n%d",p2-p1);//Subtracting two pointers(Returns 4(no. of elements b/w+1)(Pointers pointing to the same array)
// 	//Comparing two pointers
// 	while(p1<=p2)
// 	{
// 		printf("\n%d",*p1);//Comparison of two pointers (Pointers pointing to the same array)
// 		p1++;
// 	}
// 	//Following are the invalid arithmetic operations(Not allowed on pointers)
// 	//printf("\n%d",p1+p2);//Invalid arithmetic
//     //printf("\n%d",p1/p2);//Invalid arithmetic
//     //printf("\n%d",p1*p2);//Invalid arithmetic
// 	//printf("\n%d",p1%p2);//Invalid arithmetic
//     //printf("\n%d",p1*2);//Invalid arithmetic
//     //printf("\n%d",p1/2);//Invalid arithmetic
//     //printf("\n%d",p1%2);//Invalid arithmetic
// 	return 0;
// 	}

//pointer to an array with pointer arthimetics
// int main()
// {
// 	int arr[]={1,2,3,4,5};
// 	int i;
// 	int *p;
// 	p=arr;
// 	printf("\n First value is:%d",*p);
// 	p=p+1;
// 	printf("\n Second value is:%d",*p);
// 	*p=45;
// 	p=p+2;
// 	*p=-2;
// 	printf("\n Modified array is:");
// 	for(i=0;i<5;i++)
// 	{
// 		printf("\n%d",arr[i]);//We can also write i[arr]
// 	}
// 	p=arr;
// 	*(p+1)=0;
// 	*(p-1)=1;
// 	printf("\n Modified array is:");
// 	for(i=0;i<5;i++)
// 	{
// 		printf("\n%d",*(p+i));//We can also write *(i+arr)
// 	}
// 	return 0;
// }

//wap to read and display an 1D array using pointer to array
// int main(){
// 	int i,n;
// 	int a[10];
// 	int *p;
// 	p = a;
// 	printf("Enter no. of elements: ");
// 	scanf("%d",&n);
// 	for ( i = 0; i < n; i++)
// 	{
// 		scanf("%d",p+i);
// 	}
// 	for ( i = 0; i < n; i++)
// 	{
// 		printf("%d\n",*(p+i));
// 	}
// 	return 0;
// }

int main(){
    int a = [1,2,3,4,5];
    
}