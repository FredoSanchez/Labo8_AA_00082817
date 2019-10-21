#include <iostream>

using namespace std;

void greedyActivitySelection(int s[], int f[], int n){
    int temp=0;
    cout<<temp<<" ";
    for(int j = 1; j<n; j++){
        if(s[j]>=f[temp]){
            cout<<j<<" ";
            temp=j;
        }
    }
}

int main()
{
    int s[]={0,1,0,3,4,3};
    int f[]={1,3,6,4,5,10};
    int size = sizeof(s)/sizeof(s[0]);
    
    greedyActivitySelection(s, f, size);

    return 0;
}
