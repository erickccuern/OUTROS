#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;

int main(){
	int i,y,find = 0,atual,final;
	char sent[100];  	
	char m[3][3] = {{'0', '1', 'x'},{'0', 'x', '1'},{'x', '1', '0'}};		
	atual = 0;
	final = 1;	
	cout << "Digite sua sentenca usando somente 0 e 1: " << endl;
	cin >> sent;
	cout << "Sentenca digitada: " << sent << endl;
	i = 0;
	while(sent[i] != '\0'){
      find = 0;
      for(y = 0; y < 3; y++){
		if(m[atual][y] == sent[i]){
			atual = y;
            i++;
            y = 3;
            find = 1;
            }  
       }                
    }
    if(find == 0 ){
		i = '\0';
		}
  if(atual == final){
    cout << "Cadeia reconhecida" << endl;              
  }
  else{
      cout << "Cadeia nao reconhecida" << endl;
  }
  return 0;
}
