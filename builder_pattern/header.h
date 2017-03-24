#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

typedef ManTypeTag
{
	FatMan,
	ThinMan,
	NormalMan
} MANTYPE;

class Man
{
public:
		void setHead (MANTYPE type) 
		{
			m_type = type;
		}
		void setBody (MANTYPE type)
		{
			m_type = type;
		}
		void setLeftHand (MANTYPE type)
		{
			m_type = type;
		}
		void setRigthHand (MANTYPE type)
		{
			m_type = type;
		}
		void setLeftFoot (MANTYPE type)
		{
			m_type = type;
		}
		void setRigthFoot (MANTYPE type)
		{
			m_type = type;
		}

		void showMan (MANTYPE type)
		{
			switch (type)
			{
				case FatMan:
						std::cout << "I am a FatMan" << std::cout;
						break;
				case ThinMan:
						std::cout << "I am a ThinMan" << std::endl;
						break;
				case NormalMan:
						std::cout << "I am a NormalMan" << std::endl;
						break;
				default:
						return;
			}
		}
private:
		MANTYPE m_type;
};

class Builder
{

public:
		virtual void BuildHead () = 0;
		virtual void BulidBody () = 0;
		virtual void BuildLeftHand () = 0;
		virtual void BuildRightHand () = 0;
		virtual void BuildLeftFoot () = 0;
		virtual void BuildRightFoot () = 0;
		virtual Man* getMan () = 0;
		virtual ~Builder () {}
};

class FatManBuilder : public Builder
{

public:
		void BuildHead () override
		{
			m_builder->BuildHead ();
		}
		void BulidBody () override
		{
			m_builder->BulidBody ();
		}
		void BuildLeftHand () override
		{
			m_builder->BuildLeftHand ();
		}

private:
		Builder *m_builder;
};
#endif
