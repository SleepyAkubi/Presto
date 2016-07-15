#include <Quest/Modules/OpenGL.h>

#include "shared/glinit.c"
#include "shared/glfuncs_generated.c"
#include "shared/glrenderpath.c"
#include "shared/glshaders.c"
#include "shared/texture.c"

#ifdef QUEST_SYSTEM_WINDOWS
#include "win32/glwindow.c"
#endif

#pragma comment(lib, "opengl32.lib") // Needed for OpenGL and the console.