//
// Created by drawl_000 on 3/3/2017.
//

#include <iostream>
#include "DeckTester.h"

void DeckTester::TestDeck(){
    std::cout<<"building deck (5,5,75)"<<std::endl;
    Deck deck(5,5,75);
    std::cout<<"printing card 3"<<std::endl;
    deck.print(std::cout,3);
    std::cout<<"printing all 5 cards"<<std::endl;
    deck.print(std::cout);
    std::cout<<"destroying deck"<<std::endl;

}