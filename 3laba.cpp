#include <iostream>
#include <time.h>

using namespace std;
//extern "C" void _start(unsigned int**arr, unsigned int n);

int main()
{
    srand((unsigned int)time(0));
    unsigned int n=rand()%5+1;
    unsigned int mass[n][n],i,j;
    cout<<"n = "<<n<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mass[i][j]=rand()%8+1;
        }
    }
    cout<<"Исходная матрица:"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<mass[i][j]<<" ";
        }
        cout<<endl;
    }


    //транспонирование
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            unsigned int tmp=mass[i][j];
            mass[i][j]=mass[j][i];
            mass[j][i]=tmp;
        }
    }
    



    cout<<"\nТранспонированная матрица:"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<mass[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
