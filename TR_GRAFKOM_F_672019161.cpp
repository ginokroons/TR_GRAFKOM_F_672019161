#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

/*
Nama anggota kelompok
Tedy Aditya Erwiansyah - 672019104
Iwang Ferdiansyah - 672019158
Aquenov Alexandro Kroons - 672019161
Alien Paquita Nanariain - 672019178
*/

void init(void);
void texture1(void);
void texture2(void);
void texture3(void);
void texture3a(void);
void texture4(void);
void texture4a(void);
void texture5(void);
void texture5a(void);
void texture6(void);
void texture6a(void);
void jendela1(void);
void jendela2(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);

float xp=0,yp=0,zp=0;
float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("Universitas Utrecht");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);

    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);

    glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}

void texture1(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-10.0,6.0,60.0);
    glVertex3f(-10.0,6.0,56.0);
    glVertex3f(-10.0,0.0,56.0);
    glVertex3f(-10.0,0.0,60.0);
    glEnd();
}

void texture2(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-60.0,6.0,10.0);
    glVertex3f(-56.0,6.0,10.0);
    glVertex3f(-56.0,0.0,10.0);
    glVertex3f(-60.0,0.0,10.0);
    glEnd();
}

void texture3(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-10.0,6.5,59.5);
    glVertex3f(-10.0,6.5,56.5);
    glVertex3f(-10.0,8.0,56.5);
    glVertex3f(-10.0,8.0,59.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-10.0,6.5,59.0);
    glVertex3f(-10.0,6.5,57.0);
    glVertex3f(-10.0,9.0,57.0);
    glVertex3f(-10.0,9.0,59.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-10.0,9.0,59.5);
    glVertex3f(-10.0,9.0,56.5);
    glVertex3f(-10.0,10.5,56.5);
    glVertex3f(-10.0,10.5,59.5);
    glEnd();
}

void texture3a(void)
{
    glPushMatrix();
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,0,-12);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,0,-24);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,0,-36);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,5.5,0);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,5.5,-12);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,5.5,-24);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,5.5,-36);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,11,0);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,11,-12);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,11,-24);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,11,-36);
    texture3();
    glPopMatrix();
}

void texture4(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-59.5,6.5,10.0);
    glVertex3f(-56.5,6.5,10.0);
    glVertex3f(-56.5,8.0,10.0);
    glVertex3f(-59.5,8.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-59.0,6.5,10.0);
    glVertex3f(-57.0,6.5,10.0);
    glVertex3f(-57.0,9.0,10.0);
    glVertex3f(-59.0,9.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-59.5,9.0,10.0);
    glVertex3f(-56.5,9.0,10.0);
    glVertex3f(-56.5,10.5,10.0);
    glVertex3f(-59.5,10.5,10.0);
    glEnd();
}

void texture4a(void)
{
    glPushMatrix();
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12,0,0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(24,0,0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(36,0,0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,5.5,0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12,5.5,0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(24,5.5,0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(36,5.5,0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,11,0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12,11,0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(24,11,0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(36,11,0);
    texture4();
    glPopMatrix();
}

void texture5(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-10.0,6.5,60.0);
    glVertex3f(-2.0,6.5,60.0);
    glVertex3f(-2.0,8.0,60.0);
    glVertex3f(-10.0,8.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-9.5,6.5,60.0);
    glVertex3f(-2.5,6.5,60.0);
    glVertex3f(-2.5,9.0,60.0);
    glVertex3f(-9.5,9.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-10.0,9.0,60.0);
    glVertex3f(-2.0,9.0,60.0);
    glVertex3f(-2.0,10.5,60.0);
    glVertex3f(-10.0,10.5,60.0);
    glEnd();
}

void texture5a(void)
{
    glPushMatrix();
    texture5();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,5.5,0);
    texture5();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,11,0);
    texture5();
    glPopMatrix();
}

void texture6(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-60.0,6.5,-10.0);
    glVertex3f(-60.0,6.5,-2.0);
    glVertex3f(-60.0,8.0,-2.0);
    glVertex3f(-60.0,8.0,-10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-60.0,6.5,-9.5);
    glVertex3f(-60.0,6.5,-2.5);
    glVertex3f(-60.0,9.0,-2.5);
    glVertex3f(-60.0,9.0,-9.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-60.0,9.0,-10.0);
    glVertex3f(-60.0,9.0,-2.0);
    glVertex3f(-60.0,10.5,-2.0);
    glVertex3f(-60.0,10.5,-10.0);
    glEnd();
}

void texture6a(void)
{
    glPushMatrix();
    texture6();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,5.5,0);
    texture6();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,11,0);
    texture6();
    glPopMatrix();
}

void jendela1(void)
{
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-10.0,3.0,51.75);
    glVertex3f(-10.0,3.0,52.25);
    glVertex3f(-10.0,22.0,52.25);
    glVertex3f(-10.0,22.0,51.75);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-10.0,16.5,48.0);
    glVertex3f(-10.0,16.5,56.0);
    glVertex3f(-10.0,17.0,56.0);
    glVertex3f(-10.0,17.0,48.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-10.0,3.0,48.0);
    glVertex3f(-10.0,3.0,56.0);
    glVertex3f(-10.0,22.0,56.0);
    glVertex3f(-10.0,22.0,48.0);
    glEnd();
}

void jendela2(void)
{
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-51.75,3.0,10.0);
    glVertex3f(-52.25,3.0,10.0);
    glVertex3f(-52.25,22.0,10.0);
    glVertex3f(-51.75,22.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-48.0,16.5,10.0);
    glVertex3f(-56.0,16.5,10.0);
    glVertex3f(-56.0,17.0,10.0);
    glVertex3f(-48.0,17.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-48.0,3.0,10.0);
    glVertex3f(-56.0,3.0,10.0);
    glVertex3f(-56.0,22.0,10.0);
    glVertex3f(-48.0,22.0,10.0);
    glEnd();
}

void tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();
    gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    glTranslatef(xp,yp,zp);


    //jendela
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-2.0,6.5,60.0);
    glVertex3f(2.0,6.5,60.0);
    glVertex3f(2.0,20.0,60.0);
    glVertex3f(-2.0,20.0,60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-0.25,42.0,60.0);
    glVertex3f(0.25,42.0,60.0);
    glVertex3f(0.25,23.0,60.0);
    glVertex3f(-0.25,23.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-4.0,36.5,60.0);
    glVertex3f(4.0,36.5,60.0);
    glVertex3f(4.0,37.0,60.0);
    glVertex3f(-4.0,37.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-4.0,42.0,60.0);
    glVertex3f(4.0,42.0,60.0);
    glVertex3f(4.0,23.0,60.0);
    glVertex3f(-4.0,23.0,60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-60.0,6.5,-2.0);
    glVertex3f(-60.0,6.5,2.0);
    glVertex3f(-60.0,20.0,2.0);
    glVertex3f(-60.0,20.0,-2.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-60.0,42.0,-0.25);
    glVertex3f(-60.0,42.0,0.25);
    glVertex3f(-60.0,23.0,0.25);
    glVertex3f(-60.0,23.0,-0.25);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-60.0,36.5,-4.0);
    glVertex3f(-60.0,36.5,4.0);
    glVertex3f(-60.0,37.0,4.0);
    glVertex3f(-60.0,37.0,-4.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-60.0,42.0,-4.0);
    glVertex3f(-60.0,42.0,4.0);
    glVertex3f(-60.0,23.0,4.0);
    glVertex3f(-60.0,23.0,-4.0);
    glEnd();


    //jendela1
    glPushMatrix();
    jendela1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,0,-12);
    jendela1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,0,-24);
    jendela1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,0);
    jendela1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,-12);
    jendela1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,-24);
    jendela1();
    glPopMatrix();

    //jendela2
    glPushMatrix();
    jendela2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(12,0,0);
    jendela2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(24,0,0);
    jendela2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,0);
    jendela2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(12,20,0);
    jendela2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(24,20,0);
    jendela2();
    glPopMatrix();

    //texture1
    glPushMatrix();
    texture1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,0,-12);
    texture1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,0,-24);
    texture1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,0,-36);
    texture1();
    glPopMatrix();

    //texture2
    glPushMatrix();
    texture2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(12,0,0);
    texture2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(24,0,0);
    texture2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(36,0,0);
    texture2();
    glPopMatrix();

    //texture3a
    glPushMatrix();
    texture3a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,0);
    texture3a();
    glPopMatrix();

    //texture4a
    glPushMatrix();
    texture4a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,0);
    texture4a();
    glPopMatrix();

    //texture5a
    glPushMatrix();
    texture5a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(12,0,0);
    texture5a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,0);
    texture5a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(12,20,0);
    texture5a();
    glPopMatrix();

    //texture5a
    glPushMatrix();
    texture6a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,0,12);
    texture6a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,0);
    texture6a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,12);
    texture6a();
    glPopMatrix();

    glPushMatrix();

    //texture
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-10.0,3.0,60.0);
    glVertex3f(10.0,3.0,60.0);
    glVertex3f(10.0,0.0,60.0);
    glVertex3f(-10.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-10.0,3.0,60.0);
    glVertex3f(-10.0,3.0,10.0);
    glVertex3f(-10.0,0.0,10.0);
    glVertex3f(-10.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-60.0,3.0,10.0);
    glVertex3f(-10.0,3.0,10.0);
    glVertex3f(-10.0,0.0,10.0);
    glVertex3f(-60.0,0.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-60.0,3.0,10.0);
    glVertex3f(-60.0,3.0,-10.0);
    glVertex3f(-60.0,0.0,-10.0);
    glVertex3f(-60.0,0.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-2.0,6.0,60.0);
    glVertex3f(2.0,6.0,60.0);
    glVertex3f(2.0,0.0,60.0);
    glVertex3f(-2.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-10.0,6.0,60.0);
    glVertex3f(-2.0,6.0,60.0);
    glVertex3f(-2.0,0.0,60.0);
    glVertex3f(-10.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(10.0,6.0,60.0);
    glVertex3f(2.0,6.0,60.0);
    glVertex3f(2.0,0.0,60.0);
    glVertex3f(10.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-60.0,6.0,-2.0);
    glVertex3f(-60.0,6.0,2.0);
    glVertex3f(-60.0,0.0,2.0);
    glVertex3f(-60.0,0.0,-2.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-60.0,6.0,-10.0);
    glVertex3f(-60.0,6.0,-2.0);
    glVertex3f(-60.0,0.0,-2.0);
    glVertex3f(-60.0,0.0,-10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-60.0,6.0,10.0);
    glVertex3f(-60.0,6.0,2.0);
    glVertex3f(-60.0,0.0,2.0);
    glVertex3f(-60.0,0.0,10.0);
    glEnd();


    //dinding
    glBegin(GL_QUADS);//dinding bagian depan
    glColor3f(0.9,0.9,0.9);
    glVertex3f(-10.0,50.0,60.0);
    glVertex3f(10.0,50.0,60.0);
    glVertex3f(10.0,0.0,60.0);
    glVertex3f(-10.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.9);
    glVertex3f(-10.0,50.0,60.0);
    glVertex3f(-10.0,50.0,10.0);
    glVertex3f(-10.0,0.0,10.0);
    glVertex3f(-10.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.2);
    glVertex3f(10.0,50.0,60.0);
    glVertex3f(10.0,50.0,10.0);
    glVertex3f(10.0,0.0,10.0);
    glVertex3f(10.0,0.0,60.0);
    glEnd();

    glBegin(GL_QUADS);//dinding bagian kiri
    glColor3f(0.9,0.9,0.9);
    glVertex3f(-60.0,50.0,10.0);
    glVertex3f(-60.0,50.0,-10.0);
    glVertex3f(-60.0,0.0,-10.0);
    glVertex3f(-60.0,0.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.2);
    glVertex3f(-60.0,50.0,-10.0);
    glVertex3f(-10.0,50.0,-10.0);
    glVertex3f(-10.0,0.0,-10.0);
    glVertex3f(-60.0,0.0,-10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.9);
    glVertex3f(-60.0,50.0,10.0);
    glVertex3f(-10.0,50.0,10.0);
    glVertex3f(-10.0,0.0,10.0);
    glVertex3f(-60.0,0.0,10.0);
    glEnd();

    glBegin(GL_QUADS);//dinding bagian belakang
    glColor3f(0.6,0.2,0.2);
    glVertex3f(-10.0,50.0,-60.0);
    glVertex3f(10.0,50.0,-60.0);
    glVertex3f(10.0,0.0,-60.0);
    glVertex3f(-10.0,0.0,-60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.2);
    glVertex3f(-10.0,50.0,-60.0);
    glVertex3f(-10.0,50.0,-10.0);
    glVertex3f(-10.0,0.0,-10.0);
    glVertex3f(-10.0,0.0,-60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.2);
    glVertex3f(10.0,50.0,-60.0);
    glVertex3f(10.0,50.0,-10.0);
    glVertex3f(10.0,0.0,-10.0);
    glVertex3f(10.0,0.0,-60.0);
    glEnd();

    glBegin(GL_QUADS);//dinding bagian kanan
    glColor3f(0.6,0.2,0.2);
    glVertex3f(40.0,50.0,10.0);
    glVertex3f(40.0,50.0,-10.0);
    glVertex3f(40.0,0.0,-10.0);
    glVertex3f(40.0,0.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.2);
    glVertex3f(40.0,50.0,-10.0);
    glVertex3f(10.0,50.0,-10.0);
    glVertex3f(10.0,0.0,-10.0);
    glVertex3f(40.0,0.0,-10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.6,0.2,0.2);
    glVertex3f(40.0,50.0,10.0);
    glVertex3f(10.0,50.0,10.0);
    glVertex3f(10.0,0.0,10.0);
    glVertex3f(40.0,0.0,10.0);
    glEnd();

    //dinding diagonal
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-20.0,6.0,10.0);
    glVertex3f(-10.0,6.0,20.0);
    glVertex3f(-10.0,0.0,20.0);
    glVertex3f(-20.0,0.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.9);
    glVertex3f(-20.0,50.0,10.0);
    glVertex3f(-10.0,50.0,20.0);
    glVertex3f(-10.0,0.0,20.0);
    glVertex3f(-20.0,0.0,10.0);
    glEnd();


    glPopMatrix();
    glutSwapBuffers();
}

void idle()
{
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y)
{
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
    case 'W':
        zp += 3;
        break;
    case 'd':
    case 'D':
        xp += 3;
        break;
    case 's':
    case 'S':
        zp -= 3;
        break;
    case 'a':
    case 'A':
        xp -= 3;
        break;
    case '7':
        yp += 3;
        break;
    case '9':
        yp -= 3;
        break;
    case '5' :
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}

