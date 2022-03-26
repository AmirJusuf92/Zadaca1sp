#include "radnik.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
radnik Radnik;
//geteri
vector<radnik> radnici;
//eksperimentalno
string ime , prezime , brojtel, plata , staz , godine;
vector<string>Ime;
vector<string>Prezime;
vector<string>Broj;
vector<int> Godine;
vector<double>Plata;
vector<int>Staz;

    int main ()
    {
        ifstream outputAcme("acme.txt");
        if (!outputAcme.is_open())
        {
            cout<<"file nije otvoren"<<endl;
        }
        else
        {
            cout<<"file je otvoren"<<endl;
            string line;
            getline(outputAcme , line);
            while (!outputAcme.eof())
            {
                getline(outputAcme , ime , ',');
                Ime.push_back(ime);
                getline(outputAcme , prezime , ',');
                Prezime.push_back(prezime);
                getline(outputAcme , godine , ',');
                Godine.push_back(stoi(godine));
                getline(outputAcme , staz , ',');
                Staz.push_back(stoi(staz));
                getline(outputAcme , plata , ',');
                Plata.push_back(stod(plata));
                getline(outputAcme , brojtel , '\n');
                Broj.push_back(brojtel);
                
            }
        
           
          
           
        }
         outputAcme.close();
           cout<<Ime.size()<<endl;
           ifstream outputGlobex("globex.txt");
        if (!outputGlobex.is_open())
        {
            cout<<"Globex file nije otvoren"<<endl;
        }
        else
        {
            cout<<"Globex file je otvoren"<<endl;
            string line;
            getline(outputGlobex , line);
            while (!outputGlobex.eof())
            {
                getline(outputGlobex , ime , ',');
                Ime.push_back(ime);
                getline(outputGlobex , prezime , ',');
                Prezime.push_back(prezime);
                getline(outputGlobex , godine , ',');
                Godine.push_back(stoi(godine));
                getline(outputGlobex , staz , ',');
                Staz.push_back(stoi(staz));
                getline(outputGlobex , plata , ',');
                Plata.push_back(stod(plata));
                getline(outputGlobex , brojtel );
                Broj.push_back(brojtel);
                
            }
        
           
          
           
        }
         outputGlobex.close();
         cout<<Ime.size()<<endl;

        //ispis calova vektora u nekom formatu
       
        
           /* int j = Ime.size();
            //for each petlja
            cout<<"ime prezime godine staz plata broj"<<endl;
            for (int a = 0; a<j; a++)
            {
                cout<<Ime[a]<<","<<Prezime[a]<<","<<Godine[a]<<","<<Staz[a]<<","<<Plata[a]<<","<<Broj[a]<<endl;
            }*/
            
       //                   Test korporacije bez sortiranja
       ofstream testKorp("testKorp.txt");
        for (int a = 0; a < Ime.size(); ++a){
            testKorp<<Ime[a]<<","<<Prezime[a]<<","<<Godine[a]<<","<<Staz[a]<<","<<Plata[a]<<","<<Broj[a]<<'\n';
        }
        testKorp.close();
        
    }