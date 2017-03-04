//
// Created by drawl_000 on 2/22/2017.
//

#ifndef BINGO_CARD_H
#define BINGO_CARD_H


class Card {
private:
    int page;//the value of card in deck
    int D;
    int** num;
public:
    Card();
    Card(int p, int Di,int M);
    ~Card();
    void print(std::ostream& out);
    int getPage();

};


#endif //BINGO_CARD_H
