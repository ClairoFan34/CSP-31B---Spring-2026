#include "bookType.h"
#include <iostream>
using namespace std;

void bookType::setTitle(string BookName){
    title = BookName;
};
string bookType::getTitle(){
    return title;
};

void bookType::setStock(int amount) {
    stock = amount;
};
int bookType::getStock() {
    return stock;
};

void bookType::addAuthor(string name) {
    if (numAuthors < 4) {
        authors[numAuthors] = name;
        numAuthors++;
    }
    else
        cout << "Maximum number of authors has been reach for this book" << endl;
};
void bookType::getAuthor() {
    cout << "Authors: ";
    for (int i = 0; i < numAuthors; i++) {
        cout << ", " <<authors [numAuthors];
    }
    cout << endl;
};
void bookType::setPublisher(string pub) {
    
};
string bookType::getPublisher();
void bookType::setisbn(int bookNum);
int bookType::getisbn();
void bookType::setPrice(double cost);
double bookType::getPrice();
void bookType::setPublicationYear(int year);
int bookType::getPublicationYear();