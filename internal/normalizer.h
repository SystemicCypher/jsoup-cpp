#include <string>
#include <locale>
#include "java.h"

namespace Normalizer{
	std::string lowerCase(std::string input){
		std::locale loc;
		std::string output = "";
		for(std::string::size_type i = 0; i < str.length(); i++){
			output += std::tolower(input[i], loc);
		}
		return output;
	}

	std::string normalize(std::String input){
		return Java::trim(lowerCase(input));
	}
}
