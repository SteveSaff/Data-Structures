#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <vector>

using namespace std;

class Item
{
    public:
        Item();
        virtual ~Item();
        Item(string, int, float);
        string getName();
        int getQuantity();
        decreaseQuantity();
        float getCost();

    protected:

    private:
        string m_name;
        int m_quantity;
        float m_cost;
};

#endif // ITEM_H
