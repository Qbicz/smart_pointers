#ifndef _CAM_H_
#define _CAM_H_

#include <iostream>
#include <memory>
#include "db.h"

class Camera
{
	std::shared_ptr<Database> db;
public:
	Camera(std::shared_ptr<Database> db);
};

#endif
