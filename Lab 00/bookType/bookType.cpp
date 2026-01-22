#include "bookType.h"
#include <iostream>
using namespace std;


int main() {
    bookType book1, book2("Angel's Book", 2, "Angel", "Angel Productions", 12345, 14.99, 2006);

    book1.setTitle("The Bluest Eye");
    book1.setStock(10);
    book1.addAuthor("Toni Morrison");
    book1.setPublisher("Vintage Books");
    book1.setisbn(123456789);
    book1.setPrice(14.99);
    book1.setPublicationYear(1970);

    cout << "Book 1 Information:" << endl;
    cout << "Title: " << book1.getTitle() << endl;
    cout << "Stock: " << book1.getStock() << endl;
    book1.getAuthor();
    cout << "Publisher: " << book1.getPublisher() << endl;
    cout << "ISBN: " << book1.getisbn() << endl;
    cout << "Price: $" << book1.getPrice() << endl;
    cout << "Publication Year: " << book1.getPublicationYear() << endl;

    book2.addAuthor("Eric Arthur Blair");

    cout << "Book 2 Information:" << endl;
    cout << "Title: " << book2.getTitle() << endl;
    cout << "Stock: " << book2.getStock() << endl;
    book2.getAuthor();
    cout << "Publisher: " << book2.getPublisher() << endl;
    cout << "ISBN: " << book2.getisbn() << endl;
    cout << "Price: $" << book2.getPrice() << endl;
    cout << "Publication Year: " << book2.getPublicationYear() << endl;

    return 0;
}