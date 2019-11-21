#include <iostream>
#include<cstring>
using namespace std;

int main()
{char name[30];
int decision=1,k,l,q;
while (decision==1)
    {cout << "ENTER THE WORD THAT YOU WANT TO TEST" << endl;
    cin>>name;
     l=strlen(name);
     q=l-1;
for (int i=0;i<l; i++)
    {if (int(name[i])==int(name[q-i]))
            k=1;
     else
            k=0;}
if(k==1)
        cout<<"YES U HAVE ENTERED A MIRROR IMAGE WORD"<<endl;
else     cout<<"WORD ENTERED IS NOT A MIRROR WORD "<<endl;
    cout<<"press 1 if you want to test for another word else press any other key to exit"<<endl;
    cin>>decision;}
    return 0;
}
