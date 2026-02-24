#include <string>

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

class Address{
        private:
               string street;
	       string city;
	       string state;
	       string zip;
        public:
                Address();
                void init(std::string street city state zip);
                void printAddress();
};

#endif
