#include <iostream>
using namespace std;
int main(){
	//check this is alphabet or not using vowel
	char c;
	bool isLowercaseVowel, isUppercaseVowel;
	 cout<<"Enter the alphabet :"<<endl;
	 cin>>c;
	 // evaluates to 1 (true) if c is a lowercase vowel
	 isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	 
	  // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;

}
