#include<iostream>
using namespace std;

int main()
{
	//Decryption
	string text;
	int numkey=0;

	cout << "Enter a ciphertext: ";
	getline(cin , text);
	cout<<"\n Enter your desire number key: ";
	cin>>numkey;
	
	for(int count = 0; count < text.length() ; count++)
	{
		if(isalpha(text[count]))
		{
			for(int i = 1 ; i <= 3 ; i++)
			{
				if(text[count] == 'a')
					text[count] = 'z';
				else
					--text[count];
			}
		}
	}
	cout << "\n\aEquivalent plaintext: " << text << endl;
	
	
	
	
	
	return 0;
}
