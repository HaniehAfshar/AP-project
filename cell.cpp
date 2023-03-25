#include <iostream>
using namespace std;

class genome{

    struct {
        string rna;
        string mokamel;
    }dna;

    public:

    void dna_set(string _rna, string _mokamel){
        dna.rna = _rna;
        dna.mokamel = _mokamel;
    }

    void dna_make(string _rna){
        dna.rna = _rna;
        dna.mokamel = mokamel_giri();
    }

    // mokemel har character
    char mokamel(char c){
        if (c=='A')
            return 'T' ;
        else if (c=='T')
            return 'A' ;
        else if (c=='C')
            return 'G' ;
        else if (c=='G')
            return 'C' ;
        else
            return '!';
    }

    //mokamel kol gen
    string mokamel_giri(){
        string ans;
        int i=0;
        while (dna.rna[i] != '\0'){
            ans += mokamel(dna.rna[i]);
            i++;
        }
        return ans;
    }

};


int main(){

    genome gen;
    string rna;
    cin>>rna;
    gen.rna_set(rna);
    char response;
    cout<<"Aya mokamel RNA ra dar dast darid?[Y/N] : "; cin>>response;
    if (response=='Y'){
        string mokamel;
        cout<<endl<<"Rna: ";cin>>rna;
        cout<<endl<<"Mokamel: ";cin>>mokamel;
        gen.dna_set(rna,mokamel);
    }

    else if (response == 'N'){
        cout<<endl<<"Rna: ";cin>>rna;
        gen.dna_make(rna);
    }

    else{
        cout<<endl<<"Invalid input";
        break;
    }

    return 0;
}
