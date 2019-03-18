#include <iostream>

using namespace std;

int main()
{
    float valortotal;
    int valorreal,resto;
    cin>>valortotal;
    valorreal=valortotal;
    int valormoeda=100*(valortotal-valorreal);
    int vetreais[7]={100,50,20,10,5,2,1};
    int vetmoedas[5]={50,25,10,5,1};

    int contareais=0;
    int contamoedas=0;

    cout<<"NOTAS:"<<endl;
    for(int i=0;i<7;i++)
    {
        contareais=valorreal/vetreais[i];
        resto=contareais*vetreais[i];
        valorreal=valorreal-resto;
        if(i!=6)
        {
            cout<<contareais<<" nota(s) de R$ "<<vetreais[i]<<".00"<<endl;
        }
        else
        {
            cout<<"MOEDAS:"<<endl;
            cout<<contareais<<" moeda(s) de R$ "<<vetreais[i]<<".00"<<endl;
        }
    }
    for(int x=0;x<5;x++)
    {
        contamoedas=valormoeda/vetmoedas[x];
        resto=contamoedas*vetmoedas[x];
        valormoeda=valormoeda-resto;

        cout<<contamoedas<<" moeda(s) de R$ 0."<<vetmoedas[x]<<endl;
    }

}
