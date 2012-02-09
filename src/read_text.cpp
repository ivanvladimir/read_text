#include <iostream>

#include "DetectText.h"

using namespace std;

int main(int argc, char* argv[]) {
	bool verbose = false;
	if ((argc == 5) && (strcmp(argv[4], "-v") == 0)) {
		verbose = true;
	}
	if (argc < 4) {
		cout << "Usage: read_text [image] [correlation] [dictionary]" << endl;
		return -1;
	}
	DetectText detector = DetectText();
	//detector.readLetterCorrelation(argv[2]);
	//detector.readWordList(argv[3]);
	detector.detect(string(argv[1]), verbose);

	return 0;
}