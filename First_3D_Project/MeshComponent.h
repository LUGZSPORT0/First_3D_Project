#pragma once
#include "Component.h"
#include <cstddef>
#include <string>

class MeshComponent : public Component
{
public:
	MeshComponent(class Actor* owner);
	~MeshComponent();
	// Draw this mesh component
	virtual void Draw(class Shader* shader);
	// Set the mesh/texture index used by mesh component
	virtual void SetMesh(class Mesh* mesh) { mMesh = mesh; }
	std::string GetShaderName() { return mShaderName; }
	void SetTextureIndex(size_t index) { mTextureIndex = index; }
	friend void UpdateMeshComponent(MeshComponent* meshComponent);
protected:
	class Mesh* mMesh;
	size_t mTextureIndex;
	std::string mShaderName;

};

