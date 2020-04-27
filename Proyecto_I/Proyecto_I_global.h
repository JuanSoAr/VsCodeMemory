#ifndef PROYECTO_I_GLOBAL_H
#define PROYECTO_I_GLOBAL_H

#include <QtCore/qglobal.h>
#include "vsptr.h"
#include "vsptr.cpp"

#if defined(PROYECTO_I_LIBRARY)
#  define PROYECTO_I_EXPORT Q_DECL_EXPORT
#else
#  define PROYECTO_I_EXPORT Q_DECL_IMPORT
#endif

#endif // PROYECTO_I_GLOBAL_H
