//Runs the program and interacts with the user

#include <iostream>
#include <string>
#include "book.h"

int main() {

    //An array was created and filled with real data

    Book Library[5];

    Library[0].setBookDetails("Silent Moon", "Ana Ribeiro", "111", "2025-10-01");
    Library[1].setBookDetails("Echoes", "Lucas Martins", "112", "2025-10-02");
    Library[2].setBookDetails("Paper Wings", "Julia Costa", "113", "2025-10-03");
    Library[3].setBookDetails("Firelight", "Bruno Oliveira", "114", "2025-10-04");
    Library[4].setBookDetails("Hidden Path", "Carla Mendes", "115", "2025-10-05");

    std::string inputTitle;
    std::cin.ignore(); 

    //This loop keeps asking the user for a book title and displays the appropriate message

    while (true) {
        std::cout << "Enter book's title to borrow (0 to exit): ";
        std::getline(std::cin, inputTitle);

        if (inputTitle == "0") {
            std::cout << "Exiting program...\n";
            break;
        }

        bool found = false;
        for (int i = 0;  i < 5; i++) {
            if (Library[i].getTitle() == inputTitle) {
                found = true;
                Library[i].borrowBook();
                break;
            }
        }

        if (!found) {
            std::cout << "Book not found.\n";
        }
    }

    return 0;
}