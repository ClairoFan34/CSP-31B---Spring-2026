#include "bookType.h"
#include "bookTypeImp.cpp"
using namespace std;


int main() {
    bookType Book1, Book2("The GOAT", 2, "Angel", "GOAT Productions", 12345, 14.99, 2006);

    Book2.getTitle();
}