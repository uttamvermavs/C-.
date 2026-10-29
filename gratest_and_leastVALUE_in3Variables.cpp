// #include<iostream>
// using namespace std;
// int main(){
//     int a ,b , c ;
//     cout<<"enter a ";
//     cin>>a;
//      cout<<"enter b ";
//     cin>>b;
//      cout<<"enter c ";
//     cin>>c;

//     if(a>b){
//         if(a>c){
//             cout<<"a is greatest" ;
//         }
//     else {
//         cout<< " c is greatest ";
//     }
// }
//     else {
//         if (b>c){
//             cout<<"b is greatest";
//  }
        
//         else {
//             cout<<"c is greatest";
//        }
//     }

// }
        
                // least value !

#include<iostream>
using namespace std;
int main(){
    int a ,b , c ;
    cout<<"enter a: ";
    cin>>a;
     cout<<"enter b: ";
    cin>>b;
     cout<<"enter c: ";
    cin>>c;

if(c<b){
    if(c<a){
        cout<<" c is least value";
    }
    else{
        cout<< " a is least value";

    }

}
else {
    
    if (b<a){
            cout<< " b is least ";
        }
    
    else {
        cout<<"a is least";
    }
}

}