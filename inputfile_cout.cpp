#include<fstream>
#include<string>
#include<iostream>

using namespace std;
/*
int main(){

    string filename="C:\\Users\\HeJunyi\\Desktop\\新建文件夹 (4)\\fastq\\kmerseq_label.txt";
    ifstream fin(filename.c_str());
    int index = 0;
    string strline;
    while (getline(fin, strline) && index < 20){
        cout << strline << "\n";
        index++;
    }
    fin.close();
    cout << "Done!\n";
    return 0;
}
*/
int main(){
    string filename="C:\\Users\\HeJunyi\\Desktop\\新建文件夹 (4)\\fastq\\kmerseq_label.txt";
    ifstream fin(filename.c_str());
    string strline;
    for( ; ; ){
        getline(fin, strline);
        if(fin.eof()) break;
        cout << strline << "\n";
    }
    fin.close();
    cout << "Done!\n";
    return 0;
}