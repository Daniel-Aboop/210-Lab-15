// COMSC-210 | Lab 15 | Daniel Santisteban
// IDE used: VS Code

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
    // printMovie() takes a reference to a string array as to not make another array
    // uses the functions to print out from the getters.
void printMovie(vector<Movie>& M){
    cout<<"Printing Movies:"<<endl;
    for(int i=0;i<4;i++){
        cout<<"Movie: "<<M[i].getname()<<endl;
        cout<<"  Year released: "<<M[i].getyear()<<endl;
        cout<<"  Screenwriter: "<<M[i].getScreenname()<<endl;
        cout<<endl;
    }

}

int main(){
    vector<Movie> Movies;
    string filepath;
    Movie hold;
    while(true){
        cout<<"Enter File Path(Enter X to close):"<<endl;
        getline(cin,filepath);    
        ifstream file(filepath);
        if(!file){
            cout<<"Error opening file, please try again"<<endl;
        }
        else if(filepath=="X"){
            break;
        }
        else{
            cout<<"File Opened! inputing data now...."<<endl;
            for(int i=0;i<4;i++){
                string tempname;
                int tempyear;
                string tempsname;
                getline(file,tempsname);
                file>>tempyear;
                file.ignore();
                getline(file,tempname);
                hold.setname(tempname);
                hold.setscreenname(tempsname);
                hold.setyear(tempyear);
                Movies.push_back(hold);
            }
            break;
        }
    }
    if(!(Movies.size()==0)){
        printMovie(Movies);
    }

    return 1;
}
