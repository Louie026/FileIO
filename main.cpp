#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    int swapNumber=0;
    int x=0,y=0;
    int number[10000];
    string line;
    fstream myfile;
    myfile.open("data10k.txt");
    while(myfile.good())
    {
        getline(myfile,line);
        stringstream(line)>>number[y];
        y++;
    }
        for (y=0;y<10000;y++)
        {
            for(x=0;x<10000;x++)
            {
                if(number[y]<number[x])
                {
                    swapNumber=number[y];
                    number[y]=number[x];
                    number[x]=swapNumber;
                }
            }
        }

myfile.close();
for (y=0;y<10000;y++)
    {
        cout<<number[y]<<endl;
    }
    return 0;
}
