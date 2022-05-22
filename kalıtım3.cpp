#include<iostream>

using namespace std;

class Cokgen
{
	protected:
		int yukseklik, genislik;
	public:
		void degerler(int y, int x)
		{
			yukseklik = y;
			genislik = x;
		}
};

class kare: public Cokgen
{
	public:
		int alan()
		{
			return (genislik * yukseklik);
		}
};

class ucgen: public Cokgen
{
	public:
		int alan()
		{
			return ((genislik * yukseklik) / 2);
		}
};

int main()
{
	kare k1;
	ucgen u1;
	
	k1.degerler(5,2);
	u1.degerler(8,3);
	
	cout << "kare sonuc: " << k1.alan() << endl;
	cout << "ucgen sonuc: " << u1.alan() << endl;
	
	return 0;
}
