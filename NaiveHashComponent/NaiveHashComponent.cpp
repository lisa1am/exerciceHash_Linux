#include "hash.h"

#include "NaiveVersion.h"

std::string hash(std::string input) {
	unsigned char output[32];
	char outputHex[65];

	for (int i=0;i<32;i++){
		output[i] = 0xFF;
	}
	for (size_t i=0;i<input.size();i++){
		output[i % 32] ^= input[i];
	}

	for (int i=0;i<32;i++) {
		sprintf(&outputHex[i * 2], "%02X", output[i]);
	}	
	return std::string(outputHex,64);

}

std::string hashName(){
	return "Naive";
}

std::string version(){
	return NAIVE_VERSION_STR;
}
