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

//New change
void HardcopyBook::setShelfNumber(std::string shelf) {
    shelfNumber = shelf;
}

std::string HardcopyBook::getShelfNumber() const {
    return shelfNumber;
}

void EBook::setLicenseEndDate(std::string date) {
    licenseEndDate = date;
}

std::string EBook::getLicenseEndDate() const {
    return licenseEndDate;
}

// Selection Sort by title
void selectionSort(Book arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j].getTitle() < arr[minIndex].getTitle()) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}
