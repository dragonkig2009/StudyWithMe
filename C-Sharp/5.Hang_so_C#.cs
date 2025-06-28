//* Nếu không muốn số đó bị đổi thì sài "const" 
using System;

namespace MyApplication
{
  class Program
  {
    static void Main(string[] args)
    {
      const int myNum = 15;
      // myNum = 20;
      Console.WriteLine(myNum);
    }
  }
}