#ifndef TOKENIZER_GLOBAL_H
#define TOKENIZER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TOKENIZER_LIBRARY)
#  define TOKENIZERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TOKENIZERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TOKENIZER_GLOBAL_H
