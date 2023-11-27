//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string>

int main(){
    Library library;
    
    //ask for commands and execute
    string command;
    string bookName;

    while(cin >> command){
        if(command == "a"){
            cin >> bookName;
            if(library.addBook(bookName)){
                cout << "success" << endl;
            }else{
                cout << "failure" << endl;
            }
        }else if(command == "r"){
            cin >> bookName;
            if(library.removeBook(bookName)){
                cout << "success" << endl;
            }else{
                cout << "failure" << endl;
            }
        }else if(command == "p"){
            library.print();
        }else if(command == "q"){
            break;
        }else{
            cout << "invalid command" << endl;
        }
    }

    return 0;

}
