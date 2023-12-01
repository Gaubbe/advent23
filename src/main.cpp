#include <iostream>
#include "utils/fileutils.h"

int main() {
	std::cout << readFileToString("src/main.cpp") << std::endl;
	return 0;
}
