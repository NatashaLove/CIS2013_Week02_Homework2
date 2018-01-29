#include <iostream>
using namespace std;

int main () {
int count = 99;
while (count > 1){
cout << count << " bottles of beer on the wall, "
 << count-- << " bottles of beer. " << endl;
cout << " Take one down and pass it around, "
 << count << " bottles of beer on the wall. "<< endl;
}

cout << "1 bottle of beer on the wall, 1 bottle of beer." << endl;
cout << "Take one down and pass it around, no more bottles of beer on the wall." << endl;

cout << "No more bottles of beer on the wall, no more bottles of beer." << endl;
cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
	
return 0;

}
