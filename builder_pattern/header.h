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
		virtual void buildHead () = 0;
		virtual void buildBody () = 0;
		virtual void buildLeftHand () = 0;
		virtual void buildRightHand () = 0;
		virtual void buildLeftFoot () = 0;
		virtual void buildRightFoot () = 0;
		virtual Man* getMan () = 0;
		virtual ~Builder () {}
};

class FatManbuilder : public builder
{

public:
		FatManbuilder ()
			:m_FatMan (new Man ()) {}
		void buildHead () override
		{
			m_FatMan->setHead (FatMan);
		}
		void buildBody () override
		{
			m_FatMan->setBody (FatMan);
		}
		void bulidLeftHand () override
		{
			m_FatMan->setLeftHand (FatMan);		
		}
		void buildRightHand () override
		{
			m_FatMan->setRigthHand (FatMan);
		}
		void buildLeftFoot () override
		{
			m_FatMan->setLeftFoot (FatMan);
		}
		void buildRightFoot () override
		{
			m_FatMan->setRigthFoot (FatMan);
		}
		Man* getMan () 
		{
			return m_FatMan;
		}
private:
		Man *m_FatMan;
};



class ThinManbuilder : public builder
{

public:
		ThinManbuilder ()
			:m_ThinMan (new Man ()) {}

private:
		Man* m_ThinMan;
}
#endif
