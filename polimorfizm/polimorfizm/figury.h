#include <iostream>

using namespace std;

class figury {
public:
	virtual void obliczpole() = 0;
};

class kolo : public figury {
protected:
	float r;
public:
kolo (float x)
	{
	r = x;
	}
virtual void obliczpole() {
	cout << "podaj promien kola:" << endl;
	cin >> r;
	cout << "pole kola=" << 3.14 * r * r << endl;
}
};

class kwadrat : public figury {
protected:
	float a;
public:
	kwadrat(float x) {
		a = x;
	}
	virtual void obliczpole() {
		cout << "podaj bok kwadratu:" << endl;
		cin >> a;
		cout << "pole kwadratu=" << a * a << endl;
	}
};

class walec : public kolo {
	float h;
public:
	walec(float wysokosc, float x)
		:kolo(r)
	{
		h = wysokosc;
	}
	virtual void obliczpole() {
		cout << "podaj promien walca:" << endl;
		cin >> r;
		cout << "podaj wysokosc walca:" << endl;
			cin >> h;
		cout << "pole walca=" << 2 * 3.14 * r * h + 2 * 3.14 * r * r << endl;
	}
};
	
		class szescian : public kwadrat
		{
		public:
			szescian(float x)
			:kwadrat(a) {}

			virtual void obliczpole() {
				cout << "podaj bok szescianu:" << endl;
				cin >> a;
				cout << "pole szescianu=" << a * a * a << endl;
			}
		};