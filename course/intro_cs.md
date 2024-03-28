#! https://zhuanlan.zhihu.com/p/689476334
# For test only(vscode zhihu)
## intro_cs course 复习  
- ctrl+c terminate the process  
- ctrl+z pause the pocess:  
    `fg` resume in foreground  
    `bg`esume in background  
- jobs show the process  
- increment/decrement operators ++/-- with prefix and postfix
- assignment operators  
- different placeholder of %d, e.g. %6d %-6d  

- ctrl+d to generate EOF  
- random num in C  
    rand() return next random integer  
    srand(time(NULL)) set rand seed of rand()  

### function (L09) 
- problem decomposition & top-down strategy ：  
- call environment :  
- parameter declaration :  
- formal parameter :  
- self-documenting :  
- function prototype : tells the compiler the type and number of its
parameters and the type of its returned value  
- 'call by value' :  
- global & local variable :

### function with array as parameter (L10)   
- get address of array`a`  
```
&a[0] OR a
```
- addrss is passed when using array as argument  
- pass arg by reference :  
arg is paseed by its address instead of value
- const :  
use type qualifier `const` before arg in the arg list can prevent modification within the function 

### String (L10)  
- in C, strings are arrays of `char`, terminated by value 0 or null character(0 as its decimal value)  
- "zero-terminated" :  
enable func to take string parameter without a size, and process them when meeting zero  
- `'\0'` represents 0  
- `gets()` takes zero-terminated string from standard input of the program (tips: long input may go out of array bound, causing runtime error)  
- `fgets()` takes extra args, that contains size of the array, it will ignore extra input when exceeding the range  
```c
#defince MAX 1000
char str[MAX];
fgets(str, MAX, stdin);
``` 
- `fgets()` can take a file handler, reading stops after an `EOF` or a newline, it retuns `NULL` on error or `EOF`without any character  
- tips: the filehandle can be passed as a parameter to modify the file in several functions
```c
#define MAX 90 
// The program reads a file line by line  
FILE * fp;
fp = fopen("input.txt", "r");
if(fp == NULL){
    printf("Error. \n");
    return 0;
}
int i = 1; char tmp[MAX]; 
// fscanf(fp, "%s", &);
while(fgets(tmp,MAX,fp) != NULL){
    printf("%02d %s", i, tmp);
    i++;
}
fclose(fp);
```

### Pointer (L10)  
- declaration of type pointer:  
```c   

int * p; // p holds a memmory address where stores a int var
p = &i; //store in p the address of var i   
```
- `&` gets the address of var  
- `*` gets the value pointed by a pointer  
- When passing array as arg, the pointer is actually passed  
- Example :
```c
int main(int argc, char *argv[]){
    int i;
    printf("argc = %d\n", argc);
    for(i=0; i<argc;++i)
        printf("argv[%d] = %s\n", i, argv[i]);
    return 0;

}
``` 
### Change the font color  
Using to CSI(Control sequence intro) to achieve the change.
```c
\033[41m (content) \033[0m
\e[41m (content) \e[0m
//   \e[0m is to end control sequence
//   m it to end the paras 
// 41: red    2J: clear the terminal
```












## Writing practice: C Language  
### 1. Introduction  
C language was developed at Bell Labs in the mid-1970s by Dennis Ritchi, which has become one of the most widely used programming language. Despite being over 50 years old, it still has lots of advantages in effciency, high controllability of hardware. In this article, we are going to introduce some basic concepts about programming and C language.  

### 2. Process of C  
- Source file   
    A c source file is a text file with specific grammer of c, which has `.c` as its extension name.  Source file contains the logic of program(algorithm) and other components making it can be understood by compiler.  
- Compile
    The source file from high-level language converts into machine code that can be understood by computer, this process is called `compile`. Compiler will generate `.o` object file after compiling.  
- Link  
    In this process, mutiple object files involved in the source file are combined to generate the final excutable file.  
- Excute   
    Run the executable file. The program will start from `main` function.

### 3. Syntax  
- variable   
- statement  
- function  & function used frequently  
- input & output 

### 4. Summary  


## Writing practice: What is "analysis"?  



