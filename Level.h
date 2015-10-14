#pragma once
#include <irrlicht.h>
#include <string>
#include <vector>
using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

#include "object.h"
#include "plane.h"

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
//#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

class Level
{
public:
	Level(IrrlichtDevice* device, IVideoDriver* driver, ISceneManager* smgr);
	void loadLevel();
private:
	IrrlichtDevice* device_;
	IVideoDriver* vidDriver_;
	ISceneManager* sceneMgr_;
	// Lists of objects will be needed.
	Object& thePlane_;
};