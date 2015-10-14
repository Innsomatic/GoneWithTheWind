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

#include "Level.h"

#ifdef _IRR_WINDOWS_
#pragma comment(lib, "Irrlicht.lib")
//#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#endif

Level::Level(IrrlichtDevice* device, IVideoDriver* driver, ISceneManager* smgr) : 
device_(device), vidDriver_(driver), sceneMgr_(smgr)
{
}

void Level::loadLevel()
{
	sceneMgr_->loadScene("GameLevel.irr");

	thePlane_ = new Plane(vidDriver_, sceneMgr_, "testairplane.obj", "looseleaf.png",
		"sound", vector3df(-737, 225, -512), vector3df(-90, 0, 0), vector3df(25.0, 25.0, 25.0),
		vector3df(0, 0, 0), vector3df(0, 0, 0), vector3df(0, 0, 0));
}