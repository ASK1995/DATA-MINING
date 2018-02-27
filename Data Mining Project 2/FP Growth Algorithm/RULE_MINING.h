/*                    
    rule mining from frequent item sets using Fp-Tree
	Santosh Kumar Aenugu, Arvind Prasad,Anuroop Gireesan, Abdul Khalik Shaik
*/


extern "C"
{


//declare functions here
  void checker();

  long long sup();

  void makePartitions();

  bool ruleIsNotDuplicate(long long);

  void generatePermutations(long long, long long);

  void frequentItemSetRuleMining(long double);

}



