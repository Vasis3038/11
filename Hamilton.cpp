#include <iostream>
#include <vector>
using namespace std;

int f(int a,int b, int* M[])
{
if ((M[a][b]==0)&&(M[b][a]==0))
return 0;
if ((M[a][b]!=0)&&(M[b][a]!=0))
return 1;
}
void swap_string(vector<int> Vec,int a,int b)
{
for (int g=0 ; g<b-a;g++)
swap(Vec.at(g),Vec.at(a-g));
}

int main() {

int n, d;
cin>>d>>n;
int M[n][n];
for (int i=0;i<n;i++)
{
for (int j=0;j<n;j++)
{
cin>>d>>M[i][j];
}
}
vector<int> Vec;
int kolvo=n-1;
while(kolvo)
{
 if (f(Vec.at(0),Vec.at(1), &M)!=0)
{
while((f(Vec.at(0),Vec.at(i))!=0)&&(f(Vec.at(1), Vec.at(i+1))!=0))
i++;
}
swap_string(Vec,1,i);
Vec.push_back(Vec.top());
Vec.pop();
kolvo--;
}
}
