#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "CardsType.h"
#include "CurrenrPattern.h"

class Deck {
    private:
      vector<const Card*> cards;//cards in Deck
      int number_of_cards;//Number of cards in deck
    public:
      Deck();//default constructor, for 54 cards case
      Deck(vector<const Card*> card);//Conersion constructor, i means the number of cards in this deck
      ~Deck();
      Card* operator[](int i);
      //void shuffle();//shuffle cards in deck//we will do shuffle in board
      void rearrange();//Sort cards in deck according to their type and value
      void delete_card(const CardsGroup& card);
      int get_num_cards() const;
      vector<Card*> get_cards() const;
};
