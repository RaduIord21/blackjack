#include <iostream>
#include <random>
#include <string>

using namespace std;

class Deck{
    private:
        string numbers[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
        string colours[4] = {"Of Hearts", "Of Spades", "Of Diamonds", "Of Clubs"};
        string picked_number;
        string picked_color;
        string picked_card;
    public:
        void pick_a_card();
        void show_card();

};

void Deck::pick_a_card() {
    std::random_device rd;
    unsigned int random_number = rd() % 13;
    unsigned int random_colour = rd() % 4;
    picked_number = numbers[random_number] + " ";
    picked_color = colours[random_colour];
    picked_card = picked_number + picked_color;
}

void Deck::show_card() {
    cout<<picked_card;
}

int main()
{
    Deck d;
    d.pick_a_card();
    d.show_card();
}












