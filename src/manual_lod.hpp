#pragma once

#include <godot_cpp/classes/mesh_instance3d.hpp>

using namespace godot;

class ManualLODMeshInstance : public MeshInstance3D
{
	GDCLASS(ManualLODMeshInstance, MeshInstance3D);

protected:
	static void _bind_methods();

public:
	godot::String hello_node();
};
