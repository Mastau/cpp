#include "sed.hpp"


int	print_err(std::string err) {
	std::cout << "Error: " << err << std::endl;
	return (1);
}

int	replace(std::string filename, std::string s1, std::string s2) {
	std::ostringstream content;
	std::string line;
	
	if (s1.empty() || filename.empty())
		return (print_err("empty string"));
	std::ifstream inputFile(filename.c_str());
	if (!inputFile)
		return (print_err("Can't open input file: " + filename));
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile)
		return (print_err("Can't create ouput file: " + outputFilename));
	while (std::getline(inputFile, line)) {
		std::string res;
		size_t pos = 0;
		size_t found;
		while ((found = line.find(s1, pos)) != std::string::npos) {
			res.append(line.substr(pos, found - pos));
			res.append(s2);
			pos = found + s1.length();
		}
		res.append(line.substr(pos));
		outputFile << res << '\n';
	}
	std::cout << "Replace done! Can be found in " << outputFilename << std::endl;
	return (0);
}

