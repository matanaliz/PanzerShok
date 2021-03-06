#ifndef PHYS_ENGINE_H_
#define PHYS_ENGINE_H_

#include <memory>
#include <vector>

#include <Box2D/Box2D.h>
#include "../Singleton.h"

class PhysEngine
{
private:
	PhysEngine();
	~PhysEngine();
public:
	
	static PhysEngine& Instance();

	void init();
	void step(float timeStep);
	void clean();

	int32 velocityIterations() const { return m_velocityIterations; }
	int32 positionIterations() const { return m_positionIterations; }
	
	void positionIterations(int32 val) { m_positionIterations = val; }
	void velocityIterations(int32 val) { m_velocityIterations = val; }
	
	b2World* world();

private:
	b2World* m_world;
	int32 m_velocityIterations;
	int32 m_positionIterations;
};

template<> void anFill<PhysEngine>(An<PhysEngine>& renderEngine);

#endif // PHYS_ENGINE_H_
