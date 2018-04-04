#ifndef MESSAGE_PLE_GLOBAL_H
#define MESSAGE_PLE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MESSAGE_PLE_LIBRARY)
#  define MESSAGE_PLESHARED_EXPORT Q_DECL_EXPORT
#else
#  define MESSAGE_PLESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MESSAGE_PLE_GLOBAL_H