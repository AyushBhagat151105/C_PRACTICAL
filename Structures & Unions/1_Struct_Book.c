#include <stdio.h>

// Define a structure to represent a book
struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};

int main() {
    // Declare an array of structures to store library data
    struct Book library[100];
    int numBooks;

    // Prompt user to enter the number of books
    printf("Enter the number of books: ");
    scanf("%d", &numBooks);

    // Read library data from the user
    for (int i = 0; i < numBooks; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", library[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", library[i].author);
        printf("Pages: ");
        scanf("%d", &library[i].pages);
        printf("Price: ");
        scanf("%f", &library[i].price);
    }

    // Display library data
    printf("\nLibrary Data:\n");
    for (int i = 0; i < numBooks; i++) {
        printf("Book %d\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Pages: %d\n", library[i].pages);
        printf("Price: %.2f\n", library[i].price);
        printf("\n");
    }

    return 0;
}
