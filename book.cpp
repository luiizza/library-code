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

// Quick Sort by title
int partition(Book arr[], int low, int high) {
    std::string pivot = arr[high].getTitle();
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j].getTitle() < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(Book arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

