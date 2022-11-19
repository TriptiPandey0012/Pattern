// 54321
// 5432
// 543
// 54
// 5





#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
     
    
    for(i=1;i<=n;i++){
        for(j=5;j>=i;j--){
        
        cout<<j;
    
    
        }
        
        cout<<endl;
    }
    
    return 0;
}
