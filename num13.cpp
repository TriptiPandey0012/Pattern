
// 5
// 45
// 345
// 2345
// 12345





#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
     int count=1;
    
    for(i=5;i>=1;i--){
        for(j=i;j<=n;j++){
        
        cout<<j;
    
    
        }
        
        cout<<endl;
    }
    
    return 0;
}



