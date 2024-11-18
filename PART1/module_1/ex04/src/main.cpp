#include "../includes/SedIsForLosers.hpp"

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace filename s1 s2" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inFile(filename.c_str());
	if (!inFile)
	{
		std::cout << "Could not open input file." << std::endl;
		return 1;
	}
	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile)
	{
		std::cout << "Could not open output file." << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(inFile, line))
	{
		std::stringstream ss;
		size_t pos = 0;
		size_t lastPos = 0;

		while ((pos = line.find(s1, lastPos)) != std::string::npos)
		{
			ss << line.substr(lastPos, pos - lastPos) << s2;
			lastPos = pos + s1.length();
		}
		ss << line.substr(lastPos);
		outFile << ss.str() << '\n';
	}
	inFile.close();
	outFile.close();

	return 0;
}
