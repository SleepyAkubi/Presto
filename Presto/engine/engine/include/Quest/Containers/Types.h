#ifndef QUEST_CONTAINERS_TYPES_H
#define QUEST_CONTAINERS_TYPES_H

#include <Quest/Common.h>
#include <Quest/Containers/Array.h>
#include <Quest/Containers/Hashmap.h>

#define DEFINE_CONTAINER_SET(type) \
	DEFINE_ARRAY(type) \
	DEFINE_HASHMAP(type)


//#include "HashmapOutputExample.h"

DEFINE_CONTAINER_SET(u64)
DEFINE_CONTAINER_SET(u32)
DEFINE_CONTAINER_SET(u16)
DEFINE_CONTAINER_SET(u8)

DEFINE_CONTAINER_SET(a64)
DEFINE_CONTAINER_SET(a32)
DEFINE_CONTAINER_SET(a16)
DEFINE_CONTAINER_SET(a8)

DEFINE_CONTAINER_SET(i64)
DEFINE_CONTAINER_SET(i32)
DEFINE_CONTAINER_SET(i16)
DEFINE_CONTAINER_SET(i8)

DEFINE_CONTAINER_SET(isize)
DEFINE_CONTAINER_SET(usize)

#endif
