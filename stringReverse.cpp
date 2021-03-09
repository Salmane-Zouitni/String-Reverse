#include <iostream>

using namespace std;

int main(){

    // create a string variable to store our value
    string myString;
    cout<<"Enter a string :";
    // get the value from the user
    getline(cin,myString);
    cout<<"THe opposite of "<<myString <<" is : ";
    // return the reverse of the given string by it's array
    for(int i = myString.length(); i>=0 ; i--){
        cout<<myString[i];
    }
    cout<<endl;

    return 0;
}