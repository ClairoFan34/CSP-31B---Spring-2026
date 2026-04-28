#include <algorithm>
#include <vector>

using namespace std;

class cardGuessing {
    public:
        void createDeck();
        void guessFaceOnly(vector<string> d);
        void guessSuitOnly(vector<string> d);
        void guessFaceAndSuit(vector<string> d);
        void menu();
    private:
        vector<string> deck;
};

void cardGuessing::createDeck() {
    deck.clear();
    for (int i; i < 4;i++) {
        
    }
}