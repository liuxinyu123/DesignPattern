#ifndef _HEADER_H_
#define _HEADER_H_


class Singleton
{
public:
		static Singleton* getInstance ()
		{
			return m_Instance;
		}
		Singleton (const Singleton &s) = delete;
		Singleton& operator= (const Singleton &s) = delete;
		
		int test ()
		{
			return m_test;
		}

private:
		Singleton ()
			:m_test (20) {}
private:
		static Singleton *m_Instance;
		int m_test;
class GC
{

public:
		~GC ()
		{
			// We can destory all the resouce here, eg:db connector, file handle and so on
			delete m_Instance;
		}
};
		static GC m_gc;
};


#endif
