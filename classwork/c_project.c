#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Variable of structure 
struct Book {
    char title[50];
    char author[50];
    char donor[50];
    char receiver[50];
};

//functon declaration
void addRecord();
void deleteRecord();
void updateRecord();
void searchBook();
void displayRecords();

//Create a structure for book details storage
struct Book books[100];
int count = 0;

int main() {
    int choice;
    while(1) {
        printf("\n\n===== Book Donation System =====\n");
        printf("1. Add record\n");
        printf("2. Delete record\n");
        printf("3. Update record\n");
        printf("4. Search book\n");
        printf("5. Display records\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        //if else for choice
        if(choice == 1){
            addRecord();
        }
        else  if(choice == 2){
            deleteRecord();
        }
        else if(choice == 3){
            updateRecord();
        } 
        else if(choice == 4){
            searchBook();
        }  
        else if(choice == 5){
            displayRecords();
        } 
        else if(choice == 6){
            printf("\nThank you for using Book Donation System!\n");
            exit(0);
        }
        else{
            printf("\nInvalid choice! Please try again.\n");
            continue;
        }
    }
    return 0;
}

//function to add a new book record
void addRecord() {
    struct Book newBook;
    printf("\nEnter the book title: ");
    scanf("%s", newBook.title);
    printf("Enter the author name: ");
    scanf("%s", newBook.author);
    printf("Enter the donor name: ");
    scanf("%s", newBook.donor);
    printf("Enter the receiver name: ");
    scanf("%s", newBook.receiver);
    books[count] = newBook;
    count++;
    printf("\nBook record added successfully!\n");
}

//function to delete a book record
void deleteRecord() {
    char title[50], author[50];
    printf("\nEnter the book title: ");
    scanf("%s", title);
    printf("Enter the author name: ");
    scanf("%s", author);
    int i, flag = 0;
    for(i = 0; i < count; i++) {
        if(strcmp(books[i].title, title) == 0 && strcmp(books[i].author, author) == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        for(int j = i; j < count - 1; j++) {
            books[j] = books[j + 1];
        }
        count--;
        printf("\nBook record deleted successfully!\n");
    } else {
        printf("\nBook record not found!\n");
    }
}

//function to update a book record
void updateRecord() {
    char title[50], author[50];
    printf("\nEnter the book title: ");
    scanf("%s", title);
    printf("Enter the author name: ");
    scanf("%s", author);
    int i, flag = 0;
    for(i = 0; i < count; i++) {
        if(strcmp(books[i].title, title) == 0 && strcmp(books[i].author, author) == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        printf("\nEnter the new donor name: ");
        scanf("%s", books[i].donor);
        printf("Enter the new receiver name: ");
        scanf("%s", books[i].receiver);
        printf("\nBook record updated successfully!\n");
    } else {
        printf("\nBook record not found!\n");
    }
}

//function to search for a book by title or author name
void searchBook() {
    char search[50];
    printf("\nEnter the book title or author name: ");
    scanf("%s", search);
    int i, flag = 0;
    for(i = 0; i < count; i++) {
        if(strcmp(books[i].title, search) == 0 || strcmp(books[i].author, search) == 0) {
            printf("\nBook found!\n");
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Donor: %s\n", books[i].donor);
            printf("Receiver: %s\n", books[i].receiver);
            flag = 1;
        }
    }
    if(flag == 0) {
        printf("\nBook not found!\n");
    }
}

//function to display all book records
void displayRecords() {
    if(count == 0) {
        printf("\nNo records found!\n");
        return;
    }
    printf("\nBook records:\n");
    for(int i = 0; i < count; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Donor: %s\n", books[i].donor);
        printf("Receiver: %s\n", books[i].receiver);
    }
}

