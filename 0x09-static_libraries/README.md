Static libraries

Create a README.md file
main.h
Create all the .c individual files using vi
gcc -c *.c to convert all .c files to .o files
Create library using ar rcs libmy.a
Then run ls to list all all files
USe ar rcs libmy.a *.o to copy all .o files into the library
Run ar -t libmy.a to display the files  
 
