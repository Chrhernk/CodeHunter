// CodeHunter.cpp : Defines the entry point for the console application.
//


//#include "pch.h" // compile error here, line is not needed, breaks this version of Visual, only available in 2017 version.

#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze;
	int foo = 0;
	int vowels = 0; // Vowel counter integer, A E I O U
	int consonants = 0; // consonant counter integer,  any letter that is not a Vowel
	int digits = 0; // int to count the numbers (1-9 presenting) in the sentence
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	int symbols = 0;
	int bar = 0;
	// FUBAR , an old WW2 term pronounced FOO + BAR, meaning "F***ed up beyond all Recoginition"
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{		// this loop analises one letter each pass.
			// this if look checks if the current letter is a vowel. 
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{	// if there is a vowel, it adds to this count.
			// todo: canidate for a fix
			// --vowels;
			++vowels;
			// this was --, now it is ++,adding to the count instead of subtracting. (Fixed)
		}
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{	// if there is a consonant, this will catch it
			// todo: uncomment this line
			++consonants;
			// was commented out, now is set to add to the value to the counter. (Fixed)
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
			// this adds to the digit counter, and tells how many numbers are in the sentence.
		}
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
			// counts the number of blank areas in a sentence
		}
		else if (textToAnalyze[i] == '.' || textToAnalyze[i] == '!' || textToAnalyze[i] == '?' || textToAnalyze[i] == ',')
		{
			// a counter for the periods, commas, and other endline markers!
			++symbols;
			// This is an addition to the program I made, to make the number of unknown characters less
		}
		else
		{
			++unknownCharacters;
			// counts the characters that are unknown 
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces + symbols;
	//algorythm that finds the true leangth of the string for the checksum
	
	cout << "Vowels: " << vowels << endl;
	// displays the vowels in the string
	cout << "Consonants: " << consonants << endl;
	// displays the consonants in the string
	cout << "Digits: " << digits << endl;
	// displays the digits in the string
	cout << "White spaces: " << spaces << endl;
	//displays the white space ( Spaces ) In the string
	cout << "Symbols in string : " << symbols << endl;
	//displays the puncuation symbols in the string
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	// displays the string leingth
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	//displays the number of unknown characters
	cout << "Checksum: " << checkSum << endl;
	// displays the checksum

	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");
	// pauses the system as to not make it end the program automaticly.
	return 0;
}