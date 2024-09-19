#include <iostream>  
 
#include <ctime>

#include <string>
/* if you want make a function, how you would start ??? */


using namespace std; 

/* now it is not empty */
void printTimeWithMessage(const string& customMessage) {

time_t tt;

tm*ti;

time(&tt);

ti = localtime(&tt);

string formattedTime = asctime(ti);

formattedTime.pop_back();

cout << "[" << formattedTime << "]" << customMessage << endl;

} 
/* ???? */
int main()
{
    /* when u use function u just call the name and the parameters ?>?????? */
    //DONE? run the app ??
    // I DID can u see the termina  run again ?????
// i did
    printTimeWithMessage/* <- this is the name and this is the parameters -> */   ("your custom message goes here.");
    // try and run the code there is error , you check errors like this, from the terminal bellow, good// 

     // where to write my msg ? in the display termenal after i run the code? u will see the msg bellow, but seems u have errors 
    return 0;
}