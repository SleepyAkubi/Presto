#ifndef QUEST_GRAPHICS_DIMENSIONS_H
#define QUEST_GRAPHICS_DIMENSIONS_H

#include <Quest/Common.h>

typedef struct
{
  u32 width;
  u32 height;
} Dimensions;

forceinline f32 DimensionsGetAspectRatio(Dimensions dimensions)
{
  if (dimensions.width == 0 || dimensions.height == 0)
    return(1.0f);

  return ((f32)dimensions.width / (f32)dimensions.height);
}

#endif
