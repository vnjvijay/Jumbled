#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
#include<cstdlib>

	using namespace std;
	 
	int main()
	{
	    const string WORD;
	    const int NUM_WORDS = 20;
	   const int MAX_GUESSES = 20;
	    string WORDS;
    int points = 0;
     
	   string guess;
	    string filename;
	     
	    char again;
	    char dummyvar;
	 
	    //Get the filename from the user.
	    cout << "Enter the filename: ";
	    cin >> filename;
	 
	    //Open the file
	    
	    inputFile.open(test.txt());
	 
	    //if the file successfully opened, process it.
	    if(inputFile)
	    {
	         
	        while(inputFile >> WORDS)
	        {
	         
	 
	 
	        }
	 
	             
	 
	        //Close the file.
	        inputFile.close();
	 
	    }
	    else
	    {
	        //Display an error message.
	        cout << "Error opening the file.\n";
	    }
	 
	    do
	    {
	        srand(time(0)); 
	       int choice = (rand() % NUM_WORDS); 
	       string theWord = WORDS [choice][WORD]; // word to guess
	 
	 
	        string jumble = theWord; // jumbled version of word 
	        int length = jumble.size(); 
	 
	     
	 
	         for (int i=0; i<length; ++i) 
	 
	         { 
	 
	             int index1 = (rand() % length); 
	             int index2 = (rand() % length); 
	             char temp = jumble[index1]; 
	             jumble[index1] = jumble[index2]; 
	             jumble[index2] = temp; 
	 
	         } 
	 
	            cout << "\t\t\tWelcome to Word Jumble!\n\n"; 
	            cout << "Unscramble the letters to make a word.\n"; 
	            cout << "Enter 'quit' to quit the game.\n\n"; 
	            cout << "The jumble is: " << jumble; 
	 
	        for(int nIndex = 0; nIndex < MAX_GUESSES; nIndex++) 
	        { 
	 
	          cout << "\n\nGuess " << nIndex+1 << ": "; 
	          cin >> guess; 
	 
	          if (guess == theWord) 
	          { 
	 
	            cout << "\nThat's it! You guessed it!\n"; 
	 
	          }//end if statement
	 
	          else
	            { 
	                cout << "Sorry, that's not it."; 
	 
	            }//end else statement 
	 
	        }//end for 
	 
	         cout << "\n\n\nWould You Like To Play Again? (y/n): "; 
	         cin  >> again; 
	     }
	     while(again == 'y' || again == 'Y'); 
	      
	     system("Pause");
	     system("cls"); 
	 
	        cout << "Thanks for playing!"; 
	 
	    return 0; 
	 
	 }//end main
	 
	     
	    
 

