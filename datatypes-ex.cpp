//
// Created by Issa_db on 19/12/2025.
//


#include <iostream>
using namespace  std;
int main () {
    int items = 60;
    float costPerItem = 9.99 ;
    double totalCost = items * costPerItem;
    char currency = '$';

    //creating print statement
    std::cout<< "Item: " << items<<currency<< std::endl;
    std::cout<<"Cost for each item: "<< costPerItem<< currency<<std::endl;
    std::cout<<"Total Cost: "<< totalCost<<currency<<std::endl;
    return 0;

}