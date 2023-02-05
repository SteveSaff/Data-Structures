#include <iostream>
#include <unordered_map>
#include "VendingMachine.h"
#include "Item.h"

VendingMachine::VendingMachine()
{
    m_machineName = "";
}

VendingMachine::VendingMachine(string name)
{
    m_machineName = name;
}

VendingMachine::~VendingMachine()
{
}

void VendingMachine::stockItem(Item item)
{
    m_items[item.getName()] = item;
}

bool VendingMachine::selectItem(string name)
{
    if (m_items.count(name) == 0)
    {
        cout << "Item not available in the machine" << endl;
        return false;
    }
    Item selectedItem = m_items[name];
    cout << "Selected item: " << selectedItem.getName() << endl;
    return true;
}

string VendingMachine::getName()
{
    return m_machineName;
}

void VendingMachine::showItems()
{
    cout << "Items available in the machine: " << endl;
    for (auto item : m_items)
    {
        cout << item.second.getName() << endl;
    }
}
