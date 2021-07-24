# Instructions
___For using the library write the following commands in your terminal.___

* Create  an  Object  file  for  `MathLib.cpp`  file
```bash
g++ -c MathLib.cpp -o MathLib.o
```
* Create  an  Archive  file  for  `MathLib.o`  file
```bash
ar rU MathLib.a MathLib.o
ranlib MathLib.a
```
* Use  the  library  in  code  file  named  `test.cpp`
```bash
g++ -Wall -o code test.cpp -L. MathLib.a
```
