#include<stream.h>
#include<conio.h>
class
{
 private:int a,b;
 public:show()
	demo(int x,int y);
	demo(demo&ref);
	demo();
};
demo::demo(int x,int y)
{
  a=x;
  b=y;
}
demo::demo(demo&ref)
{
 a=ref.a;
 b=ref.b;
 }
 void demo::show()
 {
   cout<<a<<endl;
   cin<<b;
 }
main()
{
demo d1;
demo object 1(10,20);
demo object 2=object 1;
object.show();
}
