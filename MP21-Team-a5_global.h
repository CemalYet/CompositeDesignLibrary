#ifndef MP21TEAMA5_GLOBAL_H
#define MP21TEAMA5_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MP21TEAMA5_LIBRARY)
#  define MP21TEAMA5_EXPORT Q_DECL_EXPORT
#else
#  define MP21TEAMA5_EXPORT Q_DECL_IMPORT
#endif

#endif // MP21TEAMA5_GLOBAL_H
