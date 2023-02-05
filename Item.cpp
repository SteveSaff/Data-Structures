#include <iostream>
#include "Item.h"

Item::Item()
{
    m_name = "";
}

Item::Item(string name)
{
    m_name = name;
}

string Item::getName()
{
    return m_itemName;
}
