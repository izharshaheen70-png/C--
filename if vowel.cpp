#include <iostream>
using namespace std;
int main(){
    for(int j=0;j<5;j++){
    char alp;
    char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0;i<10;i++){
    cout<<vowel[i]<<endl;
    }

    cout<<"enter alpahbet =";
    cin>>alp;
    for(int i=0;i<10;i++){
   if(alp==vowel[i]){
    cout<<"it is vowel";
    return 0;
   }
   else{
    cout<<"it is not vowel";
    return 0;
   }
}
}
return 0;
}