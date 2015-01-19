#ifndef MIBIBLIOTECAGLOBAL_H
#define MIBIBLIOTECAGLOBAL_H

#ifdef MiBibliotecaLIB
#	define MiBibDLL __declspec(dllexport)
#else
#	define MiBibDLL __declspec(dllimport)
#endif

#endif // MIBIBLIOTECAGLOBAL_H