#include <iostream>//jest ok

using namespace std;
float oceny[5];
float suma=0;
float srednia;

int main()
{
    for(int i=0; i<5; i++)
    {
        cout<<"Podaj "<<i+1<< " ocene: "<<endl;
        cin>>oceny[i];

    }
    for(int i=0; i<5; i++)
    {   suma=suma+oceny[i];
        srednia=suma/(i+1);// dajemy +1 bo program liczy od 0
        cout<<"Suma ocen wynosi "<<suma<<endl;
        cout<<"Srednia wynosi "<<srednia<<endl;

        cout<<oceny[i]<<endl;
        cout<<endl;
    }
    return 0;
}
