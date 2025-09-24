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
void printMovie(const vector<Movie>& M){

}

int main(){
    vector<Movie> Movies;
    string filepath;
    
    while(true){
        cout<<"Enter File Path(Enter X to close):"<<endl;
        getline(cin,filepath);    
        ifstream file(filepath);
        if(filepath=="X"){
            break;
        }
        if(!file){
            cout<<"Error opening file, please try again"<<endl;
        }
        else{
            cout<<"File Opened! inputing data now...."<<endl;
            for(int i=0;i<file.)


        }
    }

    return 1;
}
