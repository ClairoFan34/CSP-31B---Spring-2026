#include <string>
using namespace std;

class bookType {
    public:
        bookType();
        bookType(string BookName, int amount, string name, string pub, int bookNum, double cost, int year);

        void setTitle(string BookName);
        string getTitle();
        void setStock(int amount);
        int getStock();
        void addAuthor(string name);
        void getAuthor();
        void setPublisher(string pub);
        string getPublisher();
        void setisbn(int bookNum);
        int getisbn();
        void setPrice(double cost);
        double getPrice();
        void setPublicationYear(int year);
        int getPublicationYear();
    private:
        string title;
        string authors[4];
        int numAuthors;
        string publisher;
        long isbn;
        double price;
        int publicationYear;
        int stock;
};