#ifndef __GAME_OBJECT_LIST__
#define __GAME_OBJECT_LIST__

#include <vector>
#include <memory>


class Entity;
typedef std::shared_ptr<Entity> EntityPtr;

class EntityList
{
public:
	void addGameObject(EntityPtr gameObject);
	EntityPtr getNthGameObject(size_t index) const;
	size_t GetSize() const;


private:
	//hold all gameObjects
	//TODO add shared_ptr 
	//We can consider rewriting this in case 
	//we need some sort of order in rendering the game object
	std::vector<EntityPtr> m_gameObjectList;
};

#endif