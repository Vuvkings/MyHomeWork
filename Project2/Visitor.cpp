#include "Visitor.h"
#define random(a,b)  a+rand()%(b+1-a)

int Visitor::countId = 1;
vector<string> Visitor::names{ "Vasily", "Oleg", "Tom", "Pol","Pavel", "Ivan", "Nicolay"};
vector<string> Visitor::surnames{ "Gavrilov", "Samian", "Reshetov", "Ivanov", "Jonson", "Roth", "Belic"};
vector<string> Visitor::abonements{ "7", "21", "30", "60", "90", "180", "360" };
Visitor::Visitor(string name, string surname, string abonement)
{
	this->name = name;
	this->surname = surname;
	this->id = countId++;
	this->abonement = abonement;

}

string Visitor::toString()
{
	return to_string(id) + "; " + name + "; " + surname + "; " + abonement + " days";
}

int Visitor::getId()
{
	return id;
}

Visitor* Visitor::generateVisitor() {
	Visitor* visitor = new Visitor(names[random(0, names.size() - 1)], surnames[random(0, surnames.size() - 1)], abonements[random(0, abonements.size() - 1)]);
	return visitor;
}