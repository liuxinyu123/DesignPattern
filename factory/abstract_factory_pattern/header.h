#include <iostream>

class ProductA
{

public:
		virtual void show () = 0;
		virtual ~ProductA () 
		{
			std::cout << "destroy ProductA" << std::endl;
		}
};

class ProductA1 : public ProductA 
{

public:
		void show () override
		{
			std::cout << "I am a ProductA1" << std::endl;
		}
		~ProductA1 () override
		{
			std::cout << "destroy ProductA1" << std::endl;
		}
};

class ProductA2 : public ProductA 
{

public:
		void show () override
		{
			std::cout << "I am a ProductA2" << std::endl;
		}
		~ProductA2 () override
		{
			std::cout << "destroy ProductA1" << std::endl;
		}
};

class ProductB
{

public:
		virtual void show () = 0;
		virtual ~ProductB () 
		{
			std::cout << "destroy ProductB" << std::endl;
		}
};

class ProductB1 : public ProductB 
{

public:
		void show () override
		{
			std::cout << "I am a ProductB1" << std::endl;
		}
		~ProductB1 () override
		{
			std::cout << "destroy ProductB1" << std::endl;
		}
};

class ProductB2 : public ProductB 
{

public:
		void show () override
		{
			std::cout << "I am a ProductB2" << std::endl;
		}
		~ProductB2 () override
		{
			std::cout << "destroy ProductB2" << std::endl;
		}
};

class Factory 
{

public:
		virtual ProductA* createProductA () = 0;
		virtual ProductB* createProductB () = 0;
};

class Factory1 : public Factory
{

public:
		ProductA* createProductA () override
		{
			return new ProductA1 ();
		}
		ProductB* createProductB () override
		{
			return new ProductB1 ();
		}
};

class Factory2 : public Factory
{

public:
		ProductA* createProductA () override
		{
			return new ProductA2 ();
		}
		ProductB* createProductB () override
		{
			return new ProductB2 ();
		}
};
