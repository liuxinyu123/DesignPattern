#include <iostream>

class Product  //如果有C产品的话，可以从工厂抽象类派生出一个专门的工厂类
{
	
public:
		virtual void show () = 0;
		virtual ~Product () {}
};

class ProductA : public Product
{

public:
		void show ()
		{
			std::cout << "I am a ProductA" << std::endl;
		}
		~ProductA () {}
};

class ProductB : public Product
{

public: 
		void show ()
		{
			std::cout << "I am a ProductB" << std::endl;
		}
		~ProductB () {}
};

class Factory 
{
	
public:
		virtual Product* createProduct () = 0;
		virtual ~Factory () {}
};

class FactoryA : public Factory
{

public:
		Product* createProduct ()
		{
			return new ProductA ();
		}
};

class FactoryB : public Factory
{
	
public:
		Product* createProduct ()
		{
			return new ProductB ();
		}
};

