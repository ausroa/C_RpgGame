/**
* Created by Nasser Al-Zughaibi on 7/13/18.
*/

#include "../headers/Item.h"
/**
 * Item name getter
 * @return ItemName
 */
const string &Item::getItemName() const{
    return itemName;
}

/**
 * Item name setter
 * @param itemName
 */
void Item::setItemName(const string &itemName){
    Item::itemName = itemName;
}

/**
 * Item type getter
 * @return
 */
int Item::getType() const {
    return type;
}

/**
 * Itme type setter
 * @param type
 */
void Item::setType(int type) {
    Item::type = type;
}

/**
 * Item rarity getter
 */
Item::Rarity Item::getRarity() const {
    return rarity;
}

/**
 * Item rarity setter
 * @param rarity
 */
void Item::setRarity(Item::Rarity rarity) {
    Item::rarity = rarity;
}

/**
 * Is the item destroyed (something to think about down the line)
 * @return
 */
bool Item::isDestroyed() const {
    return destroyed;
}

/**
 * Item is destroyed setter
 * @param destroyed
 */
void Item::setDestroyed(bool destroyed) {
    Item::destroyed = destroyed;
}

/**
 * Is the item dropped (as in from inventory, so we would just remove it from the vector in inventory)
 * @return
 */
bool Item::isDropped() const {
    return dropped;
}

/**
 * Item dropped setter
 * @param dropped
 */
void Item::setDropped(bool dropped) {
    Item::dropped = dropped;
}

/**
 * Gets item weight
 * @return
 */
double Item::getWeight() const {
    return weight;
}

/**
 * Sets item weight
 * @param weight
 */
void Item::setWeight(double weight) {
    Item::weight = weight;
}

// Constructors

Item::Item() {

}


Item::Item(const string &itemName, int type,
           Rarity rarity, bool destroyed, bool dropped, double weight)  {
    this -> itemName = itemName;
    this -> type = type;
    this -> rarity = rarity;
    this -> destroyed = destroyed;
    this -> dropped = dropped;
    this -> weight = weight;
}

Item::Item(const string &itemName, int type, Rarity rarity) : itemName(itemName), type(type), rarity(rarity) {}




