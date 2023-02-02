//Citing
//https://www.youtube.com/watch?v=q97E8rOFWSU
#include "morseFunction.h"
int main()
{
    string inputStr;
    string userinput;
    string outputStr;;
    userinput = userInput();
    int dashNum = (userinput.find("-"));
    string tempStr = userinput.substr(dashNum,dashNum+2);
    userinput = userinput.substr(dashNum+2);
    int inputNum = userinput.find(".txt");
    inputStr = userinput.substr(0,inputNum+4);
    userinput = userinput.substr(inputNum+4);
    outputStr = userinput.substr(0);
    //useless array that holds the correct morse code values because grade (if I knew ASCII earlier on I might have used this but I am already done so)
    string arr[91];
     arr[65] = ".- ";
        arr[66] = "-.. ";
        arr[67] = "-.-. ";
        arr[68] = "-.. ";
        arr[69] = ". ";
        arr[70] = "..-. ";
        arr[71] = "--. ";
        arr[72] = ".... ";
        arr[73] = ".. ";
        arr[74] = ".--- ";
        arr[75] = "-.- ";
        arr[76] = ".-.. ";
        arr[77] = "-- ";
        arr[78] = "-. ";
        arr[79] = "--- ";
        arr[80] = ".--. ";
        arr[81] = "--.- ";
        arr[82] = ".-. ";
        arr[83] = "... ";
        arr[84] = "- ";
        arr[85] = "..- ";
        arr[86] = "...- ";
        arr[87] = ".-- ";
        arr[88] = "-..- ";
        arr[89] = "-.-- ";
        arr[90] = "--.. ";
    //Input File setup, getting the contents and setting up the output file
    ifstream inputFile;
    ofstream outputFile;
    outputFile.open(outputStr);
    inputFile.open(inputStr);
    int characterNum = 0;
    if (inputFile.good()){
        cout << "Open Successfully!!!" << endl;
    }
    else if (!inputFile.good())
    { cout << "ERROR!!!" << endl;
    exit(-1);
    }
    stringstream tempf;
    tempf << inputFile.rdbuf();
    string file = tempf.str();
    inputFile.close();
    
    
    //this starts the Morse code  translation section
    if (tempStr == "-m")
    {

    // Putting each character of the file string into an array
    string beforeMorse[file.length()];
    for(int i = 0; i < file.length(); i++)
    {
            beforeMorse[i] = file[i];

    }
    //Translated array and putting it into the output file
    string morse[sizeof(beforeMorse)/32];
    for(int i =0; i < (sizeof(beforeMorse)/32); i++)
    { 
        morse[i] = translateToMorse(beforeMorse[i]);
        outputFile << morse[i];
        characterNum++;
    }
    }
   
   
   // The English Translation section
    else if (tempStr == "-t")
    {
    string mFile = file;
    mFile += " ";
    
    int l = 0;
    int tempmore = 0;
    while(mFile.length()-1 > 1) {
        int spaceNum = (mFile.find(" ",l));
        int newLineNum = (mFile.find("\n",l));

            tempmore = 0;
            if (((spaceNum < newLineNum) || (newLineNum == -1)) && (spaceNum != -1))
            {tempmore = spaceNum; }
            
            else if ((spaceNum > newLineNum) && (newLineNum != -1))
            {tempmore = newLineNum;}
            else
            {
                
                
                
                break; 
            }
            
        
        string tempstr = mFile.substr(l,tempmore+1);

        mFile = mFile.substr(tempmore+1);
        
        
        outputFile << translateToEnglish(tempstr);
        characterNum++;
           
    }
    }
    outputFile << endl<<  "Total characters converted successfully (including newline and white spaces): " << characterNum;
    return 0;
}


