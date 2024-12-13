#include <iostream>
using namespace std;

void encrypt(){
string Cipher_Text , Plain_Text;
int key;
    cout<<"ENTER YOUR MESSAGE HERE (WITHOUT SPACES): "<<endl;
    cin>>Plain_Text;
    getline(cin,Plain_Text); // Used getline to read entire input
    for(int i=0;i<Plain_Text.size();i++){
    	if(Plain_Text[i]==' '){
    		cout<<"INCORRECT INPUT: MESSAGE CONTAINS SPACES"<<endl;
    		return;
		}
	}
    
    cout<<"ENTER KEY (1-25): "<< endl;
    cin>>key;
    	if(key<1 || key>25){
    		cout<<"INCORRECT INPUT!ENTER KEY (1-25)"<<endl;
    		cout<<endl;
    		cout<<endl;
    		return;
		}
	
    
    for(int i=0;i<Plain_Text.size();i++){
        Cipher_Text+=(Plain_Text[i]-'A'+key)%26+'A';
    }
    cout <<"ENCRYPTED TEXT IS: "<<Cipher_Text<<endl;
}

void decrypt (){
string Plain_Text , Cipher_Text;
int key;
    cout<<"ENTER YOUR ENCRYPTED MESSAGE HERE (WITHOUT SPACES): "<<endl;
    cin>>Cipher_Text;
    getline(cin,Plain_Text);
    for(int i=0;i<Plain_Text.size();i++){
    	if(Plain_Text[i]==' '){
    		cout<<"INCORRECT INPUT: MESSAGE CONTAINS SPACES"<<endl;
    		return;
		}
	}
   
    cout<<"ENTER KEY (1-25): "<<endl;
    cin>>key;
    	if(key<1 || key>25){
    		cout<<"INCORRECT INPUT!ENTER KEY (1-25)"<<endl;
    		cout<<endl;
    		cout<<endl;
    		return;
		}
    for(int i=0;i<Cipher_Text.size();i++){
        Plain_Text+=(Cipher_Text[i]-'A'-key)%26+'A';
    }
    cout <<"YOUR MESSAGE TEXT IS: "<<Plain_Text << endl;
}	


int main (){
	//string Plain_Text,Cipher_Text;
	int key,menu;
	cout << "==============================================="<< endl;
	cout << "W E L C O M E   T O   C A E S A R   C I P H E R"<< endl;
	cout << "==============================================="<< endl;
	do {
	cout << "PRESS 1 TO ENCRYPT YOUR MESSAGE: " << endl << "PRESS 2 TO DECRYPT YOUR MESSAGE: " << endl << "PRESS 3 TO EXIT: " << endl;
	cin >> menu;
	
	switch (menu){
	
	case 1: encrypt();
	    break;
	    cout<<endl;
	case 2 : decrypt();
	    cout<<endl;
	    break;
	case 3 :
		cout<<"THANKYOU FOR USING CAESAR CIPHER PROGRAM!"<<endl;
	    break;   
	default :
		cout<<"WRONG CHOICE...."<<endl;
		break;
	}
}
	while (menu != 3);	
   
}
