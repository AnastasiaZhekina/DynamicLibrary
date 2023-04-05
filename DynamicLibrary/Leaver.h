#pragma once 
#ifdef DYNAMICLIBRARY_EXPORTS
#define DYNAMICLIBRARY_API __declspec(dllexport)
#else
#define DYNAMICLIBRARY_API __declspec(dllimport)
#endif 

#include <iostream> 
using namespace std;

namespace Leaver{

class Leaver {
	string name;
public:
	DYNAMICLIBRARY_API void leave();
};
}
