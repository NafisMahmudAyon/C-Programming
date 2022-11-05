// Problem 1
// QUE: C Program To Find Area And Circumference Of Circle.

// Source Code:

#includestdio.h

main()
{
   // Follow US on = [ C Programming ]
  
   int rad;
   float PI = 3.14, area, ci;

   printf(nEnter radius of circle );
   scanf(%d, &rad);

   area = PI  rad  rad;
   printf(nArea of circle  %f , area);

   ci = 2  PI  rad;
   printf(nCircumference  %f , ci);

}