---Make.c

int fibo(int n)
{
  if (n==1)
   return 1
  else if (n==2)
    return 1;
  else return fibo (n-1)+ fibo (n-2)
}
int fibo(int n)
{
  if (n==1)
   return 1
  else if (n==2)
    return 1;
  else return fibo (n-1)+ fibo (n-2)
}



--make.h

clean;
rm -rf a.out fibo.o libfibo.a main
obj;
 gcc-c fibo.c -o fibo.o
 lib;
 ar rcs libfibo.a fibo.o
bin: obj lib
gcc -static main.c -L. -I. -libfibo -o main

main

int main(int argc, int argv)
{
        fibo(argv[1]);
