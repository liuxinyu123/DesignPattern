#ifndef _HEADER_H_
#define _HEADER_H_


#include <iostream>
#include <memory>

typedef enum ProductTypeTag
{
	TypeA,
	TypeB,
	TypeC
}ProductType;


class Product//抽象类
{

public:
		virtual void show () = 0;
		virtual ~Product ()  
		{
			std::cout << "destroy Product" << std::endl;
		}
};

class ProductA : public Product
{

public:
	   void show () override
		{
			std::cout << "I am a ProductA" << std::endl;
		}	   
	   ~ProductA ()  override
	   {
			std::cout << "destroy ProductA" << std::endl;
	   }
};

class ProductB : public Product
{

public:
	   void show () override
		{
			std::cout << "I am a ProductB" << std::endl;
		}	   
	   ~ProductB ()  override
	   {
			std::cout << "destroy ProductB" << std::endl;
	   }
};

class ProductC : public Product
{

public:
	   void show () override
		{
			std::cout << "I am a ProductC" << std::endl;
		}	   
	   ~ProductC ()  override
	   {
			std::cout << "destroy ProductC" << std::endl;
	   }
};

class Factory 
{

public: 
		Product* createProduct (ProductType type)//可以使用智能指针
		{
			switch (type)
			{
				case TypeA:
							return new ProductA ();
				case TypeB:
							return new ProductB ();
				case TypeC:
							return new ProductC ();
				default:
							return nullptr;
			}
		}
};

class Factory_A
{

public: 
		std::shared_ptr<Product> createProduct (ProductType type)//可以使用智能指针
		{
			switch (type)
			{
				case TypeA:
							return std::make_shared<ProductA> (ProductA ());
				case TypeB:
							return std::make_shared<ProductB> (ProductB ());
				case TypeC:
							return std::make_shared<ProductC> (ProductC ());
				default:
							return nullptr;
			}
		}
};

#endif

