/*
Kevin Huang
Dec 1st, 2025
Homework 10
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void readFileDisplay(string filename){
    ifstream fin(filename);
    if (!fin) {
        cout<<"Error: Cannot open file."<<endl;
        return;
    }

    string line;
    while(getline(fin, line)){
        cout<<line<<endl;
    }

    fin.close();
}


int countWords(string filename) {
    ifstream fin(filename);
    if (!fin){
        cout<<"Error: Cannot open file."<<endl;
        return 0;
    }

    string word;
    int count = 0;

    while(fin>>word){
        count++;
    }

    fin.close();
    return count;
}

void writeWordCount(string studentName, int totalWords){
    ofstream fout("wordcounts.txt");

    fout<<studentName<<endl;
    fout<<"\nTotal number of words: "<<totalWords<<endl;

    fout.close();
}


int countEarth(string filename){
    ifstream fin(filename);
    if (!fin){
        cout<<"Error: Cannot open file."<<endl;
        return 0;
    }

    string word;
    int count = 0;

    while(fin>>word){
        if (word == "Earth" || word == "Earth," || word == "Earth.")
            count++;
    }

    fin.close();
    return count;
}

void appendEarthCount(int earthCount){
    ofstream fout("wordcounts.txt", ios::app);

    fout<<"\nThe word 'Earth' appears "<<earthCount<<"times in the document."<<endl;

    fout.close();
}


int main() {
    string filename = "Remembering_Earth.txt";
    string studentName = "Kevin Huang";   

    cout<<"---- FILE CONTENT ----"<<endl;
    readFileDisplay(filename);

    cout<<"\n---- WORD COUNT ----"<<endl;
    int totalWords = countWords(filename);
    cout<<"Total words: "<<totalWords<<endl;

    writeWordCount(studentName, totalWords);

    cout<<"\n---- COUNTING 'Earth' ----"<<endl;
    int earthCount = countEarth(filename);
    cout<<"Earth appears "<<earthCount<<" times."<<endl;

    appendEarthCount(earthCount);

    cout<<"\nResults written to wordcounts.txt"<<endl;

    return 0;
}