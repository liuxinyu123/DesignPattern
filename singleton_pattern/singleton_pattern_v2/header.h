#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Singleton
{

public:
		static Singleton* getInstance ()
		{
			if (!m_Instance)
			{ //C++没有直接的Lock操作，请使用其它库的Lock，比如Boost，此处仅为了说明
				//为了线程安全性，此处可以加锁 lock()
				if (!m_Instance)
					m_Instance = new Singleton ();
				//在此处解锁 unlock() 
			}

			return m_Instance;
		}
		Singleton (const Singleton &s) = delete;
		Singleton& (const Singleton& s) = delete;
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
