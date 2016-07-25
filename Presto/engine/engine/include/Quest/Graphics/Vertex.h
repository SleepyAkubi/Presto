#ifndef QUEST_GRAPHICS_VERTEX_H
#define QUEST_GRAPHICS_VERTEX_H

#include <Quest/Common.h>
#include <Quest/Containers.h>
#include <Quest/Math/Vector2.h>
#include <Quest/Math/Vector3.h>
#include <Quest/Graphics/Colour.h>

typedef struct
{
	Vector3 position; // 128
	Vector3 normal; // 128
	Vector3 tangent; // 128
	Vector2 texCoord; // 64
	Colour32 colour; // 32
	u32 padding;
} Vertex;

DEFINE_ARRAY(Vertex);

forceinline Vertex CreateVertex(Vector3 position, Vector2 texCoord)
{
	Vertex vertex = { 0 };
	vertex.position = position;
	vertex.texCoord = texCoord;

	return vertex;
}

#endif