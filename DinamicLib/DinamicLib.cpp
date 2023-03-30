#include <iostream> 
#include <windows.h> 
#include "../DynamicLibrary/Leaver.h"
using namespace std;


int main() {

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Leaver::Leaver person;
	person.greet();
}
