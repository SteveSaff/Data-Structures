#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H
#include <Item.h>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class VendingMachine
{
    public:
        VendingMachine();
        virtual ~VendingMachine();
        VendingMachine(string);
        void stockItem(Item);
        bool selectItem(string);
        string getName();
        void getItem(string, float);
        void showItems();

    protected:

    private:
        string m_machineName;
        unordered_map<string, Item>
            m_items;
};


#endif // VENDINGMACHINE_H
