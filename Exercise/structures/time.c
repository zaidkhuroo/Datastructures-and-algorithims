// Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
#include <stdio.h>
struct Book
{
    char title[30];
    char author[30];
    int price;
};
int main()
{
    struct Book b1, b2, b3;

    printf("Enter details of book 1:\n");
    printf("Enter title of book 1:\n");
    scanf("%s", b1.title);
    printf("Enter author of book 1:\n");
    scanf("%s", b1.author);
    printf("Enter price of book 1:\n");
    scanf("%d", &b1.price);

    printf("Enter details of book 2:\n");
    printf("Enter title of book 2:\n");
    scanf("%s", b2.title);
    printf("Enter author of book 2:\n");
    scanf("%s", b2.author);
    printf("Enter price of book 2:\n");
    scanf("%d", &b2.price);

    printf("Enter details of book 3:\n");
    printf("Enter title of book 3:\n");
    scanf("%s", b3.title);
    printf("Enter author of book 3:\n");
    scanf("%s", b3.author);
    printf("Enter price of book 3:\n");
    scanf("%d", &b3.price);

    // Find the most expensive book
    if (b1.price > b2.price && b1.price > b3.price)
    {
        printf("\nHighest Priced Book 1:\n");
        printf("Title: %s\n", b1.title);
        printf("Author: %s\n", b1.author);
        printf("Price: %d\n", b1.price);
    }
    else if (b2.price > b1.price && b2.price > b3.price)
    {
        printf("\nHighest Priced Book 2:\n");
        printf("Title: %s\n", b2.title);
        printf("Author: %s\n", b2.author);
        printf("Price: %d\n", b2.price);
    }
    else if (b3.price > b1.price && b3.price > b2.price)
    {
        printf("\nHighest Priced Book 3:\n");
        printf("Title: %s\n", b3.title);
        printf("Author: %s\n", b3.author);
        printf("Price: %d\n", b3.price);
    }

    // lowest price book
    if (b1.price < b2.price && b1.price < b3.price)
    {
        printf("\nLowest Priced Book 1:\n");
        printf("Title: %s\n", b1.title);
        printf("Author: %s\n", b1.author);
        printf("Price: %d\n", b1.price);
    }
    else if (b2.price < b1.price && b2.price < b3.price)
    {
        printf("\nLowest Priced Book 2:\n");
        printf("Title: %s\n", b2.title);
        printf("Author: %s\n", b2.author);
        printf("Price: %d\n", b2.price);
    }
    else if (b3.price < b1.price && b3.price < b2.price)
    {
        printf("\nLowest Priced Book 3:\n");
        printf("Title: %s\n", b3.title);
        printf("Author: %s\n", b3.author);
        printf("Price: %d\n", b3.price);
    }
    return 0;
}