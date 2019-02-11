#include <iostream>


#include "simpleFactory.h"


Product * Factory::GetProductByType(int type)
{
    Product * product = nullptr;

    switch(type)
    {
        case ProductType::ProductType_Add :
            product = new AddProduct("Add");
            break;
    }

    return product;
}
