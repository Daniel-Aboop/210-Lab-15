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
//  C:\\Users\\hope4\\Desktop\\COMSC 210 Work\\210-Lab-15\\input.txt
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
                

            }


        }
    }

    return 1;
}
