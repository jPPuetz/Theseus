#include "room.hpp"

using namespace theseus::gameobjects::map;
using namespace theseus::engine;
using namespace std;

void Room::addGameObject(shared_ptr<GameObject> gameObject){
	this->gameobjects.push_back(gameObject);
}
