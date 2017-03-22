#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Product  //如果有C产品的话，可以从工厂抽象类派生出一个专门的工厂类
{
	
public:
		virtual void show () = 0;
		virtual ~Product () 
		{
			std::cout << "destory Product" << std::endl;
		}
};

class ProductA : public Product
{

public:
		void show ()
		{
			std::cout << "I am a ProductA" << std::endl;
		}
		~ProductA () 
		{
			std::cout << "destory ProductA" << std::endl;
		}
};

class ProductB : public Product
{

public: 
		void show ()
		{
			std::cout << "I am a ProductB" << std::endl;
		}
		~ProductB ()
	   	{
			std::cout << "destory ProductB" << std::endl;
		}
};

class Factory 
{
	
public:
		virtual Product* createProduct () = 0;
		virtual ~Factory () 
		{
			std::cout << "destory Factory" << std::endl;
		}
};

class FactoryA : public Factory
{

public:
		Product* createProduct ()
		{
			return new ProductA ();
		}
		 ~FactoryA () 
		{
			std::cout << "destory FactoryA" << std::endl;
		}
};

class FactoryB : public Factory
{
	
public:
		Product* createProduct ()
		{
			return new ProductB ();
		}
		~FactoryB () 
		{
			std::cout << "destory FactoryB" << std::endl;
		}
};

#endif
