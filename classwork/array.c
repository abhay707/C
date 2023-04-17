//wap to perfome addition of two matrixs

// #include<stdio.h>
// int main(){
//     int a[3][3], b [3][3], sum [3][3],i,j, sub [3][3] , tran[3][3];
    
//     printf("Enter element in matrix A: ");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     printf("Enter element in matrix B: ");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }

//     printf("Displaying Matrix A=\n");
//     for (i = 0; i <3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d \t",a[i][j]);
//         }
//         printf("\n");
//     }

//      printf("Displaying Matrix B=\n");
//     for (i = 0; i <3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d \t",b[i][j]);
//         }
//         printf("\n");
//     }

//     printf("displaying the Sum of matrix: \n");
     
//     for (i = 0; i <3; i++)
//     {
//         for (j = 0; j < 3; j++)
//     {
//         sum[i][j]=a[i][j]+b[i][j];
//         sub[i][j]=a[i][j]-b[i][j];

//         printf("%d \t",sum[i][j]);
//     }
//     printf("\n");
//     }

//     printf("displaying the subtraction of matrix: \n");

//     for (i = 0; i <3; i++)
//     {
//         for (j = 0; j < 3; j++)
//     {
//         printf("%d \t",sub[i][j]);
//     }
//     printf("\n");
//     }

//     printf("displaying the transpose of matrix A: \n");

//     for (i = 0; i <3; i++)
//     {
//         for (j = 0; j < 3; j++)
//     {
//         tran[i][j] = a[j][i];
//     }
//     }

//     for (i = 0; i <3; i++)
//     {
//         for (j = 0; j < 3; j++)
//     {
//         printf("%d \t",tran[i][j]);
//     }
//     printf("\n");
//     }
//     return 0;
// }

//wap to print sum of diagonal elements

//passing array to functions

// array can be passed into the function in two ways
// 1. pass the intire array
// 2. passing array elements one by one

//1.pass entire array:here entire array can be passes as an argument to the function.

//syntex: void modifyarray (int b[],int array size);


//2.passing array element by element

// here individual array are passed to the funtion as am arrgument
// dublicate cc copy of a orirginal 

//syntex : void modigyelement(int e);

//wap to find passing entire array

// #include<stdio.h>
// void reference(int[],int);

// int main(){
//     int arr[100],n,i;

//     printf("ENTER N: ");
//     scanf("%d",&n);
//     printf("Enter array elements: \n");
    
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     printf("In elements by reference: \n");
//     reference(arr,n);
//     return 0;    

// }

// void reference(int a[], int size){

//     int i;

//     for (i = 0; i < size; i++)
//     {
//         printf("%d \t",a[i]);
//     }
    
// }


//passing element by element

// #include<stdio.h>

// void value(int );

// int main(){
//     int arr[100],n,i;
//     printf("ENTER N: ");
//     scanf("%d",&n);
//     printf("Enter array elements: \n");
    
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     printf("Passing elements by value: \n");
    
//     for (i = 0; i < n; i++)
//     {
//         value(arr[i]);
//     }
//     return 0; 
// }

// void value(int e){
//     printf("%d\t",e);
// }

// insertion of an element into the array and deleting element

#include<stdio.h>

// int main(){
    
//     int array[100], position, i, n, value;

//     printf("Enter number of elements in array:\n");
//     scanf("%d",&n);
//     printf("Enter %d element:\n",n);
    
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d",&array[i]);
//     }
    
//     printf("Enter data that you would like to insert: \n");
//     scanf("%d",&value);

//     printf("Enter position that you would like to insert: \n");
//     scanf("%d",&position);

//     for (i = n - 1; i >= position - 1; i--)
//     {
//         array[i + 1] = array[i];  
//     }
//     array[position - 1] = value;
//     printf("After intention array is : \n" );
//     for (i = 0; i <= n; i++)
//     {
//         printf("%d\n",array[i]);

//     }
//     return 0;

//     printf("Enter position at which you like to insert data: ");
//     scanf("%d",&position);

//     for (i = position - 1; i<n-1; i++)
//     {
//         array[i] = array[i+1];
//     }

//     printf("Resultant array is:\n");
//     for ( i = 0; i < n-1; i++)
//     {
//         printf("%d\n",array[i]);
//     }
//     return 0;

// }

//searching an element or binary search

// int main(){
    
//     int array[100], i, n, key, loc = -1;

//     printf("Enter number of elements in array:\n");
//     scanf("%d",&n);
//     printf("Enter %d element:\n",n);
    
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d",&array[i]);
//     }

//     printf("Enter element to search:\n");
//     scanf("%d",&key);

//     for ( i = 0; i < n; i++)
//     {
//         if (array[i]==key)
//         {
//             loc = i;
//             break;
//         }      
//     }
//     if (loc != -1)
//     {
//         printf("Element found at %d position",loc+1);
//     }else{
//         printf("Element not found");
//     }
    
// }

//binary search

// int main(){
//     int array[100], beg, end, mid, i, n, key, loc = -1;

//     printf("Enter number of elements in array:\n");
//     scanf("%d",&n);
//     printf("Enter %d element:\n",n);

//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d",&array[i]);
//     }
    
//     printf("Enter element to search:\n");
//     scanf("%d",&key);

//     beg = 0;
//     end = n+1;

//     while (beg <= end)
//     {
//         mid = (beg + end)/2;
//         if (array[mid] == key)
//         {
//             loc = mid;
//             break;
//         }else if(array[mid]<key){
//             beg = mid + 1;
//         }

//         else if (array[mid]>key){
//             end = mid -1;
//         }
//     }if (loc != -1)
//     {
//         printf("The element is found at %d",loc + 1);
//     }else{
//         printf("Element not found");
//     }
//     return 0;

// }

//Bubble Sorting

