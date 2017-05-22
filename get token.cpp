#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
using namespace std;
void readFile( string fileName );
bool usefulChar( char whatChar );
struct token{
	int kind;
	int number;
};
int main(){
    string fileName;
    cout << "fileName:";
    cin >> fileName;
    readFile( fileName );
    system("pause");
    return 0;
}

void readFile( string fileName ){
	fstream file;
	char whatChar;
	file.open("x86_input.txt" ,ios::in);
	getToken( file );

	
}

bool usefulChar( char whatChar ){
    if ( whatChar != '\t' && whatChar != ' ' && whatChar != '\n' )
	    return true;
	else
	    return false;		
	    
}

bool fourOrNot( char whatChar, int which4 ){
	fstream file;
	char check;
	int which = 1;
	file.open("Table4.txt", ios::in);
	while( !file.eof() ){
		file.get(check);
		if ( check == '\n' )
		    which++;
		    
		if ( check == whatChar ){
		    which4 = which;
		    return true;
		}    
	}
	return false;
	
}
		
void getToken( fstream file ){
	char whatChar;
	int which4;
	char exampleToken[50];
	int howlongToken = 0;
	file.get(whatChar);
	while( !usefulChar(whatChar) ){
		file.get( whatChar );
	}
	exampleToken[howlongToken] = whatChar;
	howlongToken++;
	while( usefulChar(whatChar) ){
		if ( fourOrNot( whatChar, which4 ) ) {
			int aToken[howlongToken];
			strncat(  )
		}
		exampleToken[howlongToken] = whatChar;
		file.get( whatChar );
		howlongToken++;
	}
	
}
