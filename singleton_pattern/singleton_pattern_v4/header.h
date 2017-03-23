#ifndef _HEADER_H_
#define _HEADER_H_

class Singleton
{

public:
		static Singleton* getInstance ()
		{
			static Singleton m_Instance;
			return &m_Instance;
		}	

		int test () 
		{
			return ++m_test;
		}
		Singleton (const Singleton& s) = delete;
		Singleton& operator= (const Singleton &s) = delete;
private:
		Singleton ()
			:m_test (10) {}
private:
		static Singleton *m_Instance;
		int m_test;
};

#endif
