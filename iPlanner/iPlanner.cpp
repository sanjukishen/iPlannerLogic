// iPlanner.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iPlanner.h"

using namespace std;

// manageiPlanner takes user input and manipulates the 
// iPlanner class object.
int manageiPlanner(char *fileName) {
  // Variable to denote successful processing of function
  int retCode = -1;
  if (fileName) {
    iPlanner ip;
    ip.loadFile(fileName); 

    // Variables to obtain input from user and separate
    // into command word and remaining string
    string ipStr;
    string commandWord;
	  string remString;

    while (1) { 
      cout << endl << "command: ";
      getline(cin, ipStr);

      // Parse the user input string to separate
      // action and rest of the string.
      int pos = ipStr.find_first_of(" \t");  
      commandWord.assign(ipStr.substr(0, pos));   
      
      if (pos > 0) {
        pos = ipStr.find_first_not_of(" \t", pos);

        // Required for 'add' and 'delete' command.
        remString.assign(ipStr.substr(pos, -1));    
      }

      // Transform all characters to lower case for case insensitive comparision.
      std::transform(commandWord.begin(), commandWord.end(), commandWord.begin(), ::tolower);
      if (commandWord.compare("exit") == 0) {
        retCode = ip.saveFile(fileName);
        break;
      }
      else {
        ip.processCommand(commandWord, remString);
    }
  }
  return retCode;
  }
}

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

