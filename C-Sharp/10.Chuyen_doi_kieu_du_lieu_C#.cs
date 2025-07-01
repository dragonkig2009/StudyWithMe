//* I. Chuyển đổi C#:
//* ép kiểu là bạn gán gtri của 1 kiểu dữ liệu này cho 1 kiểu dữ liệu khác:
//* 1.Implicit Casting - chuyển đổi ngầm định: chuyển kiểu dữ liệu nhỏ hơn thành lớn hơn: char -> int -> long -> float -> double
//* 2.Explicit Casting - chuyển đổi rõ ràng: chuyển kiểu dữ liệu lớn hơn thành nhỏ hơn: double -> float -> long -> int -> char 
//* II. Implicit Casing:
//* ép kiểu ngầm địnhđc thực hiện tự động khi truyền một kiểu có kích thước nhở hơn cho kich thước lớn hơn. VD:
// double myDouble = 2009D;
// int myInt = myDouble;
// Console.WriteLine(myInt);
// Console.WriteLine(myDouble);
//* II. Explicit Cassing:
//* việc ép kiểu rõ ràng phải được thực hiện thủ công bằng cách đặt kiểu trong dấu ngoặc trước giá trị. VD:
// double myDouble = 9.5D;
// int myInt = (int)myDouble;
// Console.WriteLine(myDouble);
// Console.WriteLine(myInt);
//* III.Type Conversion Menthods:
//* bạn cũng có thể chuyển đổi các kiểu dữ liệu 1 cách rõ ràng bằng cách sự dụng các phương pháp tích hợp: Convert.ToBoolean, Convert.ToDouble, Convert.ToInt(32) - int, Convert.ToInt(64).
int MyInt = 10;
double myDouble = 10.5D;
bool MyBool = true;
Console.WriteLine(Convert.ToString(MyBool));
Console.WriteLine(Convert.ToInt32(myDouble));
Console.WriteLine(Convert.ToDouble(MyInt));
Console.WriteLine(Convert.ToString(MyInt).GetType());


