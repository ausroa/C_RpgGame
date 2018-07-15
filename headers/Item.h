/**
* Created by Nasser Al-Zughaibi on 7/13/18.
*/

#ifndef C_RPGGAME_ITEM_H
#define C_RPGGAME_ITEM_H

#include <string>
using namespace std;

/**
 * Class to hold Items
 */
class Item {

private:
    enum Rarity{
        COMMON = 1,
        UNCOMMON = 2,
        RARE = 3,
        EPIC = 4,
        LEGENDARY = 5,

    };
        string itemName;
        int type;
        Rarity rarity;
        bool destroyed;
        bool dropped;
        double weight;

public:
    const string &getItemName() const;

    void setItemName(const string &itemName);

    int getType() const;

    void setType(int type);

    bool isDestroyed() const;

    void setDestroyed(bool destroyed);

    bool isDropped() const;

    void setDropped(bool dropped);

    double getWeight() const;

    void setWeight(double weight);

    Rarity getRarity() const;

    void setRarity(Rarity rarity);

    Item();

    Item(const string &itemName, int type, Rarity rarity, bool destroyed, bool dropped, double weight);

    Item(const string &itemName, int type, Rarity rarity);

};



#endif //C_RPGGAME_ITEM_H
