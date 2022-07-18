#include<stdio.h>
#include<GL/glut.h>
#define h 0
#define u1 1
#define d1 2
#define u2 3
#define d2 4
#define u3 9
#define d4 6
#define u4 7
#define d3 8
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
unsigned char ch[]={"https:www.google.com"};
unsigned char ah[]={"I wonder how this works..."};
unsigned char bh[]={"(Press A to find out)"};
unsigned char Ci[]={"CLIENT1"};
unsigned char CB[]={"CLIENT2"};
unsigned char CS[]={"CLIENT3"};
unsigned char CA[]={"CLIENT4"};
unsigned char SE[]={"SERVER"};
unsigned char HS[]={"HANDSHAKING PROPERTY"};
unsigned char ug[]={"UPLOADING"};
unsigned char up[]={"UPLOADED"};
unsigned char dg[]={"DOWNLOADING"};
unsigned char dl[]={"DOWNLOADED"};
int i,k,flag=0,x=60.0,y=90.0,X=95,Y=90,x1=95,y11=90,x2=135,y2=90,x3=95,y3=150,x4=60,y4=133,x5=93,y5=150,x6=135,y6=133;
//GLint w=900,h=900;
void upload(){
	glColor3f(1,1,0);
	glRasterPos3f(60.0,180.0,0.0);
	for(i=0;i<strlen(ug);i++){
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ug[i]);
}
glFlush();
}
void box(){
	glColor3f(0.282,0.615,0.670);
	glRecti(55,179,100,190);
	glFlush();
}
void uploaded(){
	glColor3f(1,1,0);
	glRasterPos3f(60.0,180.0,0.0);
	for(i=0;i<strlen(up);i++){
		for(k=0;k<=99;k++);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,up[i]);
	}
	glFlush();
}
void download(){
	glColor3f(1,1,0);
	glRasterPos3f(60.0,180.0,0.0);
	for(i=0;i<strlen(dg);i++){
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,dg[i]);
}
glFlush();
}
void downloaded(){
	glColor3f(1,1,0);
	glRasterPos3f(60.0,180.0,0.0);
	for(i=0;i<strlen(dl);i++){
		for(k=0;k<=99;k++);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,dl[i]);
}
glFlush();
}
void handshake(){
	glColor3f(0,1,0);
	glRasterPos3f(50.0,180.0,0.0);
	for(i=0;i<strlen(HS);i++){
		for(k=0;k<=99999;k++);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,HS[i]);
}
glFlush();
}
void *currentfont;
void setFont(void *font)
{
    currentfont=font;
}

void drawstring(float x,float y,float z,char *string)
{
    char *c;
    int len = (int) strlen(string);
    int i;
    glRasterPos3f(x,y,z);
    /*for(c=string;*c!='\0';c++)
    {
        glColor3f(0.0,0.0,0.0);
        glutBitmapCharacter(currentfont,*c);
    }*/
    for(i = 0;i<len;i++)
    {
        glColor3f(0.0,0.0,0.0);
        glutBitmapCharacter(currentfont,string[i]);
    }
}

void frontscreen(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0,0,1);
    drawstring(20.0,180.0,0.0,"MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING ");
    glColor3f(0.0,0.0,0.0);
    drawstring(25.0,170.0,0.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
    glColor3f(1,0.5,0);
    drawstring(30.0,160.0,0.0,"A COMPUTER GRAPHICS MINI PROJECT ON");
    glColor3f(1,0,0);
    drawstring(50.0,150.0,0.0,"CLIENT SERVER COMMUNICATION");
    glColor3f(1,0.5,0);
    drawstring(100.0,50.0,0.0,"BY:");
    glColor3f(1.0,1.0,1.0);
    drawstring(125,40,0.0,"ASHWITHA      4MT19CS032");
    glColor3f(1.0,1.0,1.0);
    drawstring(125,30,0.0,"HRITHIKA BHAT   4MT19CS059");
    glColor3f(1,0.5,0);
    drawstring(65,100,0.0,"PRESS S TO START");
    glutSwapBuffers();
    glFlush();
}
void lines(int x,  int y)//handshake tcp
{
for(i=0;x<=80;i++){
    glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
    if(y<=110)
    y++;
    else
    x++;
    for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
    glFlush();
} 
}
void lines1(int X,int Y)//handshake tcp
{
for(i=0;X>=70;i++){
glColor3f(0,1,0);
glBegin(GL_POINTS);
glVertex2i(X,Y);
glEnd();
    if(Y>=70)
    	Y--;
    else
      X--;
    for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
    glFlush();
}
}
void lines2(int x,  int y)//uploadtcp
{
for(i=0;x<=80;i++){
    glColor3f(1,0,0);
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
    if(y<=110)
    y++;
    else
    x++;
    for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
    glFlush();
} 
}
void lines3(int X,int Y)//downloadtcp
{
for(i=0;X>=70;i++){
glColor3f(0,0,1);
glBegin(GL_POINTS);
glVertex2i(X,Y);
glEnd();
    if(Y>=70)
    	Y--;
    else
      X--;
    for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
    glFlush();
}
}
void lines4(int x1,  int y11)//downloadudp
{
for(i=0;x1<=124;i++){
glColor3f(0,0,1);
glBegin(GL_POINTS);
glVertex2i(x1,y11);
glEnd();
    if(y11>=70)
    	y11--;
    else
      x1++;
    for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
    glFlush();
} 

}
void lines5(int x2,int y2)//uploadudp
{
for(i=0;x2>=110;i++){
    glColor3f(1,0,0);
glBegin(GL_POINTS);
glVertex2i(x2,y2);
glEnd();
    if(y2<=110)
    y2++;
    else
    x2--;
    for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
    glFlush();
}
}
void lines6(int x3,int y3)//downloadserver1
{
for(i=0;x3>=70;i++){
    glColor3f(0,0,1);
glBegin(GL_POINTS);
glVertex2i(x3,y3);
glEnd();
    if(y3<=160)
    y3++;
    else
    x3--;
    for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
    glFlush();
}
}
void lines7(int x4,  int y4)//uploadsever2
{
for(i=0;x4<=80;i++){
glColor3f(1,0,0);
glBegin(GL_POINTS);
glVertex2i(x4,y4);
glEnd();
    if(y4>=120)
    	y4--;
    else
      x4++;
    for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
    glFlush();
} 
}
void lines8(int x5,  int y5)//downloadserver2
{
for(i=0;x5<=125;i++){
    glColor3f(0,0,1);
glBegin(GL_POINTS);
glVertex2i(x5,y5);
glEnd();
    if(y5<=160)
    y5++;
    else
    x5++;
    for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
    glFlush();
} 
}
void lines9(int x6,int y6)//uploadserver1
{
for(i=0;x6>=110;i++){
    glColor3f(1,0,0);
glBegin(GL_POINTS);
glVertex2i(x6,y6);
glEnd();
    if(y6>=120)
    y6--;
    else
    x6--;
    for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
    glFlush();
}
}
/*void labels(int x,int y)
{
for(k=0;k<=99999999;k++);
    glColor3f(0,0.0,0);
glRasterPos3f(x,y,0.0);
for(i=0;i<strlen(HS);i++)
glutBitmapCharacter(GLUT_BITMAP_8_BY_13,HS[i]);
    glFlush();

}*/
/*void op4(int b)//function for menu option 4.
{
	switch(b){
		case 1:	lines7(x4,y4);//uploadserver2
				break;
		case 2: lines6(x3,y3);//downloadserver1
				break;
	}
}
void op3(int a)//function for menu option 3.
{
	switch(a){
		case 1:	lines9(x6,y6);//uploadserver1	
				break;
		case 2: lines8(x5,y5);//downloadserver2
				break;
	}
}
void op2(int o)//function for menu option 2.
{
	switch(o){
		case 1:	lines5(x2,y2);//uploadudp
				break;
		case 2: lines4(x1,y11);//downloadudp
				break;
	}
}
void op1(int op)//function for main menu option 1.
{
		switch(op){
		case 1:	lines(x,y);//handshaketcp
    			lines1(X,Y);//handshaketcp
				break;
		case 2: lines2(x,y);//uploadtcp
				break;
		case 3: lines3(X,Y);//downaloadtcp
				break;
	}
}
void op(int o)//function for main menu option 5
{
	switch(o){
		case 1: exit(0);
	}
}
*/
void op(int id)
{
	switch(id) 
{
	case h: handshake();
			lines(x,y);//handshaketcp
    		lines1(X,Y);
    		//glutDisplayFunc(display1);
			break;
	case u1: upload();
			//uploaded();
			lines2(x,y);//uploadtcp
			box();
			uploaded();
			for(k=0;k<=9999999;k++);
			break;
	case d1: download();
			//downloaded();
			lines3(X,Y);//downaloadtcp
			box();
			downloaded();
			for(k=0;k<=9999999;k++);
			break;
	case u2:upload();
			//uploaded();
			lines5(x2,y2);//uploadudp
			box();
			uploaded();
			for(k=0;k<=9999999;k++);
			break;
	case d2:download();
			//downloaded();
			lines4(x1,y11);//downloadudp
			box();
			downloaded();
			for(k=0;k<=9999999;k++);
			break;
	case u3:upload();
			//uploaded();
			lines9(x6,y6);//uploadserver1
			box();
			uploaded();
			for(k=0;k<=9999999;k++);
			break;
	case d4:download();
			//downloaded();
			lines8(x5,y5);//downloadserver2
			box();
			downloaded();
			for(k=0;k<=9999999;k++);
			break;
	case u4:upload();
			//uploaded();
			lines7(x4,y4);//uploadserver2
			box();
			uploaded();
			for(k=0;k<=9999999;k++);
			break;
	case d3:download();
			//downloaded();
			lines6(x3,y3);//downloadserver1 
			box();
			downloaded();
			for(k=0;k<=9999999;k++);
			break;
	case 5: exit(0);
			break;
}
//glutPostRedisplay();
for(k=0;k<=999999999;k++);
display1();
}
/*void timer(int e){
if(y<=110)
y++;
else
x++;
glutPostRedisplay();
glutTimerFunc(500,timer,0) 
}*/
void systems()
{
glColor3f(0.0,0.0,0.0);
glRecti(10,70,40,90);/*system number 1*/
glBegin(GL_POLYGON);
glVertex2i(23,65);
glVertex2i(23,70);
glVertex2i(27,70);
glVertex2i(27,65);
glEnd();
glBegin(GL_QUADS);
glVertex2i(15,58);
glVertex2i(18,65);
glVertex2i(31,65);
glVertex2i(34,58);
glEnd();
glRecti(50,58,70,90);/*cpu1*/
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2i(52,80);
glVertex2i(68,80);
glVertex2i(52,81);
glVertex2i(68,81);
glVertex2i(52,82);
glVertex2i(68,82);
glEnd();
glColor3f(1.0,1.0,1.0);
glRecti(58,65,63,75);
glColor3f(1.0,0.0,0.0);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(60,66);
glEnd();
glColor3f(0.0,0.0,1.0);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(60,70);
glEnd();
glColor3f(0.0,0.0,0.0);
glRecti(150,70,180,90);//system2
glBegin(GL_POLYGON);
glVertex2i(163,70);
glVertex2i(168,70);
glVertex2i(168,65);
glVertex2i(163,65);
glEnd();
glBegin(GL_QUADS);
glVertex2i(154,58);
glVertex2i(159,65);
glVertex2i(172,65);
glVertex2i(175,58);
glEnd();
glRecti(124,58,144,90);/*cpu2*/
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2i(126,80);
glVertex2i(142,80);
glVertex2i(126,81);
glVertex2i(142,81);
glVertex2i(126,82);
glVertex2i(142,82);
glEnd();
glColor3f(1.0,1.0,1.0);
glRecti(132,65,137,75);
glColor3f(1.0,0.0,0.0);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(134,66);
glEnd();
glColor3f(0.0,0.0,1.0);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(134,70);
glEnd();
glColor3f(0.0,0.0,0.0);
glRecti(10,145,40,165);//system 3
glBegin(GL_POLYGON);
glVertex2i(23,140);
glVertex2i(23,145);
glVertex2i(27,145);
glVertex2i(27,140);
glEnd();
glRecti(50,165,70,133);/*cpu3*/
glBegin(GL_QUADS);
glVertex2i(15,133);
glVertex2i(18,140);
glVertex2i(31,140);
glVertex2i(34,133);
glEnd();
glColor3f(1.0,1.0,1.0);
glRecti(58,140,63,150);
glColor3f(1.0,0.0,0.0);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(60,142);
glEnd();
glColor3f(0.0,0.0,1.0);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(60,145);
glEnd();
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2i(52,155);
glVertex2i(68,155);
glVertex2i(52,156);
glVertex2i(68,156);
glVertex2i(52,157);
glVertex2i(68,157);
glEnd();
glColor3f(0.0,0.0,0.0);
glRecti(150,145,180,165);//system4
glBegin(GL_POLYGON);
glVertex2i(163,145);
glVertex2i(168,145);
glVertex2i(168,140);
glVertex2i(163,140);
glEnd();
glBegin(GL_QUADS);
glVertex2i(154,133);
glVertex2i(159,140);
glVertex2i(172,140);
glVertex2i(175,133);
glEnd();
glRecti(125,165,145,133);/*cpu4*/
glColor3f(1.0,0.0,0.0);
glBegin(GL_LINES);
glVertex2i(127,156);
glVertex2i(143,156);
glVertex2i(127,157);
glVertex2i(143,157);
glVertex2i(127,158);
glVertex2i(143,158);
glEnd();
glColor3f(1.0,1.0,1.0);
glRecti(132,140,137,150);
glColor3f(1.0,0.0,0.0);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(134,142);
glEnd();
glColor3f(0.0,0.0,1.0);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(134,145);
glEnd(); 
}
void server()
{
glColor3f(0.0,0.0,0.0);
glRecti(80,90,110,150);/*server*/
glColor3f(1.0,1.0,0.0);/*button*/
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(90,135);
glEnd();
glColor3f(1.0,0.0,1.0);
glPointSize(5.0);
glBegin(GL_POINTS);
glVertex2i(90,130);
glEnd(); 
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINE_LOOP);/*border*/
glVertex2i(85,95);
glVertex2i(85,145);
glVertex2i(105,145);
glVertex2i(105,95);
glEnd(); 
glColor3f(0,0.6,1);
glRecti(90,105,105,100);/*choice button1*/
glColor3f(0.6,0.9,0.7);
glRecti(90,112,105,107);/*choice button2*/
glColor3f(0.5,0.1,0.9);
glRecti(90,114,105,119);/*choice button3*/
}
void names()
{
glColor3f(0,0.0,0);
glRasterPos3f(10.0,180.0,0.0);
for(i=0;i<strlen(Ci);i++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,Ci[i]);
glRasterPos3f(10.0,40.0,0.0); 
for(i=0;i<strlen(CS);i++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,CS[i]);
glRasterPos3f(120.0,180.0,0.0); 
for(i=0;i<strlen(CB);i++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,CB[i]);
glRasterPos3f(120.0,40.0,0.0); 
for(i=0;i<strlen(CA);i++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,CA[i]);
glRasterPos3f(85.0,75.0,0.0); 
for(i=0;i<strlen(SE);i++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,SE[i]); 
}
void display1()
{
glClear(GL_COLOR_BUFFER_BIT);
    systems();
    server();
    names();
    GLint id1 = glutCreateMenu(op);
glutAddMenuEntry(" Handshake ", h);
glutAddMenuEntry(" Upload Data", u1);
glutAddMenuEntry(" Download Data", d1);
GLint id2 = glutCreateMenu(op);
glutAddMenuEntry(" Upload Data", u2);
glutAddMenuEntry(" Download Data ", d2);
GLint id3 = glutCreateMenu(op);
glutAddMenuEntry(" Upload Data 1", u3);
glutAddMenuEntry(" Download Data 2", d4);
GLint id4 = glutCreateMenu(op);
glutAddMenuEntry(" Upload Data 2", u4);
glutAddMenuEntry(" Download Data 1", d3);
glutCreateMenu(op);
glutAddSubMenu("Client 1 - TCP ", id1);
glutAddSubMenu("Client 2 - UDP ", id2);
glutAddSubMenu("Client 3 - Client 1 ", id3);
glutAddSubMenu("Client 4 - Client 2 ", id4);
glutAddMenuEntry("Exit ", 5);
//	glutAttachMenu(GLUT_LEFT_BUTTON);
glutAttachMenu(GLUT_RIGHT_BUTTON);
    /*lines(x,y);//handshaketcp
    lines1(X,Y);//handshaketcp
    lines2(x,y);//uploadtcp
    lines3(X,Y);//downaloadtcp
    lines5(x2,y2);//uploadudp
    lines4(x1,y11);//downloadudp
    lines6(x3,y3);//downloadserver1
    lines7(x4,y4);//uploadserver2
    lines8(x5,y5);//downloadserver2
    lines9(x6,y6);//uploadserver1*/
}
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,0.0,0.0);//desktop
glRecti(25,95,85,150);
glColor3f(0.960,0.956,0.545);//screen
glRecti(30,100,80,145);
glColor3f(0.0,0.0,0.0);
glRasterPos3f(35.0,130.0,0.0);//text postiotioning
glBegin(GL_LINE_LOOP);//text border
glVertex2i(32,125);
glVertex2i(32,135);
glVertex2i(70,135);
glVertex2i(70,125);
glEnd();
/*for(i=0;i<strlen(ch);i++){
	for(k=0;k<=99999999;k++);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,ch[i]);
    glFlush();
}*/
glColor3f(0,0,0);
//glBegin(GL_POLYGON);//cursor head
//glVertex2i(125,135);
//glVertex2i(125,135);
//glVertex2i(143,130);
//glEnd();
glRecti(51.0,121,52,118);
glBegin(GL_TRIANGLES);
glVertex2i(50.5,121.0);
glVertex2i(52,123);
glVertex2i(53.0,121.0);
glEnd();
glBegin(GL_QUADS);
glVertex2i(35,88);
glVertex2i(45,95);
glVertex2i(60,95);
glVertex2i(70,88);
glEnd();
glColor3f(0,0,0);
glPushMatrix();
glTranslatef(110.0,100.0,0.0);//head
glutSolidSphere(15.0,100,100);
glPopMatrix();
glColor3f(0.650,0.623,0.960);
glPushMatrix();
glTranslatef(110.0,65.0,0.0);//body
glutSolidSphere(25.0,100,100);
glPopMatrix();
glColor3f(0.329,0.184,0.058);
glRecti(80,20,140,75);//chair
glColor3f(0.678,0.941,0.984);//thought
glRecti(195,125,135,155);
glBegin(GL_POLYGON);//thought triangle
glVertex2i(135,125);
glVertex2i(145,125);
glVertex2i(120,120);
glEnd();
glColor3f(0,0,0);
glBegin(GL_LINE_LOOP);//thought border
glVertex2i(192,150);
glVertex2i(192,130);
glVertex2i(138,130);
glVertex2i(138,150);
glEnd();
for(i=0;i<strlen(ch);i++){
	for(k=0;k<=99999999;k++);
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,ch[i]);
    glFlush();
}
glColor3f(0.0,0.0,0.0);
glRasterPos3f(145.0,145.0,0.0);//text postiotioning
for(i=0;i<strlen(ah);i++)
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,ah[i]);
glColor3f(0.0,0.0,0.0);
glRasterPos3f(145.0,135.0,0.0);//text postiotioning
for(i=0;i<strlen(bh);i++)
    glutBitmapCharacter(GLUT_BITMAP_8_BY_13,bh[i]);
glFlush();
}
void myKeyboardFunc( unsigned char key, int x, int y )
{
    if(key=='s'||key=='S')
    display();
    if(key=='a'||key=='A')
    display1();
    //if(key=='q'||key=='Q')
    //labels(45.0,112.0);
    glFlush();
}
/*void myReshape(GLsizei w, GLsizei h){
	glClearColor(0.282,0.615,0.670,0.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glOrtho(0.0,(GLdouble)w,0.0,(GLdouble)h,0.0,500.0);
	glViewport(0,0,w,h);
}*/
int main(int argc, char **argv) {
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(1000,800);
glutInitWindowPosition(10,50);
glutCreateWindow("Client Server Communication");
glutDisplayFunc(frontscreen);
glutKeyboardFunc(myKeyboardFunc);
//glutReshapeFunc(myReshape);
glClearColor(0.282,0.615,0.670,0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glOrtho(0.0,200,0.0,200,0.0,500.0);
/*timer(0);*/
glutMainLoop();
return 0;
}
 
