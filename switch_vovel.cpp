#include <iostream>
#include <string>
using namespace std;


int main(){

	char ch;
	cout<<"Enter the character";
	cin>> ch;
	switch(ch){
	case'a':{
			cout<<"Vovel\n";
		break;

        	}
	case'e':{
              cout<<"Vovel\n";
              break;
              
           }
    case'i':{
              cout<<"Vovel\n";
              break;
              
           }
    case'o':{
              cout<<"Vovel\n";
              break;
              
           }
    case'u':{
              cout<<"Vovel\n";
              break;
              
            }
    default:
        cout<<"consonant\n";
        
	}

	return 0;
   }
