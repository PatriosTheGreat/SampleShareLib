#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

#include "Foo.h"

#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main(int argc, char const *argv[]) {
	Foo foo;

	{
		std::ofstream myfile;
		myfile.open("file.txt");
		myfile << "some test";
	}

	::FILE *file = fopen("file.txt", "rb");
	foo.ReadStuff(file);

	std::cout << "Done" << std::endl;
	std::cin.get();
}