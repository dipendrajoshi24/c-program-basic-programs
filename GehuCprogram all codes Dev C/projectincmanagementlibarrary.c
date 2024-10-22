#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structures for book and member
typedef struct {
    int id;
    char title[100];
    char author[100];
    int copies;
} Book;

typedef struct {
    int id;
    char name[100];
    int issuedBooks;
} Member;

// Function prototypes
void addBook();
void viewBooks();
void addMember();
void viewMembers();
void issueBook();
void returnBook();
void saveBooks();
void loadBooks();

// Global variables for book and member data
Book books[100];
int bookCount = 0;
Member members[100];
int memberCount = 0;

int main() {
    int choice;
    loadBooks();  // Load data from files on startup
    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Add Member\n");
        printf("4. View Members\n");
        printf("5. Issue Book\n");
        printf("6. Return Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: addMember(); break;
            case 4: viewMembers(); break;
            case 5: issueBook(); break;
            case 6: returnBook(); break;
            case 7: saveBooks(); exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

void addBook() {
    printf("Enter book ID, title, author, and number of copies: ");
    scanf("%d", &books[bookCount].id);
    getchar();  // Clear newline character
    printf("Enter book title: ");
    fgets(books[bookCount].title, sizeof(books[bookCount].title), stdin);
    printf("Enter book author: ");
    fgets(books[bookCount].author, sizeof(books[bookCount].author), stdin);
    printf("Enter number of copies: ");
    scanf("%d", &books[bookCount].copies);
    bookCount++;
    printf("Book added successfully!\n");
}

void viewBooks() {
    printf("\nAvailable Books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d, Title: %s, Author: %s, Copies: %d\n",
               books[i].id, books[i].title, books[i].author, books[i].copies);
    }
}

void addMember() {
    printf("Enter member ID and name: ");
    scanf("%d", &members[memberCount].id);
    getchar();  // Clear newline character
    printf("Enter member name: ");
    fgets(members[memberCount].name, sizeof(members[memberCount].name), stdin);
    members[memberCount].issuedBooks = 0;
    memberCount++;
    printf("Member added successfully!\n");
}

void viewMembers() {
    printf("\nRegistered Members:\n");
    for (int i = 0; i < memberCount; i++) {
        printf("ID: %d, Name: %s, Issued Books: %d\n",
               members[i].id, members[i].name, members[i].issuedBooks);
    }
}

// Placeholder functions for issuing and returning books
void issueBook() {
    printf("Issue book functionality not yet implemented.\n");
}

void returnBook() {
    printf("Return book functionality not yet implemented.\n");
}

void saveBooks() {
    // Save data to files before exiting
    printf("Saving data...\n");
}

void loadBooks() {
    // Load data from files at startup
    printf("Loading data...\n");
}

