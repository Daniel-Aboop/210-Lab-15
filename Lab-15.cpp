#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;
class Movie{
private:
    string name;
    int year;
    string Screenname;

public:
    void setname(string a){ name=a;}
    void setyear(int y){year=y;}
    void setscreenname(string n){Screenname=n;}
    string getname(){return name;}
    int getyear(){return year;}
    string getScreenname(){return Screenname;}  
};


int main(){
    vector<Movie> Movies;
    string filepath;
    fstream file;
    while(true){
    cout<<"Enter File Path:"<<endl;
    getline(cin,file);    

    }
    return 1;
}
