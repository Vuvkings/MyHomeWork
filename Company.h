#include <iostream>
#include <vector>
#include "Visitor.h"
#include "Database.h"
#include "Timemanager.h"

class Company
{
	vector<Visitor*> visitors;
	Database* tmDb = new Database("resources/Timemanager.txt");
public:
	void inclomeVisitor(Visitor* visitor);
	void outcomeVisitor(int id);


};
