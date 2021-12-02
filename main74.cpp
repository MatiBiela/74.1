#include <fstream>
#include <cstdlib>
#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

class file
{
        ifstream inFile;
        int ileHaselLiczbowych;
        
        public:
                file();
                ~file();
                void loop(); 
                bool isNumber(char number);
                bool isOnlyNumber(string data);
                void howManypasswords();
                void sort();
};


file::file()
{
        inFile.open("hasla.txt"); 
        if (!inFile.good())
        {
                cerr << "Blad - pliku nie da sie otworzyc!\n";
                exit(1);
        }
}

file::~file()
{
        inFile.close();
}


void file::loop()
{
        string data; 
        while (!inFile.eof()) 
        {
                inFile >> data;
                //cout << data << endl;
        }
}

bool file::isNumber(char number){
    if(isdigit(number)) {
        return true;
    } else return false;
}

bool file::isOnlyNumber(string data){
    int size = data.size();
    
    for(int i=0; i<size; i++){  //data.length
        if(isNumber(data[i] == false)){
            return false;
        } else {
            return false;
            ileHaselLiczbowych++;
        }
    }
}

void file::howManypasswords(){
	cout << "Liczba hasel zlozonych jedynie z znakow numerycznych to: " << ileHaselLiczbowych/2 << endl;
}

void file::sort(){
	int t[200];
	
	//for(int i=0; i<199; i++){
	//	for(int j=1; j<200; j++){
	//		
	//	}
	//}
}

int main()
{
        file f;
        f.loop();
		f.howManypasswords();
        return 0;
}
