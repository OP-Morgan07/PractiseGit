#include<stdio.h>
//greeting function (so without any value to return) and no parameters
void greet(){        //no need to take any return value so we use void return type. The datatype of the return value is called return type
printf("hi! how are  you\n");
return;                //There is no need to actually write return also in a void function. If we dont write then also it will work   
}
int main(){
    greet();          //CALLING THE FUNCTION
    printf("I am OM");
    return 0;          //return type of main function is integer so we need to return some integer. Usually we return o
}