#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Visitor
{
private:
	int id;
	string abonement;
	string name;
	string surname;
	static int countId;
	static vector<string> names;
	static vector<string> surnames;
	static vector<string> abonements;
public:
	Visitor(string name, string surname,  string abonement);
	int getId();
	string toString();
	void show();
	static Visitor* generateVisitor();

};

