#include "OctTreeCollisionDetection.h"

void Engine::Physic::OctTreeCollisionDetection::detection(float deltaTime, std::shared_ptr<std::vector<PhysicObject>> objects)
{
	_tree->update();
	_tree->checkCollisions();
}
