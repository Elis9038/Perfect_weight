#include "iostream"
#include "string"

#define TOLERANTS 0.10
using namespace std;


int main()
{
    signed short int idealWeight;
    char gender;
    unsigned short int height;
    float realWeight;

    cout << "Are you male or female? Type M or F:" << endl;
    cin >> gender;

    cout << "Hello user \n" << "What is your heigth in cm? " << endl;
    cin >> height;

    cout << "What is your weight in kg? " << endl;
    cin >> realWeight;


    if (gender == 'F') idealWeight = height * height * 0.00222;
    else idealWeight = height * height * 0.00227;

    cout << "idealWeight value is " << idealWeight << endl;


    float minWeight = idealWeight * (1.0 - TOLERANTS) ;
    float maxWeight = idealWeight * (1.0 + TOLERANTS );

    cout << "ideal weight shall be {" <<minWeight << " - "<< maxWeight <<"} kg\n";


    if (realWeight < minWeight) {
        cout << "You're under ideal weight" << endl;
    }
    if ( (realWeight > minWeight) && (realWeight < maxWeight )){
         cout << "You have ideal weight" << endl;
    }
    if (realWeight > maxWeight) {
         cout << "You're above ideal weight" << endl;
    }



    return 0;

}
