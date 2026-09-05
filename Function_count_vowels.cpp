# include <iostream>
# include <string>
using namespace std;

int countVowel(string text){
    int count =0;
    for(char c:text){
        char lower=tolower(c);
        if(lower=='a'|| lower=='e'|| lower=='i' || lower=='o' || lower=='u'){
            count++;
            
        }
    }
    return count;
}

int main(){
    string text;
    cout<<"enter the word :\n";
    cin>> text;
    cout<<"Vowels count : "<<countVowel(text)<<"\n";
    return 0;
    
}
