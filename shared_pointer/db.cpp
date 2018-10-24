#include <iostream>
#include "db.h"

Database::Database(void)
{
	std::cout << "DB constructor" << std::endl;
	value = -42;
}

int Database::get(void)
{
	return value;
}

