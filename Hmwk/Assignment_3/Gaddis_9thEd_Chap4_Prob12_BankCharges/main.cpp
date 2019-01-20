/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 17, 2019, 6:52 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float a,c,m,low,n;
    m=10.00;
    low=15.00;       
    n=0.00;
       cout<<"Monthly Bank Fees\n"
<<"Input Current Bank Balance and Number of Checks\n";
cin>> a>> c;
cout<<fixed<<setprecision(2)<<fixed;


if (c>=60&&a>0&&a<400) {
    cout<<"Balance     $   "<<a<<endl;
    cout<<"Check Fee   $     "<<c*0.04<<endl;
    cout<<"Monthly Fee $    "<<m<<endl;
    cout<<"Low Balance $    "<<low<<endl;
    cout<<"New Balance $    "<<a-(m+low+(c*0.04));
    
    
} else if (c>=40&&c<=59&&a>0&&a<400) {
    cout<<"Balance     $   "<<a<<endl;
    cout<<"Check Fee   $     "<<c*0.06<<endl;
    cout<<"Monthly Fee $    "<<m<<endl;
    cout<<"Low Balance $    "<<low<<endl;
    cout<<"New Balance $    "<<a-(m+low+(c*0.06));
    
    
}else if (c>=20&&c<=39&&a>0&&a<400) {
    cout<<"Balance     $   "<<a<<endl;
    cout<<"Check Fee   $     "<<c*0.08<<endl;
    cout<<"Monthly Fee $    "<<m<<endl;
    cout<<"Low Balance $    "<<low<<endl;
    cout<<"New Balance $    "<<a-(m+low+(c*0.08));
    
    
} else if (c<20&&c>0&&a>0&&a<400) {
    cout<<"Balance     $   "<<a<<endl;
    cout<<"Check Fee   $     "<<c*0.10<<endl;
    cout<<"Monthly Fee $    "<<m<<endl;
    cout<<"Low Balance $    "<<low<<endl;
    cout<<"New Balance $    "<<a-(m+low+(c*0.10));
    
    
} else if (a<0){
    cout<<"Urgent Message!\n";
    cout<<"Your account is overdrawn";
} else if (c<0){
    cout<<"Cannot accept a negative value for the number of checks\n";
} else if (c>=60&&a>=400) {
    cout<<"Balance     $   "<<a<<endl;
    cout<<"Check Fee   $     "<<c*0.04<<endl;
    cout<<"Monthly Fee $    "<<m<<endl;
    cout<<"Low Balance $    "<<n<<endl;
    cout<<"New Balance $    "<<a-(m+(c*0.04));
    
    
} else if (c>=40&&c<=59&&a>=400) {
    cout<<"Balance     $   "<<a<<endl;
    cout<<"Check Fee   $     "<<c*0.06<<endl;
    cout<<"Monthly Fee $    "<<m<<endl;
    cout<<"Low Balance $    "<<n<<endl;
    cout<<"New Balance $    "<<a-(m+(c*0.06));
    
    
}else if (c>=20&&c<=39&&a>=400) {
    cout<<"Balance     $   "<<a<<endl;
    cout<<"Check Fee   $     "<<c*0.08<<endl;
    cout<<"Monthly Fee $    "<<m<<endl;
    cout<<"Low Balance $    "<<n<<endl;
    cout<<"New Balance $    "<<a-(m+(c*0.08));
    
    
} else if (c<20&&c>0&&a>=400) {
    cout<<"Balance     $   "<<a<<endl;
    cout<<"Check Fee   $     "<<c*0.10<<endl;
    cout<<"Monthly Fee $    "<<m<<endl;
    cout<<"Low Balance $    "<<n<<endl;
    cout<<"New Balance $    "<<a-(m+(c*0.10));
    
    
}
    
    return 0;
}

