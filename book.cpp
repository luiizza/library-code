//Methods from book.h

#include "book.h"
#include <iostream>

//This method sets all the basic information for a book

void Book::setBookDetails(std::string t, std::string a, std::string i, std::string d) {
    title = t;
    author = a;
    ISBN = i;
    dateAdd = d;
    available = true;
}

//This method handles borrowing logic

void Book::borrowBook() {
    if (available) {
        available = false;
        std::cout << "Book borrowed successfully!\n";
    }
    else {
        std::cout << "Sorry, book is currently unavailable.\n";
    }
}

//This method returns the book’s title

std::string Book::getTitle() {
    return title;
}

//This method checks if the book is available

bool Book::isAvailable() const {
    return available;
}