#include <iostream>
#include <vector>
#include <string>

using namespace std;


void convertir(vector<string> texto)
{
    bool variable = false;
    bool cambiado = false;
    for(int i = 0; i<texto.size();i++)
    {
        for(int j = 0; j<texto[i].size();j++)
        {
            if(texto[i][j]=='\"')
            {
                if(!variable)
                {
                    texto[i][j] = '`';
                    cout<<texto[i][j];
                    cout<<texto[i][j];
                }
                else
                {
                    texto[i][j] = '\'';
                    cout<<texto[i][j];
                    cout<<texto[i][j];
                }
                variable = !variable;
                cambiado = !cambiado;

            }else{

                cout<<texto[i][j];
            }

        }
        if(i != texto.size()-1){
            cout<<"\n";
            
        }
    }
}

int main() {
    vector<string> input;
    string texto = "aa";
    while(texto!=""){
        getline(cin, texto);
        input.push_back(texto);
    }
    convertir(input);

    return 0;
}
