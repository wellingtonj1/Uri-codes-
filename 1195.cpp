#include <iostream>

using namespace std;

void ordena(int *arvi,int quantinumarv)
{
    int temp=0;
    int arvori[quantinumarv];
    for(int a=0;a<quantinumarv;a++)
    {
        arvori[a]=arvi[a];
    }
    for(int menor=0;menor<quantinumarv;menor++)
    {
        for(int nex=menor+1;nex<quantinumarv;nex++)
        {
            if(arvori[menor]>arvori[nex])
            {
                temp=arvori[menor];
                arvori[menor]=arvori[nex];
                arvori[nex]=temp;
            }
        }
    }
    for(int ord=0;ord<quantinumarv;ord++)
    {
        cout<<arvori[ord]<<" ";
    }
}

int main()
{

    int casosdeteste,concluidos=1,p;
    cin>>casosdeteste;

    while(casosdeteste!=concluidos-1)
    {

        int quantinumarv;
        cin>>quantinumarv;

        int arvi[quantinumarv];

        for(int i=0;i<quantinumarv;i++)
        {
            cin>>arvi[i];
        }

        cout<<"Case "<<concluidos<<":\n";
        /*cout<<"Pre.: ";
        for(p=0;p<quantinumarv;p++)
        {
            cout<<arvi[p]<<" ";
        }*/

        cout<<"\nIn..: ";
        ordena(arvi,quantinumarv);

        concluidos++;
    }

}

