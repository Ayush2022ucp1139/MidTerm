#include<stdio.h>
#@brief this class represent a rectangle.

class rectangle
{
private:
      float length;
      float width;
public
    rectangle(float len, float wid){
      length = len;
      width= wid;
      }
      
float calculatearea(){
      return length * width;
      }
      
float calculatorperimeter() {
      return 2* (length + width);
      }
};

int main(){
    float length,width;
    printf("enter the length of the rectangle:");
    scanf("%f", &length);
    printf("enter the width of the rectangle:");
    scanf("%f, &width);
    
    rectangle rect (length.width);
    
    printf("area of the rectangle:%.2f\n",rect.calculatearea());
    printf("perimeter of the rectangle: %.2f\n,rect.calculateperimeter());
    
    return 0;
}
    
    
