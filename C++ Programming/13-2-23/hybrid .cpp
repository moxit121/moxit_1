#include<iostream>
using namespace std;

class A{
	public:
		void msg()
		{
			cout<<"\n Hello from Class A: ";
		}
};
class B : virtual public A
{	
};
class C : virtual public B
{	
};
class D : public B, public C
{
};
int main()
{
	D obj;
	obj.msg();
	
	return 0;
}
