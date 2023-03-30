#include "Leaver.h"

namespace Leaver {

	void Leaver::greet() {
		cout << "Введите имя: ";
		cin >> name; cout << "Здравствуйте, " << name << "!";
	};
}