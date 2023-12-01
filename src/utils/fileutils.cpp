#include "fileutils.h"
#include <fstream>
#include <ios>
#include <string>

std::string readFileToString(std::string filename) {
	std::ifstream inputStream(filename, std::ios::in | std::ios::ate);
	std::streampos size = inputStream.tellg();
	char *buf = new char[size];

	inputStream.seekg(0, std::ios::beg);
	inputStream.read(buf, size);
	inputStream.close();

	delete[] buf;

	return std::string(buf, size);
}
