#include "bookType.h"
#include <iostream>
using namespace std;


//Constructors
bookType::bookType() {};
bookType::bookType(string BookName, int amount, string name, string pub, int bookNum, int cost, int year){
    title = BookName;
    stock = amount;
    authors[0] = name;
    numAuthors++;
    publisher = pub;
    isbn = bookNum;
    price = cost;
    publicationYear = year;
};

// Setter and getters
void bookType::setTitle(string BookName){
    title = BookName;
};
string bookType::getTitle(){
    return title;
};
//
void bookType::setStock(int amount) {
    stock = amount;
};
int bookType::getStock() {
    return stock;
};
//
void bookType::addAuthor(string name) {
    if (numAuthors < 4) {
        authors[numAuthors] = name;
        numAuthors++;
    }
    else
        cout << "Maximum number of authors has been reached for this book" << endl;
};
void bookType::getAuthor() {
    cout << "Authors: ";
    for (int i = 0; i < numAuthors; i++) {
        cout << authors [numAuthors] << " ";
    }
    cout << endl;
};
void bookType::setPublisher(string pub) {
    publisher = pub;
};
string bookType::getPublisher() {
    return publisher;
};

void bookType::setisbn(int bookNum) {
    isbn = bookNum;
};
int bookType::getisbn() {
    return isbn;
};
void bookType::setPrice(double cost) {
    price = cost;
};
double bookType::getPrice() {
    return price;
};
void bookType::setPublicationYear(int year) {
    publicationYear = year;
};
int bookType::getPublicationYear() {
    return publicationYear;
};