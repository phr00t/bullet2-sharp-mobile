#include <BulletCollision/CollisionDispatch/btConvexPlaneCollisionAlgorithm.h>
#include <BulletCollision/NarrowPhaseCollision/btPersistentManifold.h>

#include "conversion.h"
#include "btConvexPlaneCollisionAlgorithm_wrap.h"

btConvexPlaneCollisionAlgorithm::CreateFunc* btConvexPlaneCollisionAlgorithm_CreateFunc_new()
{
	return new btConvexPlaneCollisionAlgorithm::CreateFunc();
}

int btConvexPlaneCollisionAlgorithm_CreateFunc_getMinimumPointsPerturbationThreshold(btConvexPlaneCollisionAlgorithm::CreateFunc* obj)
{
	return obj->m_minimumPointsPerturbationThreshold;
}

int btConvexPlaneCollisionAlgorithm_CreateFunc_getNumPerturbationIterations(btConvexPlaneCollisionAlgorithm::CreateFunc* obj)
{
	return obj->m_numPerturbationIterations;
}

void btConvexPlaneCollisionAlgorithm_CreateFunc_setMinimumPointsPerturbationThreshold(btConvexPlaneCollisionAlgorithm::CreateFunc* obj, int value)
{
	obj->m_minimumPointsPerturbationThreshold = value;
}

void btConvexPlaneCollisionAlgorithm_CreateFunc_setNumPerturbationIterations(btConvexPlaneCollisionAlgorithm::CreateFunc* obj, int value)
{
	obj->m_numPerturbationIterations = value;
}

btConvexPlaneCollisionAlgorithm* btConvexPlaneCollisionAlgorithm_new(btPersistentManifold* mf, btCollisionAlgorithmConstructionInfo* ci, btCollisionObjectWrapper* body0Wrap, btCollisionObjectWrapper* body1Wrap, bool isSwapped, int numPerturbationIterations, int minimumPointsPerturbationThreshold)
{
	return new btConvexPlaneCollisionAlgorithm(mf, *ci, body0Wrap, body1Wrap, isSwapped, numPerturbationIterations, minimumPointsPerturbationThreshold);
}

void btConvexPlaneCollisionAlgorithm_collideSingleContact(btConvexPlaneCollisionAlgorithm* obj, btScalar* perturbeRot, btCollisionObjectWrapper* body0Wrap, btCollisionObjectWrapper* body1Wrap, btDispatcherInfo* dispatchInfo, btManifoldResult* resultOut)
{
	QUATERNION_CONV(perturbeRot);
	obj->collideSingleContact(QUATERNION_USE(perturbeRot), body0Wrap, body1Wrap, *dispatchInfo, resultOut);
}
