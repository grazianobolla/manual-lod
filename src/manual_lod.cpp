#include "manual_lod.hpp"

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void ManualLODMeshInstance::_bind_methods()
{
	ClassDB::bind_method(D_METHOD("hello_node"), &ManualLODMeshInstance::hello_node);
}

godot::String ManualLODMeshInstance::hello_node()
{
	return "Hello GDExtension Node! From GB!\n";
}
