#include<stdio.h>
#include<string.h>

// struct car
// {
//     char name[20];
//     int seats;
//     float price;
//     char stru
// } c3;

// int main(){
//         printf("%d",sizeof(c3));
//     // struct car c1,c2;
//     printf("%d",sizeof(c3));
//     return 0;
    
// }

//wap to create a structure give a named as a strudent stored name, rollno, registerrationno, cgpa, grade

// struct student
// {
//     char name[30];
//     int roll_no;
//     int registration_no;
//     float cgpa;
//     char grade;
// }student1;

// int main(){

//         printf("%d",sizeof(student1.grade));

//     struct student student1,student2;
    
//     student1.name = "Abhay";
//     student1.roll_no = 63;
//     student1.registration_no = 122052;
//     student1.cgpa = 4.34;
//     student1.grade = 'A';

//     printf("Display details\n");
//     printf("Name is %s \n",student1.name);
//     printf("Roll number is %d \n",student1.roll_no);
//     printf("registration is %d \n",student1.registration_no);
//     printf("cgpa is %f \n",student1.cgpa);

//     student2.name = "anjeet";
//     student2.roll_no = 69;
//     student2.registration_no = 122052;
//     student2.cgpa = 3.34;
//     student2.grade = 'O';

//     struct student student3 = {"Puneet",20,112200,7.9,'A'};
//     printf("Display details\n");
//     printf("Name is %s \n",student3.name);
//     printf("Roll number is %d \n",student3.roll_no);
//     printf("registration is %d \n",student3.registration_no);
//     printf("cgpa is %f \n",student3.cgpa);
    

//     return 0;
// }

//wap to make a structure name teacher store teacher name, course, uid, rating,  

// struct teacher
// {
//     char *name;
//     char *course;
//     int uid;
//     float rating;
//     int salary;
// };

// int main(){
//     struct teacher teacher1 = {"Ankita","English",12220,10.0};
    
    
//     printf("details: \n");
//     printf("Name : %s\n",teacher1.name);
//     printf("course : %s\n",teacher1.course);
//     printf("uid : %d\n",teacher1.uid);
//     printf("rating : %f\n",teacher1.rating);
    
//     printf("Enter salary: ");
//     scanf("%d",&teacher1.salary);

//     printf("salary: %d\n",teacher1.salary);

// }

//store the details of five car

// struct car
// {
//     char *name;
//     float price;
//     int seat;
// };


// int main(){
//     struct car c[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter %d car detail\n",i+1);
        
//         printf("Enter car name: ");
//         scanf("%s\n",&c[i].name);
        
//         printf("Enter price: ");
//         scanf("%f\n",&c[i].price);

//         printf("Enter number of seats: ");
//         scanf("%d\n",&c[i].seat);
        
//     }
//     printf("Display details: \n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("deatils of %d car",i+1);
        
//         printf("%s\n",c[i].name);
//         printf("%f\n",c[i].price);
//         printf("%d\n",c[i].seat);
    
//     }

//     return 0;
// }

// struct car
// {
//     char *name;
//     float price;
//     int seats;
// };
// int main()
// {
//     struct car c[5];
//     int i;
//     for(i=0;i<5;i++)
//     {
//         printf("Enter detail of %d car",i+1);
//         printf("Enter Car name ");
//         scanf("%s",&c[i].name);
//         printf("Enter price ");
//         scanf("%d",&c[i].price);
//         printf("Enter no. of seats");
//         scanf("%d",&c[i].seats);
//     }
//     printf("Display detail \n");
//     for(i=0;i<5;i++)
//     {
//         printf("DEtail of %d car",i+1);
//         printf(" Name of car =%s",c[i].name);
//         printf("Price of car=%f",c[i].price);
//         printf("Seats of car=%d",c[i].seats);
//     }
//     return 0;
// }

// struct teacher
// {
//     char name[20];
//     int age;
//     float salary;
// };


// int main(){
//     struct teacher t1 = {"Aman", 26, 40000};
//     struct teacher t2 = {"Jeevan",34,500000};
    

//     if (t1.age == t2.age)
//     {
//         printf("Same age");
//     }else{
//         printf("Not equal");
//     }

//     // printf("%s, %d, %f",t2.name,t2.age,t2.salary);

//     return 0;
// }

//wap to enter a details of 5 teachers name, uid, salary, rating

// struct teacher
// {
//     char name[20];
//     int uid;
//     float salary;
//     int rating;
// };

// int main(){
//     struct teacher t[100];

//     int i,n;
//     printf("Enter no. of teacher: ");
//     scanf("%d",&n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter details of %d teacher\n",i+1);

//         printf("Enter teacher name: ");
//         scanf("%s",t[i].name);

//         printf("Enter teacher ui: ");
//         scanf("%i",&t[i].uid);

//         printf("Enter teacher salary: ");
//         scanf("%f",&t[i].salary);

//         printf("Enter teacher rating: ");
//         scanf("%i",&t[i].rating);
//     }
    
//     printf("--------------------\n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("The deatil of %d teacher\n",i+1);
//         printf("%s %d %f %d\n",t[i].name,t[i].uid,t[i].salary,t[i].rating);
//     }
    

//     return 0;
// }

//accessing member of structure 

// struct car 
// {
//     char name[30];
//     int seats;
//     float price;
// };

// int main(){

//     struct car c = {"Pagani", 2, 350000};
//     struct car *ptr;
    
//     ptr = &c;

//     printf("The details of car\n");
//     printf("%s %d %f\n",ptr->name,ptr->seats,ptr->price);
//     printf("%s %d %f",(*ptr).name,(*ptr).seats,(*ptr).price);

//     return 0;
// }

//two ways of declaring structure within a structure or nested structure

// struct Data
// {
//     int dd;
//     int mm;
//     int yy;
// };

// struct student
// {
//     char name[20];
//     int rollno;
//     int marks;
//     struct Data dob;
// };

// int main(){



//     return 0;
// }

//wap to decelare two

// struct address
// {
//     char housenumber[20];
//     char city[20];
// };

// struct employ
// {
//     char name[20];
//     float salary;
//     struct address add;
// };

// int main(){

//     struct employ e;

//     printf("Enter employ details\n");

//     printf("Enter name of employ: ");
//     scanf("%s",e.name);

//     printf("Enter salary of employ: ");
//     scanf("%f",&e.salary);

//     printf("Enter housenumber of employ: ");
//     scanf("%s",e.add.housenumber);

//     printf("Enter city of employ: ");
//     scanf("%s",e.add.city);

//     printf("%s %f %s %s",e.name,e.salary,e.add.housenumber,e.add.city);

//     return 0;
// }

struct employee
{
    int ssn;
    float salary;
    struct dob
    {
        int data;
        int month;
        int year;

    }dbl;
    
}emp = {"aniket",1000,100.50,{22,6,1990}};


int main(){
    printf("%d %f, %d %d %d",emp.ssn,emp.salary,emp.dbl.data,emp.dbl.month,emp.dbl.year);
}