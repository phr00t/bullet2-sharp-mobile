#include <BulletCollision/CollisionDispatch/btCollisionObjectWrapper.h>
#include <BulletCollision/CollisionDispatch/btCompoundCollisionAlgorithm.h>
#include <BulletCollision/NarrowPhaseCollision/btPersistentManifold.h>

#include "btCompoundCollisionAlgorithm_wrap.h"

btCompoundCollisionAlgorithm::CreateFunc* btCompoundCollisionAlgorithm_CreateFunc_new()
{
	return new btCompoundCollisionAlgorithm::CreateFunc();
}

btCompoundCollisionAlgorithm::SwappedCreateFunc* btCompoundCollisionAlgorithm_SwappedCreateFunc_new()
{
	return new btCompoundCollisionAlgorithm::SwappedCreateFunc();
}

btCompoundCollisionAlgorithm* btCompoundCollisionAlgorithm_new(btCollisionAlgorithmConstructionInfo* ci, btCollisionObjectWrapper* body0Wrap, btCollisionObjectWrapper* body1Wrap, bool isSwapped)
{
	return new btCompoundCollisionAlgorithm(*ci, body0Wrap, body1Wrap, isSwapped);
}

btCollisionAlgorithm* btCompoundCollisionAlgorithm_getChildAlgorithm(btCompoundCollisionAlgorithm* obj, int n)
{
	return obj->getChildAlgorithm(n);
}
