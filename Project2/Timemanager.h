#pragma once
#include <iostream>
#include <string>
using namespace std;

class Timemanager
{
private:
	int id;
	int idVisitor;
	string localDateTime;
	bool status;
	static int countId;
public:
	Timemanager(int idVisitor, bool status);
	string toString();

};

