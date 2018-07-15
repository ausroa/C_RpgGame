/**
* Created by Nasser Al-Zughaibi on 7/13/18.
*/

#include "../headers/inventory.h"

/**
 * Gets vector of Items
 * @return Items
 */
const vector<Item> &inventory::getItems() const {
    return items;
}

/**
 * Items setter
 * @param items
 */
void inventory::setItems(const vector<Item> &items) {
    inventory::items = items;
}

/**
 * Gets inventory total weight.
 * @return totalWeight
 */
double inventory::getTotalWeight() const {
    //Logic I'm thinking:
    return calculateTotalWeight(items);
//    return totalWeight;
}

/**
 * Sets total weight.
 * @param totalWeight
 */
void inventory::setTotalWeight(double totalWeight) {
    inventory::totalWeight = totalWeight;
}

/**
 *  Calculates the total weight of all items in inventory
 * @param items - The collection of items
 * @return sumWeight - Sum of all item weights
 */
double inventory::calculateTotalWeight(vector<Item> items)const {
    //Logic I'm thinking:
    vector<Item>::iterator it;
    double sumWeight = 0;
    for (it = items.begin(); it< items.end() ; ++it) {
        sumWeight += it->getWeight();
    }

    return sumWeight;
}

// Constructors
inventory::inventory() {}

inventory::inventory(const vector<Item> &items, double weight) : items(items), totalWeight(weight) {}


