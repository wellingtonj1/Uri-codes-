#include <iostream>

using namespace std;

int main() {

    int valor,valor1,qt1,qt100,qt50,qt20,qt10,qt5,qt2;
    cin>>valor;
    
    while(valor1==valor)
    {
        if(valor>100)
        {
            valor1+=100;
            qt100++;
        }
        else if(valor>=50)
        {
            valor1+=50;
            qt50++;
        }
        else if(valor>=20)
        {
            valor1+=20;
            qt20++;
        }
        else if(valor>=10)
        {
            valor1+=10;
            qt10++;
        }
        else if(valor>=5)
        {
            valor1+=5;
            qt5++;
        }
        else if(valor>=2)
        {
            valor1+=2;
            qt2++;
        }
        else if(valor>=1)
        {
            valor1+=1;
            qt1++;
        }
    }
    cout<<valor<<"\n";
    cout<< qt100 <<" nota(s) de R$ 100,00 "<< endl;
    cout<< qt50 <<" nota(s) de R$ 50,00 "<< endl;
    cout<< qt20 <<" nota(s) de R$ 20,00 "<< endl;
    cout<< qt10 <<" nota(s) de R$ 10,00 "<< endl;
    cout<< qt5 <<" nota(s) de R$ 5,00 "<< endl;
    cout<< qt2 <<" nota(s) de R$ 2,00 "<< endl;
    cout<< qt1 <<" nota(s) de R$ 1,00"<< endl;
    
}
