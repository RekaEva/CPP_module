#include <iostream>

class A
{
	private:
		int	a;

	public:
		int	getA() const
		{
			return a;
		}
		void	setA(int value)
		{
			a = value;
		}
};

int main(void)
{
	A aobj;

	aobj.setA(42);
	std::cout << "obj.a = " << aobj.getA() << std::endl; 
	return 0;
}
