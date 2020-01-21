//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>

using namespace std;

int age , height , estate;

void getAge(){
    cout << "Please insert Age: ";
    cin >> age;
}

void getHeight(){
    cout << "Please insert height: "; 
    cin >> height;    
}

void getEstate(){
       cout << "Please insert estate: ";
       cin >> estate;
}

int main(){
    string status;
    getAge();
    if(age <= 20){
        getHeight();
        if(height < 160){
            status = "UNFRIEND";
        }else if(height < 175){
            status = "FRIEND";
        }else{
            getEstate();
            if(estate > 69000000){
                status = "MARRIED";
            }else{
                status = "ONE-NIGHT-STAND";
            }
        }
    }else if(age < 30){
        getEstate();
        if(estate > 10000000){
            status = "BEST FRIEND";
        }else{
            status = "UNFRIEND";
        }
    }else{
        status = "UNFRIEND";
    }
    cout << "Your status : " << status;
}