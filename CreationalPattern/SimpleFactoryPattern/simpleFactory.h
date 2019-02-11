#ifndef SIMPLEFACTORY_H_
#define SIMPLEFACTORY_H_

#include <string>

// 产品类型枚举
enum ProductType
{
    ProductType_Add,
};

// 产品基类(抽象类)
class Product
{
    private:
        std::string m_name;
    public:
        Product(std::string name = "none") : m_name(name) {}
        ~Product() {}
        std::string GetName() { return m_name; }
        virtual int Use() = 0;
};

// 工厂类
class Factory
{
    private:
        std::string m_name;
    public:
        Factory(std::string name) :m_name(name) {}
        ~Factory() {}
        std::string GetName() { return m_name; }
        Product * GetProductByType(int type);
};

class AddProduct : public Product
{
    public:
        AddProduct(std::string name) : Product(name) {}
        ~AddProduct() {}
        int Use();
};

#endif
