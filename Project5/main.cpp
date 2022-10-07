#include<iostream>
using namespace std;

class Transport
{
	string color;
	string type;
	int speed;
	int fuel;
	int passengers;
public:
	Transport()
	{
		color = type = "";
		speed = fuel = passengers = 0;
	}
	Transport(string t, string c, int s, int f, int p)
	{
		color = c;
		type = t;
		speed = s;
		fuel = f;
		passengers = p;
	}
	virtual void Show()
	{
		cout << "Transport: " << type << endl;
		cout << "Color: " << color << endl;
		cout << "Speed: " << speed << " km\\h" << endl;
		cout << "Fuel consumption: " << fuel << " L" << endl;
		cout << "Passengers: " << passengers << endl;
	}
	virtual void Init()
	{
		cout << "Enter transport: ";
		cin >> type;
		cout << "Enter color: ";
		cin >> color;
		cout << "Enter speed: ";
		cin >> speed;
		cout << "Enter fuel consumption: ";
		cin >> fuel;
		cout << "Enter passengers: ";
		cin >> passengers;
	}
	virtual int GetFuel()
	{
		return fuel;
	}
};

class Plane : public Transport
{
	string company;
public:
	Plane()
	{
		company = "";
	}
	Plane(string t, string c, int s, int f, int p, string C) :Transport(t, c, s, f, p)
	{
		company = C;
	}
	void Show()
	{
		Transport::Show();
		cout << "Company: " << company << endl;
	}
	void Init()
	{
		Transport::Init();
		cout << "Enter company: ";
		cin >> company;
	}
	int GetFuel()
	{
		return Transport::GetFuel();
	}
};

class Bicycle :public Transport
{
	int gear;
public:
	Bicycle()
	{
		gear = 0;
	}
	Bicycle(string t, string c, int s, int f, int p, int g) :Transport(t, c, s, f, p)
	{
		gear = g;
	}
	void Show()
	{
		Transport::Show();
		cout << "Gear: " << gear << endl;
	}
	void Init()
	{
		Transport::Init();
		cout << "Enter gear: ";
		cin >> gear;
	}
	int GetFuel()
	{
		return Transport::GetFuel();
	}
};

class Jeep : public Transport
{
	string insurance;
public:
	Jeep()
	{
		insurance = "";
	}
	Jeep(string t, string c, int s, int f, int p, string i) :Transport(t, c, s, f, p)
	{
		insurance = i;
	}
	void Show()
	{
		Transport::Show();
		cout << "Insurance: " << insurance << endl;
	}
	void Init()
	{
		Transport::Init();
		cout << "Is there insurance? ";
		cin >> insurance;
	}
	int GetFuel()
	{
		return Transport::GetFuel();
	}
};

class Ship : public Transport
{
	int carrying;
public:
	Ship()
	{
		carrying = 0;
	}
	Ship(string t, string c, int s, int f, int p, int C) :Transport(t, c, s, f, p)
	{
		carrying = C;
	}
	void Show()
	{
		Transport::Show();
		cout << "Carrying: " << carrying << "t" << endl;
	}
	void Init()
	{
		Transport::Init();
		cout << "Enter carrying: ";
		cin >> carrying;
	}
	int GetFuel()
	{
		return Transport::GetFuel();
	}
};

class Truck : public Transport
{
	int power;
public:
	Truck()
	{
		power = 0;
	}
	Truck(string t, string c, int s, int f, int p, int P) :Transport(t, c, s, f, p)
	{
		power = P;
	}
	void Show()
	{
		Transport::Show();
		cout << "Power: " << power << " horsepower" << endl;
	}
	void Init()
	{
		Transport::Init();
		cout << "Hoow much hoursepower? ";
		cin >> power;
	}
	int GetFuel()
	{
		return Transport::GetFuel();
	}
};

int menu1()
{
	int choose;
	cout << "1.Plane\n2.Bicycle\n3.Jeep\n4.Ship\n5.Truck\n";
	cin >> choose;
	return choose;
}

int menu2()
{
	int choose;
	cout << "1.Show\n2.Show fuel consumption per 100 km\n";
	cin >> choose;
	return choose;
}

int main()
{
	int choose1 = menu1();
	Transport* Tptr = nullptr;
	switch (choose1)
	{
	case 1:
	{
		Tptr = new Plane();
		Tptr->Init();
		break;
	}
	case 2:
	{
		Tptr = new Plane();
		Tptr->Init();
		break;
	}
	case 3:
	{
		Tptr = new Plane();
		Tptr->Init();
		break;
	}
	case 4:
	{
		Tptr = new Plane();
		Tptr->Init();
		break;
	}
	case 5:
	{
		Tptr = new Plane();
		Tptr->Init();
		break;
	}
	default:
		break;
	}

	int choose2 = menu2();

	switch (choose2)
	{
	case 1:
	{
		Tptr->Show();
		break;
	}
	case 2:
	{
		cout << Tptr->GetFuel();
		break;
	}
	default:
		break;
	}
	delete Tptr;
}