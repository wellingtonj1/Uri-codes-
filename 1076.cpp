#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

#define true 1;
#define false 0;

int buscaigual(int mat1[][2],int ligas)
{
    int p=0,q=0;
    int i,y;
    i=y=0;
    int iguais=0;

    while(i<ligas)
    {
        for(p=0;p<ligas;p++)
        {
            for(q=0;q<2;q++)
            {
                if(mat1[p][q]==mat1[i][y])
                {
                    iguais++;
                }
            }
        }
        y++;
        if(y>=2)
        {
            y=0;
            i++;
        }
    }
    return iguais;
}

int main()
{
    int valorverti=0,ligacoes=0,quantivoltas=0,contador=0,temporario;
    cin>>quantivoltas;
    int armazen[quantivoltas];

    while(quantivoltas!=contador)
    {
        cin>>temporario;
        cin>>temporario;

        cin>>ligacoes;
        int matpadentro[ligacoes][2];

        for(int i=0;i<ligacoes;i++)
        {
            for(int y=0;y<2;y++)
            {
                cin>>matpadentro[i][y];
            }
        }

        cout<<"\n\n"<<buscaigual(matpadentro,ligacoes)<<endl;

        contador++;
    }


}
