/*                    
    rule mining from frequent item sets using Fp-Tree
	Santosh Kumar Aenugu, Arvind Prasad,Anuroop Gireesan, Abdul Khalik Shaik
*/

extern "C"
{

//declare functions here
  void checkPrinter();

  void initializeStack();

  long long findIndex(long long);

  int isCandidateFrequent();

  void generateSubProblems();

  void tree_growth();

  void fileInitializer();

}


