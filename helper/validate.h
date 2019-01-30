#include <stdexcept>
#include <vector>
#include <algorithm>

namespace Validate{
		void notNull(void* object){
			if(object == NULL)
				throw std::invalid_argument("Object must not be null");
		}

		void notNull(void* object, std::string msg){
			if(object == NULL)
				throw std::invalid_argument(msg);
		}

		void isTrue(bool val){
			if(!val)
				throw std::invalid_argument("Must be true");
		}

		void isTrue(bool val, std::string msg){
			if(!val)
				throw std::invalid_argument(msg);
		}

		void isFalse(bool val){
			if(val)
				throw std::invalid_argument("Must be false");
		}

		void isFalse(bool val, std::string msg){
			if(val)
				throw std::invalid_argument(msg);
		}

		void noNullElements(std::vector<void*> object){
			if(std::any_of(object.begin(), object.end(), []void* i){return i == NULL})
				throw std::invalid_argument("Array must not contain any null objects");
		}
		void noNullElements(std::vector<void*> object, std::msg){
			if(std::any_of(object.begin(), object.end(), []void* i){return i == NULL})
				throw std::invalid_argument(msg);
		}

		void notEmpty(std::string str){
			if(str.length() == 0)
				throw std::invalid_argument("String must not be empty");
		}

		void notEmpty(std::string str, std::string msg){
			if(str.length() == 0)
				throw std::invalid_argument(msg);
		}

		void fail(std::string msg){
			throw std::invalid_argument(msg);
		}
}
