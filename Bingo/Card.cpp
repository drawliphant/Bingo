//
// Created by drawl_000 on 2/22/2017.
//
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Card.h"
Card::Card(){
    D=0;
}
Card::Card(int p, int Di, int M){


    page=p;

    D=Di;
    int* numbers=new int[M];
    for(int i=0;i<M;i++){//generate list of all possible numbers
        numbers[i]=i+1;
    }
    int swap;
    int pos;
    for(int i=M-1;i>0;i--){
        pos=rand()%i;//pick a random position to swap with
        swap=numbers[i];//swap numbers at i and pos
        numbers[i]=numbers[pos];
        numbers[pos]=swap;
    }//shuffle the array with fisher-yates shuffle
    num=new int*[D];
    for(int i=0;i<D;i++){//now fill the card with order numbers
        num[i]=new int[D];
        for(int j=0;j<D;j++){
            num[i][j]=numbers[i*D+j];

        }
    }
    delete [] numbers;
}
void Card::print(std::ostream& out){
    out<<"Card #"<<page<<std::endl;
    for(int i=0;i<D;i++){
        out<<"+";
        for(int j=0;j<D;j++)
            out<<std::setw(5)<<std::setfill('-')<<"+";
        out<<std::endl;
        for(int j=0;j<D;j++){
            out<<'|'<<std::right<<std::setw(4)<<std::setfill(' ')<<num[i][j];

        }
        out<<'|'<<std::endl;
    }
    out<<"+";
    for(int j=0;j<D;j++)
        out<<std::setw(5)<<std::setfill('-')<<"+";
    out<<std::endl;
}
int Card::getPage(){
    return page;
}
Card::~Card(){
    delete [] num;
}