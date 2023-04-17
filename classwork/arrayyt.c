#include<stdio.h>

// int main(){
    // int marks[] = {97,98,99};
    
    // int marks[3];

    // printf("enter phy: ");
    // scanf("%d",&marks[0]);

    // printf("enter che: ");
    // scanf("%d",&marks[1]);

    // printf("enter mth: ");
    // scanf("%d",&marks[2]);

    // printf("phy = %d, chem = %d, math = %d",marks[0],marks[1],marks[2]);

    //wap to enter price of 3 items and print their final cost with gst.
    // float price[3];

    // printf("enter price of products: ");
    // scanf("%f",&price[0]);
    // scanf("%f",&price[1]);
    // scanf("%f",&price[2]);

    // printf("Final price 1: %f\n",price[0]+(0.18+price[0]));
    // printf("Final price 2: %f\n",price[1]+(0.18+price[1]));
    // printf("Final price 3: %f\n",price[2]+(0.18+price[2]));
    // return 0;
    

//array in pointer

    // int age = 22;
    // int _age = 23;
    // int *ptr = &age;
    // int *_ptr = &_age;

    // printf("Difference = %u\n",ptr - _ptr);
    // _ptr = &age;
    // printf("Comparision = %u\n", ptr == _ptr);
    // return 0;   
    //it will return datatype as a difference 


    // int aadhar[5];

    // int *ptr = &aadhar[0];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d index : ",i);
    //     scanf("%d",&aadhar[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d index = %d\n", i, aadhar[i]);
    // }
    

    
// }

//array as function argument

void printnumber(int arr[], int n);

int main(){
    int arr = {1, 2, 3, 4, 5, 6};
    printnumber(arr, 6);
    return 0;
}

void printnumber(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    
}