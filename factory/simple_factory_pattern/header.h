#include <iostream>

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
		virtual ~Product ()  {}
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

class ProductC : public Product
{

public:
	   void show ()
		{
			std::cout << "I am a ProductC" << std::endl;
		}	   
	   ~ProductC () {}
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

