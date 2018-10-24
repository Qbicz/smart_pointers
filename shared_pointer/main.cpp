#include <iostream>
#include <memory>
#include "db.h"
#include "cam.h"

class Controller
{
public:
	std::shared_ptr<Database> db;

	Controller()
	{
		// make_shared<>
		db = std::make_shared<Database>(); // cfg here
	}
};

int main(void)
{
	Controller ctlr;
	Camera cam(ctlr.db);

	std::cout << "use_count: " << ctlr.db.use_count() << " ";
	std::cout << "shared value: " << ctlr.db->get() << std::endl;

	ctlr.db.get();
}

