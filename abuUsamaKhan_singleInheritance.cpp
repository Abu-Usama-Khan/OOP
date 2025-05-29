#include <iostream>
#include <string>
using namespace std;

class Book{
protected:
	string title;
	string author;
	string isbn;
};

class Novel : public Book{
private:
	string genre;
	int chapterCount;
	
public:
	//Constructor empty
	Novel() {
		
	}
	
	//Parameterized Constructor
	Novel(string title, string author, string isbn, string genre, int chCount) {
		this->title=title;
		this->author=author;
		this->isbn=isbn;
		this->genre=genre;
		this->chapterCount=chCount;
	}
	
	//Setter Functions
	void setTitle (string title) {
		this->title=title;
	}
	
	void setAuthor (string author) {
		this->author=author;
	}
	
	void setIsbn (string isbn) {
		this->isbn=isbn;
	}
	
	void setGenre (string genre) {
		this->genre=genre;
	}
	
	void setChapterCount (int chCount) {
		this->chapterCount=chCount;
	}
	
	//Display Function
	void getInfo() {
		cout <<"\nBook Info:\n";
		cout <<"Title: " <<this->title <<endl;
		cout <<"Author: " <<this->author <<endl;
		cout <<"ISBN: " <<this->isbn <<endl;
		cout <<"Genre: " <<this->genre <<endl;
		cout <<"Chapter Count: " <<chapterCount <<endl;
	}
};


int main() {
	Novel nov1=Novel("Tales from Sheikspear", "Shekspear", "ISBN9289829892", "Action", 6);
	nov1.getInfo();
	nov1.setGenre("Thriller");
	nov1.getInfo();
}
