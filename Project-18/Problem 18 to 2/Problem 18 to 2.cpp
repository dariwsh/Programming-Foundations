#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

string ReadText()
{
	string Text;
	cout << "Please enter Text?\n"; // Prompt the user for input.
	getline(cin, Text);              // Read an entire line from standard input.

	return Text; // Return the entered text.
}

string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i]  + EncryptionKey);
	}
	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}
int main()
{
	string Text = ReadText();
	const short EncryptionKey = 2; // Define a constant encryption key to be used for both encryption and decryption.
	string TextAfterEncryption, TextAfterDecryption;  // Variables to store the encrypted and decrypted text.

	TextAfterEncryption = EncryptText(Text, EncryptionKey);

	// Decrypt the text back to its original form using the same encryption key.
	TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

	// Display the original text.
	cout << "\nText Before Encryption : " << Text << endl;
	// Display the encrypted text.
	cout << "Text After Encryption  : " << TextAfterEncryption << endl;
	// Display the decrypted text.
	cout << "Text After Decryption  : " << TextAfterDecryption << endl;

	return 0;
}
