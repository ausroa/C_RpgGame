/**
* Created by Nasser Al-Zughaibi on 7/13/18.
*/

#ifndef C_RPGGAME_INVENTORY_H
#define C_RPGGAME_INVENTORY_H

#include <vector>
#include <iostream>
#include "Item.h"

using namespace std;
class inventory {

private:
    vector<Item> items;
    double totalWeight;

public:
    const vector<Item> &getItems() const;

    void setItems(const vector<Item> &items);

    double getTotalWeight() const;

    void setTotalWeight(double weight);

    inventory();

    inventory(const vector<Item> &items, double weight);

    double calculateTotalWeight(vector<Item> items)const;

    /**
     * Method for printing out inventory
     */

    string printInventoryContents();
};


#endif //C_RPGGAME_INVENTORY_H
