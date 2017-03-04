//
// Created by drawl_000 on 3/3/2017.
//
#include <iostream>
#include "CardTester.h"
#include "../Card.h"
void CardTester::testCards(){
    std::cout<<"running Card constructor (5,15,200"<<std::endl;
    Card test(5,15,700);
    test.print(std::cout);
    std::cout<<"card page is"<<test.getPage()<<std::endl;
    Card test2(4,7,80);
    test2.print(std::cout);
    std::cout<<"card2 page is"<<test2.getPage()<<std::endl;

}