#include "PlaneActor.h"
#include "Game.h"
#include "Renderer.h"
#include "MeshComponent.h"
#include "Mesh.h"

PlaneActor::PlaneActor(Game* game)
	:Actor(game)
{
	SetScale(10.0f);
	MeshComponent* mc = new MeshComponent(this);
	mc->SetMesh(GetGame()->GetRenderer()->GetMesh("Assets/Plane.gpmesh"));
	test(mc);
}

//void test(MeshComponent* meshComponent)
//{
//	Mesh* m;
//	m = meshComponent->mMesh;
//	meshComponent->mShaderName = m->GetShaderName();
//}