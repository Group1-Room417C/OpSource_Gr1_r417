/* Aries :))))) */
#include <conio.h>
#include <iostream>
#include <fstream>
using namespace std;

main()
{
  fstream file1("11.txt", ios::in);
  fstream file2("12.txt", ios::in);
  fstream file3("13.txt", ios::in);
  fstream file("output1.txt", ios::out);
  int min1, min2, min3, sum = 0, i1, i2, i3;
  file1 >> i1; sum += i1; file1 >> min1;
  file2 >> i2; sum += i2; file2 >> min2;
  file3 >> i3; sum += i3; file3 >> min3;
  file << sum; file << '\n';
  while (i1 > 0||i2 > 0||i3 > 0)
  {
    if (min1 <= min2 && min1 <= min3)
    {
      file << min1 << ' ';
      if (!file1.eof()) file1 >> min1;
      else min1 = 99999999;
      i1 --;
    }
    else
    if (min2 <= min1 && min2 <= min3)
    {
      file << min2 << ' ';
      if (!file2.eof()) file2 >> min2;
      else min2 = 99999999;
      i2 --;
    }
    else
    if (min3 <= min1 && min3 <= min2)
    {
      file << min3 << ' ';
      if (!file3.eof()) file3 >> min3;
      else min3 = 99999999;
      i3 --;
    }
  }
  cout << "Successfull !";
  file1.close();
  file2.close();
  file3.close();
  file.close();
  getch();
  return 0;
}
