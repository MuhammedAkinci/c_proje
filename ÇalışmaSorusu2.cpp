/*
overload ile alan bulma 
*/

#include<iostream>
using namespace std;

class alan
{
	private:
		int en,boy;
	public:
		alan(int b, int c)
		{
			en = b;
			boy = c;
			cout << b * c;
		}
		alan()
		{
			cout << "30 ustu amk \t";
		}	
};
alan fonk()
{
	return alan(5,12);
}
int main()
{
	alan a;
	a = fonk();
	
	return 0;
}
