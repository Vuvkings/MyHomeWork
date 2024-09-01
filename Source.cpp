#include <iostream>
using namespace std;

#define random(a,b) a+rand()%(b+1-a)


class Transport {
public:
	virtual void deliver() = 0;
	virtual void typeOfDelivery() = 0;
		
	
};

class Car : public Transport {
public:
	void typeOfDelivery() {
		int del = 0;
		cout << "�������� ��� ��������: " << endl;
		cout << "1 - �������: " << endl;
		cout << "2 - Express: " << endl;
		cout << "3 - VIP (������� � 100% ���������� �����): " << endl;
		cin >> del;
		switch (del) {
		case 1: cout << "������������ ������� �������� "; break;
		case 2: cout << "������������ �������� �������� "; break;
		case 3: cout << "������������ VIP �������� "; break;
		}
	}
	void deliver() {
		cout << " �� ����" << endl;
	}
};

class Ship : public Transport {
public:
	void typeOfDelivery() {
		int del = 0;
		cout << "�������� ��� ��������: " << endl;
		cout << "1 - �������: " << endl;
		cout << "2 - Express: " << endl;
		cout << "3 - VIP (������� � 100% ���������� �����): " << endl;
		cin >> del;
		switch (del) {
		case 1: cout << "������������ ������� �������� "; break;
		case 2: cout << "������������ �������� �������� "; break;
		case 3: cout << "������������ VIP �������� "; break;
		}
	}
	void deliver() {
		cout << " �� ����" << endl;
	}
};


class Aeroplane : public Transport {
public:
	void typeOfDelivery() {
		int del = 0;
		cout << "�������� ��� ��������: " << endl;
		cout << "1 - �������: " << endl;
		cout << "2 - Express: " << endl;
		cout << "3 - VIP (������� � 100% ���������� �����): " << endl;
		cin >> del;
		switch (del) {
		case 1: cout << "������������ ������� �������� "; break;
		case 2: cout << "������������ �������� �������� "; break;
		case 3: cout << "������������ VIP �������� "; break;
		}
	}
	void deliver() {
		cout << " �� ����" << endl;
	}
};

class DeliveryService {
public:
	void createDelivery() {
		Transport* transport = createTransport();
		cout << "������� ����� �� ��������" << endl;
		cout << "������� �������" << endl;
		transport->typeOfDelivery();
		transport->deliver();
		cout << "����� ���������" << endl;
	}
protected:
	virtual Transport* createTransport() = 0;
};

class CarDelivery : public DeliveryService {
	Transport* createTransport() {
		return new Car();
	}
};

class ShipDelivery : public DeliveryService {
	Transport* createTransport() {
		return new Ship();
	}
};

class AeroDelivery : public DeliveryService {
	Transport* createTransport() {
		return new Aeroplane();
	}
};


int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "");

	DeliveryService* service1 = new CarDelivery;
	DeliveryService* service2 = new ShipDelivery;
	DeliveryService* service3 = new AeroDelivery;
	int key = 0;
	cout << "�������� ��� ����������: " << endl;
	cout << "1 - ��������: " << endl;
	cout << "2 - �������: " << endl;
	cout << "3 - ���������: " << endl;
	cin >> key;
	switch (key) {
	case 1: service1->createDelivery(); break;
	case 2: service2->createDelivery(); break;
	case 3: service3->createDelivery(); break;
	}
	return 0;
}


