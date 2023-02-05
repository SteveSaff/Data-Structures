//Stephen Saffioti
//Program-1
//Vending Machine Program

#include <iostream>
#include <string>
#include "Item.h"
#include "VendingMachine.h"

using namespace std;

int main()
{
    VendingMachine myMachine("Soda Machine");

    Item item1("coke", 32 , 1.50);
    myMachine.stockItem(item1);
    Item item2("pepsi", 1, 1.40);
    myMachine.stockItem(item2);

    string itemName;
    float money;
    do
    {
        cout << endl;
        myMachine.showItems();
        cout << "Enter the name of your selection: ";
        cin >> itemName;

        if (myMachine.selectItem(itemName)) {
            cout << "Enter your money: ";
            cin >> money;
            myMachine.getItem(itemName,money);
        }
    }
    while (true);
}

bool VendingMachine::selectItem(string name)
{
   // return true if item is present and not sold out
    auto i = m_items.find(name);
    if (i != m_items.end()) {
        if ( i->second.getQuantity() > 0 )
            return true;
        else {
            cout << endl << "Item sold out" << endl;
        }
    }
    else {
        cout << endl << "Item not found" << endl;
    }
    return false;
}
