#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    int primeiro,ligacoes,tamanho,vertis,x,y,i,j,aux,coloca;
    cin>>primeiro;
    cin>>vertis;
    cin>>ligacoes;

    bool leutudo=false;

    tamanho=sqrt(vertis);
    int mat[tamanho][tamanho];
    int conectados[ligacoes][2];

    for(i=0;i<ligacoes;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>conectados[i][j];
        }
    }

    coloca=0;
    for(i=0;i<tamanho;i++)
    {
        for(j=0;j<tamanho;j++)
        {
            mat[i][j]=coloca;
            coloca++;
        }
    }

    for(i=0;i<tamanho;i++)
    {
        for(j=0;j<tamanho;j++)
        {
            cout<<mat[i][j]<<" ";
        }
            cout<<endl;
    }

    while(leutudo!=false)
    {
        x=primeiro;
        y=primeiro;



    }


}
