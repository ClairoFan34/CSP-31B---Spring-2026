#include "bookType.h"
#include <iostream>
using namespace std;


int main() {
    bookType book1, book2("The GOAT", 2, "Angel", "GOAT Productions", 12345, 14.99, 2006);

    book1.setTitle("The Bluest Eye");
    book1.setStock(10);
    book1.setPublisher("Vintage Books");
    book1.setisbn(9780307);
    book1.setPrice(15.99);
    book1.setPublicationYear(1970);

    


}