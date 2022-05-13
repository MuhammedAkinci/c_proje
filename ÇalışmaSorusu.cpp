/*
Ogrenci isminde bir class yarat�n
Class�da private olarak ogrencino ve notlar isimli bir integerolacak
Class�da public olarak ogrencinoekle, notekle ve notyazdirdiye �� metod olacak. 
Notekle metodu ile not isimli de�i�kene atama yap�lacak
Ogrencinoekle ile ogrencino�ya atama yap�labilecek.
Notyazdir ile notlar yazd�r�lacak
*/
 #include<iostream>
using namespace std;

class student
{
	private:
		int notlar;
		int ogrencino;
		
	public:
	void ogrenciekle(int ogrnecis);
	void notekle(int nots);
	void notyazdir(void);
};

void student::notekle(int nots)
{
	notlar = nots;
}

void student::ogrenciekle(int ogrencis)
{
	ogrencino = ogrencis;
}

void student::notyazdir()
{
	std::cout << "ogrenci no: " << ogrencino << endl << "no: " << notlar << endl;
}
int main()
{
	student s1;
	int nots = 3, ogrencis = 1; 
	s1.notekle(nots);
	s1.ogrenciekle(ogrencis);
	s1.notyazdir();
	
	return 0;
}
