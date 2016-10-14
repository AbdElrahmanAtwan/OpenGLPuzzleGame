#pragma once
#include "Material.h"
#include "Geometry.h"
#include "Transform.h"
#include <memory>
#include<gl\glm\glm.hpp>
#include<gl\glm\gtc\type_ptr.hpp>
#include<gl\glm\gtx\transform.hpp>
class Mesh
{
	std::shared_ptr<Material> material;
	std::shared_ptr<Geometry> geometry;
public:
	Transform transform;
	Mesh(std::shared_ptr<Geometry>, std::shared_ptr<Material>);
	void Render(glm::mat4 view_mat, glm::mat4 proj_mat);
	~Mesh();
};

