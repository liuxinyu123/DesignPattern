#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Singleton
{

public:
		static Singleton* getInstance ()
		{
			if (!m_Instance)
				m_Instance = new Singleton ();

			return m_Instance;
		}
		static void destroyInstance ()
		{
			delete m_Instance;
		}

		int test () const
		{
			return m_test;
		}

private:
		Singleton ()
			: m_test (10) {}
private:
		static Singleton* m_Instance;
		int m_test;
};

Singleton* Singleton::m_Instance = nullptr;
#endif
