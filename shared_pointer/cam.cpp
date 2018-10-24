#include <iostream>
#include "cam.h"

Camera::Camera(std::shared_ptr<Database> arg_db)
: db(std::move(arg_db))
{
	std::cout << "Cam constructor: use_count: " << db.use_count() << std::endl;
}

