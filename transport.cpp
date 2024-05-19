
#include  <iostream>

using namespace std;

int main() {


 float money;
 
cout << "what is your budjet for transportation?" << endl;
cin >> money;

if (money < 0){ 

    cout << "invalid input" << endl;
}

else if (money >= 350.93){

cout << "the transportation methods avaliable to you are:" << endl;
cout << "Airplane - $350.93" << endl;
cout << "Train - $240.66" << endl;
cout << "Bus - $175.25" << endl;

}
else if (money >= 240.66){

cout << "the transportation methods avaliable to you are:" << endl;
cout << "Train - $240.66" << endl;
cout << "Bus - $175.25" << endl;

}

else if (money >= 175.25){

cout << "the transportation methods avaliable to you are:" << endl;
cout << "Bus - $175.25" << endl;

}

else if (money < 175.25){

cout << "Sorry, there is no transportation method that works with your budget" << endl;

}

return 0;



}