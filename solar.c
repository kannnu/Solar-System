#include<string.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <time.h>
#define DEG2RAD 3.14159/180.0
float xForEarth, yForEarth;
float counterForEarth = 0,counterForEarth1 = 0,counterForEarth2 = 0,counterForEarth3 = 0,counterForEarth4 = 0,counterForEarth5 = 0,counterForEarth6	 = 0; 
int x1,x2,x3,x4,x5,x6,y11,y2,y3,y4,y5,y6,r1=10;

void ellipse(float, float, float, float);
void circle(float, float, float);
void Solar(void)
{


glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POINTS);

//Sun
glColor3f( 1 ,0.7, 0);
ellipse(480.0, 350.0, 90.0, 40.0);
glTranslatef(0,0,0);
circle(500.0, 350.0, 18.0);
glColor3f( 1 ,1, 0);
ellipse(480.0, 350.0, 90.0, 40.0);
circle(500.0, 350.0, 10.0);

//Inner Ellipse1
glColor3f( 1 ,0, 1);
ellipse(480, 350, 90.0, 40.0);
circle(x1, y11, 10.0);


//Inner Ellipse2
glColor3f( 1 ,1, 0);
ellipse(500.0, 350.0, 150.0, 80.0);
circle(x2, y2, r1);


//Inner Ellipse3 RING
glColor3f( 0 ,0.5, 0.75);
ellipse(500.0, 350.0, 220.0, 100.0);
circle(xForEarth, yForEarth, 10.0);
ellipse(xForEarth, yForEarth, 37.0, 15.0);
glColor3f( 1.0 ,1.0, 1.0);
circle(x3, y3, 3.0);

//Inner Ellipse4
glColor3f( 1 ,0, 0);
ellipse(500.0, 350.0, 270.0, 130.0);
circle(x4, y4, 10.0);

//Inner Ellipse5
glColor3f( 0.75 ,0, 0);
ellipse(500.0, 350.0, 370.0, 180.0);
circle(x5, y5, 10.0);

//Ellipse6
glColor3f( 1, 0.5, 0);
ellipse(500.0, 350.0, 450.0, 210.0);
circle(x6, y6, 10.0);
glEnd();


/* TEXT */
glutDisplayFunc(Solar);
char st[100]="Heliocentric model";
int l=strlen( st ); 					// see how many characters are in text string.
glRasterPos2i(450,650); 				// location to start printing text
int i;
for(i=0; i < l; i++) 					// loop until i is greater then l
{
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24 , st[i]); // Print a character on the screen
} 
glColor3f( 1 ,0.7, 0);
char st1[100]="Sun";
int l1=strlen( st1 ); 					// see how many characters are in text string.
glRasterPos2i(1000,550); 				// location to start printing text
int i1;
for(i1=0; i1 < l; i1++) 					// loop until i is greater then l
{
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24 , st1[i1]); // Print a character on the screen
} 
glColor3f( 1 ,0, 1);
char st2[100]="Mercury";
int l2=strlen( st2 ); 					// see how many characters are in text string.
glRasterPos2i(1000,520); 				// location to start printing text
int i2;
for(i2=0; i2 < l2; i2++) 					// loop until i is greater then l
{
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24 , st2[i2]); // Print a character on the screen
} 
glColor3f( 1 ,1, 0);
char st3[100]="Venus";
int l3=strlen( st3 ); 					// see how many characters are in text string.
glRasterPos2i(1000,490); 				// location to start printing text
int i3;
for(i3=0; i3 < l3; i3++) 					// loop until i is greater then l
{
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24 , st3[i3]); // Print a character on the screen
} 
glColor3f( 0,0.5, 0.75);
char st4[100]="Earth";
int l4=strlen( st4 ); 					// see how many characters are in text string.
glRasterPos2i(1000,460); 				// location to start printing text
int i4;
for(i4=0; i4 < l4; i4++) 					// loop until i is greater then l
{
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24 , st4[i4]); // Print a character on the screen
} 
glColor3f( 1 ,1, 1);
char st7[100]="Moon";
int l7=strlen( st7 ); 					// see how many characters are in text string.
glRasterPos2i(1000,430); 				// location to start printing text
int i7;
for(i7=0; i7 < l7; i7++) 					// loop until i is greater then l
{
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24 , st7[i7]); // Print a character on the screen
} 

glColor3f( 1 ,0, 0);
char st5[100]="Saturn";
int l5=strlen( st5 ); 					// see how many characters are in text string.
glRasterPos2i(1000,400); 				// location to start printing text
int i5;
for(i5=0; i5 < l5; i5++) 					// loop until i is greater then l
{
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24 , st5[i5]); // Print a character on the screen
} 
glColor3f( 0.75 ,0, 0);
char st8[100]="Mars";
int l8=strlen( st8 ); 					// see how many characters are in text string.
glRasterPos2i(1000,370); 				// location to start printing text
int i8;
for(i8=0; i8 < l8; i8++) 					// loop until i is greater then l
{
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24 , st8[i8]); // Print a character on the screen
} 

glColor3f( 1 ,0.5, 0);
char st6[100]="Jupiter";
int l6=strlen( st6 ); 					// see how many characters are in text string.
glRasterPos2i(1000,340); 				// location to start printing text
int i6;
for(i6=0; i6 < l6; i6++) 					// loop until i is greater then l
{
glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24 , st6[i6]); // Print a character on the screen
} 

glFlush();
}

void rotate(){
	
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POINTS);
	
    glEnd();


    if(counterForEarth>359)
        counterForEarth = 0;//reset to 0 when becomes 360
    else
        counterForEarth+=0.6;//this will control the speed. 

        xForEarth = cos(counterForEarth*DEG2RAD)*220.0f;//to change the x co-ordinate
        yForEarth = sin(counterForEarth*DEG2RAD)*100.0f;//to change the y co-ordinate
	xForEarth+=500;
	yForEarth+=350;


	if(counterForEarth1>359)
        counterForEarth1 = 0;//reset to 0 when becomes 360
    	else
        counterForEarth1+=0.5;
	x1=cos(counterForEarth1*DEG2RAD)*90.0f;
	y11=sin(counterForEarth1*DEG2RAD)*40.0f;
	x1+=480;
	y11+=350;

	
	if(counterForEarth3>359)
        counterForEarth3 = 0;//reset to 0 when becomes 360
    	else
        counterForEarth3-=1.2;
	x3=cos(counterForEarth3*DEG2RAD)*37.0f;
	y3=sin(counterForEarth3*DEG2RAD)*15.0f;
	x3+=xForEarth;
	y3+=yForEarth;

	if(counterForEarth2>359)
        counterForEarth2 = 0;//reset to 0 when becomes 360
    	else
        counterForEarth2+=0.3;
	x2=cos(counterForEarth2*DEG2RAD)*150.0f;
	y2=sin(counterForEarth2*DEG2RAD)*80.0f;
	x2+=500;
	y2+=350;
	
	if(counterForEarth4>359)
        counterForEarth4 = 0;//reset to 0 when becomes 360
    	else
        counterForEarth4-=0.7;
	x4=cos(counterForEarth4*DEG2RAD)*270.0f;
	y4=sin(counterForEarth4*DEG2RAD)*130.0f;
	x4+=500;
	y4+=350;

	if(counterForEarth5>359)
        counterForEarth5 = 0;//reset to 0 when becomes 360
    	else
        counterForEarth5+=0.4;
	x5=cos(counterForEarth5*DEG2RAD)*370.0f;
	y5=sin(counterForEarth5*DEG2RAD)*180.0f;
	x5+=500;
	y5+=350;

	if(counterForEarth6>359)
        counterForEarth6 = 0;//reset to 0 when becomes 360
    	else
        counterForEarth6+=0.2;
	x6=cos(counterForEarth6*DEG2RAD)*450.0f;
	y6=sin(counterForEarth6*DEG2RAD)*210.0f;
	x6+=500;
	y6+=350;
}

void ellipse(float a, float b, float c, float d)
    { 
	float xc=a; 
 float yc=b;
 float rx=c; 
float ry=d;
        float rxSq = rx * rx;
        float rySq = ry * ry;
        float x = 0, y = ry, p;
        float px = 0, py = 2 * rxSq * y;
	float m1,n1;
       
       glBegin(GL_POINTS);
	 glVertex2d(xc+x,yc+y);
         glVertex2d(xc+x,yc-y);
         glVertex2d(xc-x,yc-y);
         glVertex2d(xc-x,yc+y);
        glEnd();

        p = rySq - (rxSq * ry) + (0.25 * rxSq);
        while (px < py)
        {
                        x++;
                        px = px + 2 * rySq;
                        if (p < 0)
                        p = p + rySq + px;
                        else
                        {
                        y--;
                        py = py - 2 * rxSq;
                        p = p + rySq + px - py;
                        }
				
                         glBegin(GL_POINTS);

                         glVertex2d(xc+x,yc+y);
                         glVertex2d(xc+x,yc-y);
                         glVertex2d(xc-x,yc-y);
                         glVertex2d(xc-x,yc+y);
                        glEnd();
			

        }
        p = rySq*(x+0.5)*(x+0.5) + rxSq*(y-1)*(y-1) - rxSq*rySq;
        while (y > 0)
        {
                y--;
                py = py - 2 * rxSq;
                if (p > 0)
                p = p + rxSq - py;
                else
                {
                x++;
                px = px + 2 * rySq;
                p = p + rxSq - py + px;
                }
               glBegin(GL_POINTS);

         glVertex2d(xc+x,yc+y);
         glVertex2d(xc+x,yc-y);
         glVertex2d(xc-x,yc-y);
         glVertex2d(xc-x,yc+y);
        glEnd();      
 }
}
 
// Circle
void circle(float j, float k, float l)
{
double X=j;				
double Y=k;
double R=l;
double p,x=0,y=R;
p=(5/4)-R;
/* Plot the points */

glBegin(GL_TRIANGLE_FAN);
glVertex2d(j, k);

while(x<=y)
{
glVertex2d(X+x,Y+y);
glVertex2d(X+y,Y+x);
glVertex2d(X-x,Y+y);
glVertex2d(X+y,Y-x);
glVertex2d(X-x,Y-y);
glVertex2d(X-y,Y-x);
glVertex2d(X+x,Y-y);
glVertex2d(X-y,Y+x);

if(p<0)
{
x++;
p=p+2*x+1;
}
else
{
x++;
y--;
p=p+2*x+1-2*y;
}
}

glEnd();

}


void animation()
{
	Solar();
	rotate();
}


void Init()
{

/* Set clear color to white */
glClearColor(0.0,0.0,0.0,0);
/* Set fill color to black */
glColor3f(1.0,1.0,1.0);
/* glViewport(0 , 0 , 640 , 480); */
/* glMatrixMode(GL_PROJECTION); */
/* glLoadIdentity(); */
gluOrtho2D(0 , 1200 , 0 , 700);
}
void main(int argc, char **argv)
{

glutInit(&argc,argv);

glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

glutInitWindowPosition(0,0);
glutInitWindowSize(1200,700);

glutCreateWindow("Solar System");

Init();

glutDisplayFunc(Solar);
glutIdleFunc(animation);

glutMainLoop();
}
