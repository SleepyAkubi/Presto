#ifndef QUEST_COMMON_COMPILERS_H
#define QUEST_COMMON_COMPILERS_H

#if   defined(__clang__)
#define QUEST_COMPILER_CLANG
#elif defined(_MSC_VER)
#define QUEST_COMPILER_MSVC
#elif defined(__GNUC__) || defined(__GNUG__) && !(defined(__clang__))
#define QUEST_COMPILER_GNU_GCC
#elif defined(__INTEL_COMPILER)
#define QUEST_COMPILER_INTEL
#endif

#endif
