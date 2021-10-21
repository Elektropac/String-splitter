//CLEAN
/*
This is software by ElektroPac
it is a String splitter tool
*/

String stringSplit(String _fullString,char _splitTool, int _return)//("String name","Splitting tool","Return array nr")
{
  int stringLength = _fullString.length();
  int splitCount = 0;
  
  for (int i = 0 ; i < stringLength ; i++ )
  {
    if (_fullString.charAt(i) == _splitTool)//This counts how many split
    {
      splitCount++;
    }
  }
  String stringArray[splitCount+1];
  int arrayNr = 0;
  
  for (int i = 0 ; i < stringLength ; i++ )
  {
    if (_fullString.charAt(i) == _splitTool)
    {
      arrayNr++; i++;
    }
    stringArray[arrayNr] += _fullString.charAt(i);
  }
  
  return stringArray[_return];
}
