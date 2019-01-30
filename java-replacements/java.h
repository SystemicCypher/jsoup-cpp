#include <string>
#include <cctype>
#include <iostream>

namespace Java{
	std::string trim(std::string str){
		std::string output = "";
		for(auto it = str.begin(); it != str.end(); ++it){
			if(!(isspace(*it))){
				output += *it;
			}
		}	
		return output;
	}	
}
