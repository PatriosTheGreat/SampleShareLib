#include "Foo.h"
#include <iostream>

Foo::Foo() {
}

void Foo::ReadStuff(FILE *file) {
	std::cout << "ReadStuff" << std::endl;

	char buffer[256];
	fgets(buffer, sizeof(buffer), file);

	std::cout << buffer << std::endl;
}
