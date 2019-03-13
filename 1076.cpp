#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

/*bool buscaigual(int mat1[][2],int ligas,int at,int nex)
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

}*/

int main()
{
    int primeiro,ligacoes,tamanho,vertis,x,y,i,j,aux,coloca,grafos,atual,proxcompa,final,conts,var1,var2;
    final=0;
    cin>>grafos;

    int contador=0;
    conts=0;
    var1=var2=0;
    tamanho=1;
    while(var1<tamanho)
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
       if(var2<tamanho)
       {
           atual=conectados[var1][var2];
           proxcompa=conectados[var1][var2+1];
       }
       else
       {
           var1++;
           var2=0;
           atual=conectados[var1][var2];
           proxcompa=conectados[var1][var2+1];
       }
       for(x=0;x<tamanho;x++)
       {
           for(y=0;y<tamanho;y++)
           {
                if((conectados[x][y]==atual&&conectados[x][y+1]==proxcompa) || (conectados[y][x]==atual&&conectados[y][x+1]==proxcompa))
                {
                    cout<<"esse é igual == "<<conectados[x][y]<<" "<<conectados[x][y+1]<<endl;
                    contador++;
                }
           }
        }


    }

    cout<<"\n\n"<<contador*2<<endl;



}
