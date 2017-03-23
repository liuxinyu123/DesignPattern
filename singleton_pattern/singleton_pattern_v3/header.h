#ifndef _HEADER_H_
#define _HEADER_H_

class Singleton
{
	
public:
		static Singleton* getInstance ()
		{
			return const_cast<Singleton*> (m_Instance);
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
			:m_test (10) {}
private:
		const static Singleton *m_Instance;
		int m_test;
};

const Singleton* Singleton::m_Instance = new Singleton ();

#endif
