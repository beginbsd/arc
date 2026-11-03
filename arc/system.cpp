#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
std::vector<std::string> pc_tokens = {
	"-version",
	"-create_basic",
	"-cb"
};

int main(int argc,char* argv[])
{
	if (argv[1]&&argv[2]) {
		std::string line1 = argv[1];
		if (line1 == pc_tokens[1] || line1 == pc_tokens[2]) {
			std::string cmd = argv[2];
			std::string line2 = "mkdir \"" + cmd + "\"";
				system(line2.c_str());
				std::string mainfile_create = "touch \"" + cmd + "/main.aps\"";
				system(mainfile_create.c_str());
		}
	}else if(argv[1]){
		if (argv[1] == pc_tokens[0]) {
			std::cout << "Version: 1.0.0" << std::endl;
		}
	}
	else {
		std::cout<<"ERROR: Invalid number of arguments"<<std::endl;
	}
}