#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool buscaigual(int mat1[][2],int ligas,int at,int nex)
{
    int p=0,q=0;
    for(p=0;p<ligas;p++)
    {
        for(q=0;q<2;q++)
        {
            if((mat1[p][q]==at && mat1[p][q+1]==nex)||mat1[q][p]==at&&mat1[q+1][p]==nex)
            {
                return true;
            }
        }
    }
    return false;

}

int main()
{
    int primeiro,ligacoes,tamanho,vertis,x,y,i,j,aux,coloca,grafos,atual,proxcompa,final,conts;
    final=0;
    cin>>grafos;

    int contador=0;
    conts=0;
    while(final!=grafos)
    {
        cin>>primeiro;
        cin>>vertis;
        cin>>ligacoes;
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

       /*for(i=0;i<tamanho;i++)
        {
            for(j=0;j<tamanho;j++)
            {
                cout<<mat[i][j]<<" ";
            }
                cout<<endl;
        }*/

       for(x=0;x<tamanho;x++)
       {
           for(y=0;y<tamanho;y++)
           {
                atual=conectados[x][y];
                proxcompa=conectados[x][y+1];
                if(buscaigual(conectados,ligacoes,atual,proxcompa)) //na lateral direita tem?
                {
                    cout<<"esse é igual == "<<conectados[x][y]<<" "<<conectados[x][y+1]<<endl;
                    contador++;
                }
           }
        }

       cout<<"\n\n"<<contador<<endl;
    }





}
