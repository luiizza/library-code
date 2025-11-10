//Defines the class and its methods

#pragma once
#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {

//Internal data for each book

private:
    std::string title;
    std::string author;
    std::string ISBN;
    std::string dateAdd;
    bool available;

//Functions that can be called from "library-application.cpp"
public:
    void setBookDetails(std::string t, std::string a, std::string i, std::string d);
    void borrowBook();
    std::string getTitle();
    bool isAvailable() const;
};

#endif
