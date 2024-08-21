#include "Company.h"

void Company::inclomeVisitor(Visitor* visitor)
{
	visitors.push_back(visitor);
	tmDb->addLine(Timemanager(visitor->getId(), true).toString());
}

void Company::outcomeVisitor(int id)
{
	int count = 0;
	for (auto emp : visitors) {
		if (emp->getId() == id) {
			count++;
			break;
		}
	}
	if (count != 0) {
		visitors.erase(visitors.begin() + count);
		tmDb->addLine(Timemanager(id, false).toString());
	}


}