#include <iostream>
#include <string>
using namespace std;

class Chef {
public:
	void cook() {
		cout <<"can Cook\n";
	}
	void createRecipe() {
		cout <<"can Create Recipe\n";
	}
};

class Youtuber {
public:
	void recordVideo() {
		cout <<"can Record Videos\n";
	}
	void editContent() {
		cout <<"can Edit Content\n";
	}
};
 
class Vlogger : public Chef, public Youtuber{
public:
	void displayAbilities() {
		cout <<"Abilities of Vlogger:\n";
		cook();
		createRecipe();
		recordVideo();
		editContent();
	}
};


int main() {
	Vlogger vlog1;
	vlog1.displayAbilities();
}
