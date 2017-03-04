//
// Created by Stephen Clyde on 2/16/17.
//
#include <iostream>
#include "Deck.h"


Deck::Deck(int cardSize, int cardCount, int numberMax)
{
    stack=new Card[cardCount];
    if(numberMax<cardSize*cardSize*2||numberMax>cardSize*cardSize*4||cardCount>10000){
        std::cout<<"failed to initialize Deck. cardSize and numberMax error.";
        return;
    }
    count=cardCount;
    for(int i=0;i<cardCount;i++){
        std::cout<<"making card"<<i<<std::endl;

        stack[i]=*new Card(i,cardSize,numberMax);
    }


}

Deck::~Deck()
{
    delete [] stack;
    // TODO: Implement
}

void Deck::print(std::ostream& out) const
{
    for(int i=0;i<count;i++){
        stack[i].print(out);
    }


}

void Deck::print(std::ostream& out, int cardIndex) const
{
    for(int i=0; i<count;i++){
        if(stack[i].getPage()==cardIndex){
            stack[i].print(out);
            return;
        }
    }
}



