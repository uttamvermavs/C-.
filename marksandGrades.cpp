#include<iostream>
using namespace std;
 int main (){

    cout<<"enter marks ";
    int a ;
    cin>> a;
    //METHOD 1 : by only If Statement !
  
// if(a>=91 && a<=100){
//         cout<<a<<endl<<" Excellent";
// }
// if(a>=81 && a<=90){
//         cout<<a<<endl<<" Very Good";
// }
// if(a>=71&& a<=80){
//         cout<<a<<endl<<" good";
// }
// if(a>=61 && a<=70){
//         cout<<a<<endl<<" can do better";
// }
// if(a>=51 && a<=60){
//         cout<<a<<endl<<" Average";
// }
// if(a>=41 && a<=50){
//         cout<<a<<endl<<" below average";
// }
// if(a<=40 ){
//         cout<<a<<" fail";
// }


// METHOD 2 if Else Ladder !!
  
// if(a>=91){
//    cout<<"Excellnt";
// }
// else{
//    if(a>=81){
//       cout<<"Very Good";
//    }
//    else{
//    if(a>=71){
//       cout<<"Good";
//    }
  
//    else{
//    if(a>=61)
//       cout<<"Can Do Better";
   

//    else{
//    if(a>=51){
//       cout<<"Average";
// }
  
//    else{
//    if(a>=41){
//       cout<<"Below Average";
//    }
//       else{
//       cout<<"fail";
//    }
   
   
   
  
// }
//    }
//       }
//          }
//             }
//                

// METHOF 3  Use of ELSE-IF !!!

if(a>=91){
   cout<<"Excellent";
}
else if (a>=81){
   cout<<"Very Good ";
}
else if (a>=71){
   cout<<" Good ";
}
else if (a>=61){
   cout<<"Can do Better";
}
else if (a>=51){
   cout<<"Average";
}
else if (a>=41){
   cout<<"Below Average";
}
else {
   cout<<"fail";
}
   }
