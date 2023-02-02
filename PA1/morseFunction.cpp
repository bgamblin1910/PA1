#include "morseFunction.h"
//This function asks for user input in order to get the language they want, the input file they want to translate and the file they want to translate too.
string userInput() {
    string tempstr;
    string templan;
    string inputFI;
    string outputFI;
    cout <<"Type in which language you want to translate to (-t or -m):";
    cin >> templan;
    cout << templan<< endl;
    cout <<"Type the name of the input file:";
    cin >>inputFI;
    cout <<"Type the name of the output file:";
    cin >> outputFI;
    tempstr = templan + inputFI + outputFI;
    return tempstr;
    
  }
  
  

  //This function translates singular letters (input) into their corresponding morse code (output)
string translateToMorse(string letter)
{
    if (letter == "a" || letter == "A")
    {
        return ".- ";
    }
    if (letter == "b" || letter == "B")
    {
        return "-... ";
    }
    if (letter == "c" || letter == "C")
    {
        return "-.-. ";
    } if (letter == "d" || letter == "D")
    {
        return "-.. ";
    } if (letter == "e" || letter == "E")
    {
        return ". ";
    } if (letter == "f" || letter == "F")
    {
        return "..-. ";
    } if (letter == "g" || letter == "G")
    {
        return "--. ";
    } if (letter == "h" || letter == "H")
    {
        return ".... ";
    } if (letter == "i" || letter == "I")
    {
        return ".. ";
    } if (letter == "j" || letter == "J")
    {
        return ".--- ";
    } if (letter == "k" || letter == "K")
    {
        return "-.- ";
    } if (letter == "l" || letter == "L")
    {
        return ".-.. ";
    } if (letter == "m" || letter == "M")
    {
        return "-- ";
    } if (letter == "n" || letter == "N")
    {
        return "-. ";
    } if (letter == "o" || letter == "O")
    {
        return "--- ";
    } if (letter == "p" || letter == "P")
    {
        return ".--. ";
    }
     if (letter == "q" || letter == "Q")
    {
        return "--.- ";
    }
     if (letter == "R" || letter == "r")
    {
        return ".-. ";
    }
     if (letter == "s" || letter == "S")
    {
        return "... ";
    } if (letter == "t" || letter == "T")
    {
        return "- ";
    }
     if (letter == "u" || letter == "U")
    {
        return "..- ";
    }
     if (letter == "v" || letter == "V")
    {
        return "...- ";
    }
     if (letter == "w" || letter == "W")
    {
        return ".-- ";
    }
     if (letter == "x" || letter == "X")
    {
        return "-..- ";
    }
     if (letter == "y" || letter == "Y")
    {
        return "-.-- ";
    }
     if (letter == "z" || letter == "Z")
    {
        return "--.. ";
    }
    if (letter == "1")
    {
        return ".---- ";
    }
    if (letter == "2")
    {
        return "..--- ";
    }
    if (letter == "3")
    {
        return "...-- ";
    }
    if (letter == "4")
    {
        return "....- ";
    }
    if (letter == "5")
    {
        return "..... ";
    }
    if (letter == "6")
    {
        return "-.... ";
    }
    if (letter == "7")
    {
        return "--... ";
    }
    if (letter == "8")
    {
        return "---.. ";
    }
    if (letter == "9")
    {
        return "----. ";
    }
    if (letter == "0")
    {
        return "----- ";
    }
    
    return letter;
    
}
//This function translates morse code (input) into their corresponding letters (output)
string translateToEnglish(string letter)
{
    if (letter.find(".- ")== 0)
    {
        return "A";
    }
    
    if (letter.find("-... ")== 0)
    {
        return "B";
    }
    if (letter.find("-.-.")== 0||letter.find("-.-.")== 2)
    {
        return "C";
    }
    if (letter.find("-.. ")== 0)
    {
        return "D";
    }
    
    if (letter.find("..-.")== 0)
    {
        return "F";
    }
    if (letter.find("--. ")== 0)
    {
        return "G";
    }
    if (letter.find(".... ")== 0)
    {
        return "H";
    }
    if (letter.find(".. ")== 0)
    {
        return "I";
    }
    if (letter.find(".--- ")== 0)
    {
        return "J";
    }
    if (letter.find("-.- ")== 0)
    {
        return "K";
    }
    if (letter.find(".-.. ")== 0)
    {
        return "L";
    }
    if (letter.find("-- ")== 0)
    {
        return "M";
    }
    if (letter.find("-. ")== 0)
    {
        return "N";
    }
    if (letter.find("--- ")== 0)
    {
        return "O";
    }
    if (letter.find(".--. ")== 0)
    {
        return "P";
    }
    if (letter.find("--.- ")== 0)
    {
        return "Q";
    }
    if (letter.find(".-. ")== 0)
    {
        return "R";
    }
    if (letter.find("... ")== 0)
    {
        return "S";
    }
    
    if (letter.find("..- ")== 0)
    {
        return "U";
    }
    if (letter.find("...- ")== 0)
    {
        return "V";
    }
    if (letter.find(".-- ")== 0)
    {
        return "W";
    }
    if (letter.find("-..- ")== 0)
    {
        return "X";
    }
    if (letter.find("-.-- ")== 0)
    {
        return "Y";
    }
    if (letter.find("--.. ")== 0)
    {
        return "Z";
    }
    if (letter.find("-")== 0)
    {
        return "T";
    }
    if (letter.find(". ")== 0)
    {
        return "E";
    }
    
    return letter;
    
    
}