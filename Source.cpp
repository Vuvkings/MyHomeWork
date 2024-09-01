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
		cout << "Выберите тип доставки: " << endl;
		cout << "1 - Обычная: " << endl;
		cout << "2 - Express: " << endl;
		cout << "3 - VIP (Быстрая с 100% страховкой груза): " << endl;
		cin >> del;
		switch (del) {
		case 1: cout << "Производится обычная доставка "; break;
		case 2: cout << "Производится Экспресс доставка "; break;
		case 3: cout << "Производится VIP доставка "; break;
		}
	}
	void deliver() {
		cout << " по суше" << endl;
	}
};

class Ship : public Transport {
public:
	void typeOfDelivery() {
		int del = 0;
		cout << "Выберите тип доставки: " << endl;
		cout << "1 - Обычная: " << endl;
		cout << "2 - Express: " << endl;
		cout << "3 - VIP (Быстрая с 100% страховкой груза): " << endl;
		cin >> del;
		switch (del) {
		case 1: cout << "Производится обычная доставка "; break;
		case 2: cout << "Производится Экспресс доставка "; break;
		case 3: cout << "Производится VIP доставка "; break;
		}
	}
	void deliver() {
		cout << " по морю" << endl;
	}
};


class Aeroplane : public Transport {
public:
	void typeOfDelivery() {
		int del = 0;
		cout << "Выберите тип доставки: " << endl;
		cout << "1 - Обычная: " << endl;
		cout << "2 - Express: " << endl;
		cout << "3 - VIP (Быстрая с 100% страховкой груза): " << endl;
		cin >> del;
		switch (del) {
		case 1: cout << "Производится обычная доставка "; break;
		case 2: cout << "Производится Экспресс доставка "; break;
		case 3: cout << "Производится VIP доставка "; break;
		}
	}
	void deliver() {
		cout << " по небу" << endl;
	}
};

class DeliveryService {
public:
	void createDelivery() {
		Transport* transport = createTransport();
		cout << "получен заказ на доставку" << endl;
		cout << "передан курьеру" << endl;
		transport->typeOfDelivery();
		transport->deliver();
		cout << "заказ доставлен" << endl;
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
	cout << "Выберите тип транспорта: " << endl;
	cout << "1 - Наземный: " << endl;
	cout << "2 - Морской: " << endl;
	cout << "3 - Воздушный: " << endl;
	cin >> key;
	switch (key) {
	case 1: service1->createDelivery(); break;
	case 2: service2->createDelivery(); break;
	case 3: service3->createDelivery(); break;
	}
	return 0;
}


