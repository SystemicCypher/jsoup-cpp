#include "java.h"
#include <string>

int main(){
	std::string str = "  Potatoes ";
	std::cout<<Java::trim(str)<<"\n";
	return 0;
}
