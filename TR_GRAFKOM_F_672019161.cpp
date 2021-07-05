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
void jendela3(void);
void jendela4(void);
void jendela5(void);
void jendela6(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);

float xp = 0, yp = 0, zp = 0;
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
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}

void texture1(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-10.0, 6.0, 60.0);
    glVertex3f(-10.0, 6.0, 56.0);
    glVertex3f(-10.0, 0.0, 56.0);
    glVertex3f(-10.0, 0.0, 60.0);
    glEnd();
}

void texture2(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-60.0, 6.0, 10.0);
    glVertex3f(-56.0, 6.0, 10.0);
    glVertex3f(-56.0, 0.0, 10.0);
    glVertex3f(-60.0, 0.0, 10.0);
    glEnd();
}

void texture3(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.1, 0.1);
    glVertex3f(-10.1, 6.5, 59.5);
    glVertex3f(-10.1, 6.5, 56.5);
    glVertex3f(-10.1, 8.0, 56.5);
    glVertex3f(-10.1, 8.0, 59.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.1, 0.1);
    glVertex3f(-10.1, 6.5, 59.0);
    glVertex3f(-10.1, 6.5, 57.0);
    glVertex3f(-10.1, 9.0, 57.0);
    glVertex3f(-10.1, 9.0, 59.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.1, 0.1);
    glVertex3f(-10.1, 9.0, 59.5);
    glVertex3f(-10.1, 9.0, 56.5);
    glVertex3f(-10.1, 10.5, 56.5);
    glVertex3f(-10.1, 10.5, 59.5);
    glEnd();
}

void texture3a(void)
{
    glPushMatrix();
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 0, -12);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 0, -24);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 0, -36);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 5.5, 0);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 5.5, -12);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 5.5, -24);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 5.5, -36);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 11, 0);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 11, -12);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 11, -24);
    texture3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 11, -36);
    texture3();
    glPopMatrix();
}

void texture4(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.1, 0.1);
    glVertex3f(-59.5, 6.5, 10.0);
    glVertex3f(-56.5, 6.5, 10.0);
    glVertex3f(-56.5, 8.0, 10.0);
    glVertex3f(-59.5, 8.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.1, 0.1);
    glVertex3f(-59.0, 6.5, 10.0);
    glVertex3f(-57.0, 6.5, 10.0);
    glVertex3f(-57.0, 9.0, 10.0);
    glVertex3f(-59.0, 9.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.1, 0.1);
    glVertex3f(-59.5, 9.0, 10.0);
    glVertex3f(-56.5, 9.0, 10.0);
    glVertex3f(-56.5, 10.5, 10.0);
    glVertex3f(-59.5, 10.5, 10.0);
    glEnd();
}

void texture4a(void)
{
    glPushMatrix();
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12, 0, 0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(24, 0, 0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(36, 0, 0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 5.5, 0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12, 5.5, 0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(24, 5.5, 0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(36, 5.5, 0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 11, 0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(12, 11, 0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(24, 11, 0);
    texture4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(36, 11, 0);
    texture4();
    glPopMatrix();
}

void texture5(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-10.0,6.5,60.0);
    glVertex3f(0.0,6.5,60.0);
    glVertex3f(0.0,8.0,60.0);
    glVertex3f(-10.0,8.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-9.5,6.5,60.0);
    glVertex3f(-0.5,6.5,60.0);
    glVertex3f(-0.5,9.0,60.0);
    glVertex3f(-9.5,9.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-10.0,9.0,60.0);
    glVertex3f(0.0,9.0,60.0);
    glVertex3f(0.0,10.5,60.0);
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
    glVertex3f(-60.0,6.5,10.0);
    glVertex3f(-60.0,6.5,0.0);
    glVertex3f(-60.0,8.0,0.0);
    glVertex3f(-60.0,8.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-60.0,6.5,9.5);
    glVertex3f(-60.0,6.5,0.5);
    glVertex3f(-60.0,9.0,0.5);
    glVertex3f(-60.0,9.0,9.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-60.0,9.0,10.0);
    glVertex3f(-60.0,9.0,0.0);
    glVertex3f(-60.0,10.5,0.0);
    glVertex3f(-60.0,10.5,10.0);
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
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-10.0, 3.0, 51.79);
    glVertex3f(-10.0, 3.0, 52.29);
    glVertex3f(-10.0, 22.0, 52.29);
    glVertex3f(-10.0, 22.0, 51.79);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-10.0, 16.5, 48.0);
    glVertex3f(-10.0, 16.5, 56.0);
    glVertex3f(-10.0, 17.0, 56.0);
    glVertex3f(-10.0, 17.0, 48.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-10.0, 3.0, 48.0);
    glVertex3f(-10.0, 3.0, 56.0);
    glVertex3f(-10.0, 22.0, 56.0);
    glVertex3f(-10.0, 22.0, 48.0);
    glEnd();
}

void jendela2(void)
{
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-51.75, 3.0, 10.0);
    glVertex3f(-52.25, 3.0, 10.0);
    glVertex3f(-52.25, 22.0, 10.0);
    glVertex3f(-51.75, 22.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-48.0, 16.5, 10.0);
    glVertex3f(-56.0, 16.5, 10.0);
    glVertex3f(-56.0, 17.0, 10.0);
    glVertex3f(-48.0, 17.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-48.0, 3.0, 10.0);
    glVertex3f(-56.0, 3.0, 10.0);
    glVertex3f(-56.0, 22.0, 10.0);
    glVertex3f(-48.0, 22.0, 10.0);
    glEnd();
}

void jendela3(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.2, 0.2);
    glVertex3f(20.0, 7.0, 51.79);
    glVertex3f(20.0, 7.0, 52.29);
    glVertex3f(20.0, 22.0, 52.29);
    glVertex3f(20.0, 22.0, 51.79);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.2, 0.2);
    glVertex3f(20.0, 16.5, 48.0);
    glVertex3f(20.0, 16.5, 56.0);
    glVertex3f(20.0, 17.0, 56.0);
    glVertex3f(20.0, 17.0, 48.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20.0, 7.0, 48.0);
    glVertex3f(20.0, 7.0, 56.0);
    glVertex3f(20.0, 22.0, 56.0);
    glVertex3f(20.0, 22.0, 48.0);
    glEnd();
}

void jendela4(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.2, 0.2);
    glVertex3f(60.0, 7.0, 51.79);
    glVertex3f(60.0, 7.0, 52.29);
    glVertex3f(60.0, 22.0, 52.29);
    glVertex3f(60.0, 22.0, 51.79);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.2, 0.2);
    glVertex3f(60.0, 16.5, 48.0);
    glVertex3f(60.0, 16.5, 56.0);
    glVertex3f(60.0, 17.0, 56.0);
    glVertex3f(60.0, 17.0, 48.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(60.0, 7.0, 48.0);
    glVertex3f(60.0, 7.0, 56.0);
    glVertex3f(60.0, 22.0, 56.0);
    glVertex3f(60.0, 22.0, 48.0);
    glEnd();
}

void jendela5(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.2, 0.2);
    glVertex3f(5.25,42.0,-20.0);
    glVertex3f(4.75,42.0,-20.0);
    glVertex3f(4.75,27.0,-20.0);
    glVertex3f(5.25,27.0,-20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7, 0.2, 0.2);
    glVertex3f(9.0,36.5,-20.0);
    glVertex3f(1.0,36.5,-20.0);
    glVertex3f(1.0,37.0,-20.0);
    glVertex3f(9.0,37.0,-20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(9.0,42.0,-20.0);
    glVertex3f(1.0,42.0,-20.0);
    glVertex3f(1.0,27.0,-20.0);
    glVertex3f(9.0,27.0,-20.0);
    glEnd();
}

void jendela6(void)
{
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(60.0,50.0,0.0);
    glVertex3f(60.0,50.0,-2.0);
    glVertex3f(60.0,55.0,-2.0);
    glVertex3f(60.0,55.0,0.0);
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
    glTranslatef(xp, yp, zp);

    //dasar
    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(-80.0,0.0,-80.0);
    glVertex3f(-80.0,0.0,80.0);
    glVertex3f(80.0,0.0,80.0);
    glVertex3f(80.0,0.0,-80.0);
    glEnd();

    //texture
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-10.0,3.0,60.0);
    glVertex3f(20.0,3.0,60.0);
    glVertex3f(20.0,0.0,60.0);
    glVertex3f(-10.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.1, 0.1);
    glVertex3f(-10.0,23.0,60.0);
    glVertex3f(20.0,23.0,60.0);
    glVertex3f(20.0,26.0,60.0);
    glVertex3f(-10.0,26.0,60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-10.0,3.0,60.0);
    glVertex3f(-10.0,3.0,10.0);
    glVertex3f(-10.0,0.0,10.0);
    glVertex3f(-10.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.1, 0.1);
    glVertex3f(-10.0,23.0,60.0);
    glVertex3f(-10.0,23.0,10.0);
    glVertex3f(-10.0,26.0,10.0);
    glVertex3f(-10.0,26.0,60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-60.0,3.0,10.0);
    glVertex3f(-10.0,3.0,10.0);
    glVertex3f(-10.0,0.0,10.0);
    glVertex3f(-60.0,0.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.1, 0.1);
    glVertex3f(-60.0,23.0,10.0);
    glVertex3f(-10.0,23.0,10.0);
    glVertex3f(-10.0,26.0,10.0);
    glVertex3f(-60.0,26.0,10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-60.0,3.0,10.0);
    glVertex3f(-60.0,3.0,-20.0);
    glVertex3f(-60.0,0.0,-20.0);
    glVertex3f(-60.0,0.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.1, 0.1);
    glVertex3f(-60.0,23.0,10.0);
    glVertex3f(-60.0,23.0,-20.0);
    glVertex3f(-60.0,26.0,-20.0);
    glVertex3f(-60.0,26.0,10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(0.0,6.0,60.0);
    glVertex3f(10.0,6.0,60.0);
    glVertex3f(10.0,0.0,60.0);
    glVertex3f(0.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-10.0,6.0,60.0);
    glVertex3f(0.0,6.0,60.0);
    glVertex3f(0.0,0.0,60.0);
    glVertex3f(-10.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(20.0,6.0,60.0);
    glVertex3f(10.0,6.0,60.0);
    glVertex3f(10.0,0.0,60.0);
    glVertex3f(20.0,0.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-60.0,6.0,-10.0);
    glVertex3f(-60.0,6.0,0.0);
    glVertex3f(-60.0,0.0,0.0);
    glVertex3f(-60.0,0.0,-10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-60.0,6.0,10.0);
    glVertex3f(-60.0,6.0,0.0);
    glVertex3f(-60.0,0.0,0.0);
    glVertex3f(-60.0,0.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.7,0.1,0.1);
    glVertex3f(-60.0,6.0,-10.0);
    glVertex3f(-60.0,6.0,-20.0);
    glVertex3f(-60.0,0.0,-20.0);
    glVertex3f(-60.0,0.0,-10.0);
    glEnd();

    //texture1
    glPushMatrix();
    texture1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, -12);
    texture1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, -24);
    texture1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, -36);
    texture1();
    glPopMatrix();

    //texture2
    glPushMatrix();
    texture2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(12, 0, 0);
    texture2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(24, 0, 0);
    texture2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(36, 0, 0);
    texture2();
    glPopMatrix();

    //texture3a
    glPushMatrix();
    texture3a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, 0);
    texture3a();
    glPopMatrix();

    //texture4a
    glPushMatrix();
    texture4a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, 0);
    texture4a();
    glPopMatrix();

    //texture5a
    glPushMatrix();
    texture5a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(20,0,0);
    texture5a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,0);
    texture5a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(20,20,0);
    texture5a();
    glPopMatrix();

    //texture6a
    glPushMatrix();
    texture6a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,0,-20);
    texture6a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,0);
    texture6a();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,20,-20);
    texture6a();
    glPopMatrix();

    //jendela
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(10.0,6.5,60.0);
    glVertex3f(0.0,6.5,60.0);
    glVertex3f(0.0,20.0,60.0);
    glVertex3f(10.0,20.0,60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(5.25,42.0,60.0);
    glVertex3f(4.75,42.0,60.0);
    glVertex3f(4.75,23.0,60.0);
    glVertex3f(5.25,23.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(10.0,36.5,60.0);
    glVertex3f(0.0,36.5,60.0);
    glVertex3f(0.0,37.0,60.0);
    glVertex3f(10.0,37.0,60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(10.0,42.0,60.0);
    glVertex3f(0.0,42.0,60.0);
    glVertex3f(0.0,23.0,60.0);
    glVertex3f(10.0,23.0,60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-60.0,6.5,-10.0);
    glVertex3f(-60.0,6.5,0.0);
    glVertex3f(-60.0,20.0,0.0);
    glVertex3f(-60.0,20.0,-10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-60.0,42.0,-5.25);
    glVertex3f(-60.0,42.0,-4.75);
    glVertex3f(-60.0,23.0,-4.75);
    glVertex3f(-60.0,23.0,-5.25);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-60.0,36.5,-10.0);
    glVertex3f(-60.0,36.5,-0.0);
    glVertex3f(-60.0,37.0,-0.0);
    glVertex3f(-60.0,37.0,-10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-60.0,42.0,-10.0);
    glVertex3f(-60.0,42.0,-0.0);
    glVertex3f(-60.0,23.0,-0.0);
    glVertex3f(-60.0,23.0,-10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-18.0, 36.5, 12.0);
    glVertex3f(-12.0, 36.5, 18.0);
    glVertex3f(-12.0, 37.0, 18.0);
    glVertex3f(-18.0, 37.0, 12.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-15.25, 42.0, 14.75);
    glVertex3f(-14.75, 42.0, 15.25);
    glVertex3f(-14.75, 23.0, 15.25);
    glVertex3f(-15.25, 23.0, 14.75);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-18.0, 42.0, 12.0);
    glVertex3f(-12.0, 42.0, 18.0);
    glVertex3f(-12.0, 23.0, 18.0);
    glVertex3f(-18.0, 23.0, 12.0);
    glEnd();

    //jendela1
    glPushMatrix();
    jendela1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, -12);
    jendela1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, -24);
    jendela1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, 0);
    jendela1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, -12);
    jendela1();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, -24);
    jendela1();
    glPopMatrix();

    //jendela2
    glPushMatrix();
    jendela2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(12, 0, 0);
    jendela2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(24, 0, 0);
    jendela2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, 0);
    jendela2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(12, 20, 0);
    jendela2();
    glPopMatrix();
    glPushMatrix();
    glTranslated(24, 20, 0);
    jendela2();
    glPopMatrix();

    //jendela3
    glPushMatrix();
    glTranslated(0, 0, -30);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, -30);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, -95);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, -95);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, -105);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, -105);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, -115);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, -115);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-30, 0, -82);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-30, 20, -82);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-70, 0, -106);
    jendela3();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-70, 20, -106);
    jendela3();
    glPopMatrix();

    //jendela4
    glPushMatrix();
    glTranslated(0, 0, -57);
    jendela4();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 20, -57);
    jendela4();
    glPopMatrix();

    //jendela5
    glPushMatrix();
    glTranslated(24, 0, 0);
    jendela5();
    glPopMatrix();
    glPushMatrix();
    glTranslated(34, 0, 0);
    jendela5();
    glPopMatrix();
    glPushMatrix();
    glTranslated(44, 0, 0);
    jendela5();
    glPopMatrix();
    glPushMatrix();
    glTranslated(24, -20, 0);
    jendela5();
    glPopMatrix();
    glPushMatrix();
    glTranslated(34, -20, 0);
    jendela5();
    glPopMatrix();
    glPushMatrix();
    glTranslated(44, -20, 0);
    jendela5();
    glPopMatrix();

    //jendela6
    glPushMatrix();
    jendela6();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, -4);
    jendela6();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, -8);
    jendela6();
    glPopMatrix();

    //pintu
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.45, 0.2);
    glVertex3f(-18.0, 15.0, 12.0);
    glVertex3f(-12.0, 15.0, 18.0);
    glVertex3f(-12.0, 0.0, 18.0);
    glVertex3f(-18.0, 0.0, 12.0);
    glEnd();


    glPushMatrix();

    //dinding
    glBegin(GL_QUADS);//dinding bagian depan
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-10.0, 50.0, 60.0);
    glVertex3f(20.0, 50.0, 60.0);
    glVertex3f(20.0, 0.0, 60.0);
    glVertex3f(-10.0, 0.0, 60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-10.0, 50.0, 60.0);
    glVertex3f(-10.0, 50.0, 20.0);
    glVertex3f(-10.0, 0.0, 20.0);
    glVertex3f(-10.0, 0.0, 60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(20.0, 50.0, 60.0);
    glVertex3f(20.0, 50.0, 10.0);
    glVertex3f(20.0, 0.0, 10.0);
    glVertex3f(20.0, 0.0, 60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(60.0, 22.0, -20.0);
    glVertex3f(10.0, 22.0, -20.0);
    glVertex3f(10.10, 22.0, 10.0);
    glVertex3f(60.10, 22.0, 10.0);
    glEnd();

    //ATAP DEPAN
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.1, 0.15);
    glVertex3f(-10.0, 50.0, 60.0);
    glVertex3f(5.0, 80.0, 60.0);
    glVertex3f(20.0, 50.0, 60.0);
    glEnd();

    //ATAP KIRI
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.25);
    glVertex3f(-10.0, 50.0, 60.0);
    glVertex3f(5.0, 80.0, 60.0);
    glVertex3f(5.0, 80.0, -70.0);
    glVertex3f(-10.0, 50.0, -70.0);
    glEnd();

    //ATAP KANAN
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.25);
    glVertex3f(20.0, 50.0, 60.0);
    glVertex3f(5.0, 80.0, 60.0);
    glVertex3f(5.0, 80.0, -70.0);
    glVertex3f(20.0, 50.0, -70.0);
    glEnd();

    //ATAP BELAKANG
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.1, 0.15);
    glVertex3f(-10.0, 50.0, -70.0);
    glVertex3f(5.0, 80.0, -70.0);
    glVertex3f(20.0, 50.0,-70.0);
    glEnd();

    glBegin(GL_QUADS);//dinding bagian kiri
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-60.0, 50.0, 10.0);
    glVertex3f(-60.0, 50.0, -20.0);
    glVertex3f(-60.0, 0.0, -20.0);
    glVertex3f(-60.0, 0.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-60.0, 50.0, -20.0);
    glVertex3f(-10.0, 50.0, -20.0);
    glVertex3f(-10.0, 0.0, -20.0);
    glVertex3f(-60.0, 0.0, -20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-60.0, 50.0, 10.0);
    glVertex3f(-20.0, 50.0, 10.0);
    glVertex3f(-20.0, 0.0, 10.0);
    glVertex3f(-60.0, 0.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-60.0, 22.0, -20.0);
    glVertex3f(-10.0, 22.0, -20.0);
    glVertex3f(-10.10, 22.0, 10.0);
    glVertex3f(-60.10, 22.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-20.0, 22.0, -20.0);
    glVertex3f(-10.0, 22.0, -20.0);
    glVertex3f(-10.10, 22.0, 20.0);
    glVertex3f(-20.10, 22.0, 10.0);
    glEnd();

    //ATAP DEPAN
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.1, 0.15);
    glVertex3f(-60.0, 50.0, -20.0);
    glVertex3f(-60.0, 80.0, -5.0);
    glVertex3f(-60.0, 50.0, 10.0);
    glEnd();

    //ATAP KIRI
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.25);
    glVertex3f(-60.0, 50.0, -20.0);
    glVertex3f(-60.0, 80.0, -5.0);
    glVertex3f(60.0, 80.0, -5.0);
    glVertex3f(60.0, 50.0, -20.0);
    glEnd();

    //ATAP KANAN
    glBegin(GL_QUADS);
    glColor3f(0.2, 0.2, 0.25);
    glVertex3f(-60.0, 50.0, 10.0);
    glVertex3f(-60.0, 80.0, -5.0);
    glVertex3f(60.0, 80.0, -5.0);
    glVertex3f(60.0, 50.0, 10.0);
    glEnd();

    //ATAP BELAKANG
    glBegin(GL_TRIANGLES);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(60.0, 50.0, -20.0);
    glVertex3f(60.0, 80.0, -5.0);
    glVertex3f(60.0, 50.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);//dinding bagian belakang
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-50.0, 50.0, -70.0);
    glVertex3f(20.0, 50.0, -70.0);
    glVertex3f(20.0, 0.0, -70.0);
    glVertex3f(-50.0, 0.0, -70.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-10.0, 50.0, -40.0);
    glVertex3f(-10.0, 50.0, -20.0);
    glVertex3f(-10.0, 0.0, -20.0);
    glVertex3f(-10.0, 0.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(20.0, 50.0, -70.0);
    glVertex3f(20.0, 50.0, -20.0);
    glVertex3f(20.0, 0.0, -20.0);
    glVertex3f(20.0, 0.0, -70.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-50.0, 22.0, -70.0);
    glVertex3f(-10.0, 22.0, -70.0);
    glVertex3f(-10.10, 22.0, -40.0);
    glVertex3f(-50.10, 22.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(20.0, 22.0, -70.0);
    glVertex3f(-10.0, 22.0, -70.0);
    glVertex3f(-10.10, 22.0, 0.0);
    glVertex3f(20.10, 22.0, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(20.0, 22.0, 10.0);
    glVertex3f(-10.0, 22.0, 10.0);
    glVertex3f(-10.10, 22.0, 60.0);
    glVertex3f(20.10, 22.0, 60.0);
    glEnd();

    //tangga
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(10.0, 22.0, 0.0);
    glVertex3f(-2.0, 22.0, 0.0);
    glVertex3f(-2.10, 0.0, 10.0);
    glVertex3f(10.10, 0.0, 10.0);
    glEnd();

    //bawah
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-50.0, 0.0, -70.0);
    glVertex3f(-10.0, 0.0, -70.0);
    glVertex3f(-10.10, 0.0, -40.0);
    glVertex3f(-50.10, 0.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(20.0, 0.0, -70.0);
    glVertex3f(-10.0, 0.0, -70.0);
    glVertex3f(-10.10, 0.0, 60.0);
    glVertex3f(20.10, 0.0, 60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-60.0, 0.0, -20.0);
    glVertex3f(60.0, 0.0, -20.0);
    glVertex3f(60.10, 0.0, 10.0);
    glVertex3f(-60.10, 0.0, 10.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-10.0, 0.0, 10.0);
    glVertex3f(-10.0, 0.0, 20.0);
    glVertex3f(-20.0, 0.0, 10.0);
    glEnd();


    glBegin(GL_QUADS);//dinding bagian kiri blkng
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-50.0, 50.0, -70.0);
    glVertex3f(-50.0, 50.0, -40.0);
    glVertex3f(-50.0, 0.0, -40.0);
    glVertex3f(-50.0, 0.0, -70.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-50.0, 50.0, -40.0);
    glVertex3f(-10.0, 50.0, -40.0);
    glVertex3f(-10.0, 0.0, -40.0);
    glVertex3f(-50.0, 0.0, -40.0);
    glEnd();

    //ATAP DEPAN
    glBegin(GL_TRIANGLES);
    glColor3f(0.1, 0.1, 0.15);
    glVertex3f(-50.0, 50.0, -70.0);
    glVertex3f(-50.0, 50.0, -40.0);
    glVertex3f(-50.0, 80.0, -55.0);
    glEnd();

    glBegin(GL_QUADS);//KIRI
    glColor3f(0.2, 0.2, 0.25);
    glVertex3f(-50.0, 50.0, -70.0);
    glVertex3f(-50.0,80.0, -55.0);
    glVertex3f(0.0, 80.0, -55.0);
    glVertex3f(0.0, 50.0, -70.0);
    glEnd();

    glBegin(GL_QUADS);//KANAN
    glColor3f(0.2, 0.2, 0.25);
    glVertex3f(-50.0, 50.0, -40.0);
    glVertex3f(-50.0, 80.0, -55.0);
    glVertex3f(0.0, 80.0, -55.0);
    glVertex3f(0.0, 50.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);//dinding bagian kanan
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(60.0, 50.0, 10.0);
    glVertex3f(60.0, 50.0, -20.0);
    glVertex3f(60.0, 0.0, -20.0);
    glVertex3f(60.0, 0.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(60.0, 50.0, -20.0);
    glVertex3f(20.0, 50.0, -20.0);
    glVertex3f(20.0, 0.0, -20.0);
    glVertex3f(60.0, 0.0, -20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(60.0, 50.0, 10.0);
    glVertex3f(20.0, 50.0, 10.0);
    glVertex3f(20.0, 0.0, 10.0);
    glVertex3f(60.0, 0.0, 10.0);
    glEnd();

    //dinding diagonal
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-20.0, 6.0, 10.0);
    glVertex3f(-10.0, 6.0, 20.0);
    glVertex3f(-10.0, 0.0, 20.0);
    glVertex3f(-20.0, 0.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-20.0, 60.0, 10.0);
    glVertex3f(-10.0, 60.0, 20.0);
    glVertex3f(-10.0, 0.0, 20.0);
    glVertex3f(-20.0, 0.0, 10.0);
    glEnd();

    //atap diagonal
    glBegin(GL_TRIANGLES);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-10.0, 60.0, 20.0);
    glVertex3f(-15.0, 70.0, 15.0);
    glVertex3f(-20.0, 60.0, 10.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.2, 0.25);
    glVertex3f(-10.0, 50.0, 20.0);
    glVertex3f(-15.0, 70.0, 15.0);
    glVertex3f(0.0, 70.0, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.2, 0.2, 0.25);
    glVertex3f(-20.0, 50.0, 10.0);
    glVertex3f(-15.0, 70.0, 15.0);
    glVertex3f(0.0, 70.0, 0.0);
    glEnd();

    //ruangan kiri
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-60.0, 50.0, -10.0);
    glVertex3f(-10.0, 50.0, -10.0);
    glVertex3f(-10.0, 0.0, -10.0);
    glVertex3f(-60.0, 0.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-10.0, 50.0, -10.0);
    glVertex3f(-10.0, 50.0, -20.0);
    glVertex3f(-10.0, 0.0, -20.0);
    glVertex3f(-10.0, 0.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(-10.0, 10.0, -11.1);
    glVertex3f(-10.0, 10.0, -15.1);
    glVertex3f(-10.0, 0.0, -15.1);
    glVertex3f(-10.0, 0.0, -11.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(-10.0, 32.0, -11.1);
    glVertex3f(-10.0, 32.0, -15.1);
    glVertex3f(-10.0, 22.0, -15.1);
    glVertex3f(-10.0, 22.0, -11.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-60.0, 50.0, 0.0);
    glVertex3f(-20.0, 50.0, 0.0);
    glVertex3f(-20.0, 0.0, 0.0);
    glVertex3f(-60.0, 0.0, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-20.0, 50.0, 10.0);
    glVertex3f(-20.0, 50.0, 0.0);
    glVertex3f(-20.0, 0.0, 0.0);
    glVertex3f(-20.0, 0.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(-20.0, 10.0, 5.0);
    glVertex3f(-20.0, 10.0, 1.0);
    glVertex3f(-20.0, 0.0, 1.0);
    glVertex3f(-20.0, 0.0, 5.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(-20.0, 32.0, 5.0);
    glVertex3f(-20.0, 32.0, 1.0);
    glVertex3f(-20.0, 22.0, 1.0);
    glVertex3f(-20.0, 22.0, 5.0);
    glEnd();

    //ruangan kanan
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(60.0, 50.0, -10.0);
    glVertex3f(20.0, 50.0, -10.0);
    glVertex3f(20.0, 0.0, -10.0);
    glVertex3f(60.0, 0.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(20.0, 50.0, -10.0);
    glVertex3f(20.0, 50.0, -20.0);
    glVertex3f(20.0, 0.0, -20.0);
    glVertex3f(20.0, 0.0, -10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(20.0, 10.0, -11.1);
    glVertex3f(20.0, 10.0, -15.1);
    glVertex3f(20.0, 0.0, -15.1);
    glVertex3f(20.0, 0.0, -11.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(20.0, 32.0, -11.1);
    glVertex3f(20.0, 32.0, -15.1);
    glVertex3f(20.0, 22.0, -15.1);
    glVertex3f(20.0, 22.0, -11.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(60.0, 50.0, 0.0);
    glVertex3f(20.0, 50.0, 0.0);
    glVertex3f(20.0, 0.0, 0.0);
    glVertex3f(60.0, 0.0, 0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(20.0, 50.0, 10.0);
    glVertex3f(20.0, 50.0, 0.0);
    glVertex3f(20.0, 0.0, 0.0);
    glVertex3f(20.0, 0.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(20.0, 10.0, 5.0);
    glVertex3f(20.0, 10.0, 1.0);
    glVertex3f(20.0, 0.0, 1.0);
    glVertex3f(20.0, 0.0, 5.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(20.0, 32.0, 5.0);
    glVertex3f(20.0, 32.0, 1.0);
    glVertex3f(20.0, 22.0, 1.0);
    glVertex3f(20.0, 22.0, 5.0);
    glEnd();

    //ruangan kiri blkng
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-50.0, 50.0, -60.0);
    glVertex3f(-10.0, 50.0, -60.0);
    glVertex3f(-10.0, 0.0, -60.0);
    glVertex3f(-50.0, 0.0, -60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-10.0, 50.0, -60.0);
    glVertex3f(-10.0, 50.0, -70.0);
    glVertex3f(-10.0, 0.0, -70.0);
    glVertex3f(-10.0, 0.0, -60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(-10.0, 10.0, -61.1);
    glVertex3f(-10.0, 10.0, -65.1);
    glVertex3f(-10.0, 0.0, -65.1);
    glVertex3f(-10.0, 0.0, -61.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(-10.0, 32.0, -61.1);
    glVertex3f(-10.0, 32.0, -65.1);
    glVertex3f(-10.0, 22.0, -65.1);
    glVertex3f(-10.0, 22.0, -61.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(-50.0, 50.0, -50.0);
    glVertex3f(-10.0, 50.0, -50.0);
    glVertex3f(-10.0, 0.0, -50.0);
    glVertex3f(-50.0, 0.0, -50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-10.0, 50.0, -40.0);
    glVertex3f(-10.0, 50.0, -50.0);
    glVertex3f(-10.0, 0.0, -50.0);
    glVertex3f(-10.0, 0.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(-10.0, 10.0, -41.1);
    glVertex3f(-10.0, 10.0, -45.1);
    glVertex3f(-10.0, 0.0, -45.1);
    glVertex3f(-10.0, 0.0, -41.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(-10.0, 32.0, -41.1);
    glVertex3f(-10.0, 32.0, -45.1);
    glVertex3f(-10.0, 22.0, -45.1);
    glVertex3f(-10.0, 22.0, -41.1);
    glEnd();

    //ruangan kanan dpn
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(0.0, 22.0, 60.0);
    glVertex3f(0.0, 22.0, 20.0);
    glVertex3f(0.0, 0.0, 20.0);
    glVertex3f(0.0, 0.0, 60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(0.0, 22.0, 20.0);
    glVertex3f(-10.0, 22.0, 20.0);
    glVertex3f(-10.0, 0.0, 20.0);
    glVertex3f(0.0, 0.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(-1.0, 10.0, 20.0);
    glVertex3f(-5.0, 10.0, 20.0);
    glVertex3f(-5.0, 0.0, 20.0);
    glVertex3f(-1.0, 0.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(10.0, 22.0, 60.0);
    glVertex3f(10.0, 22.0, 10.0);
    glVertex3f(10.0, 0.0, 10.0);
    glVertex3f(10.0, 0.0, 60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(10.0, 22.0, 10.0);
    glVertex3f(20.0, 22.0, 10.0);
    glVertex3f(20.0, 0.0, 10.0);
    glVertex3f(10.0, 0.0, 10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.2, 0.2);
    glVertex3f(-10.0, 50.0, 20.0);
    glVertex3f(20.0, 50.0, 20.0);
    glVertex3f(20.0, 22.0, 20.0);
    glVertex3f(-10.0, 22.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(-1.0, 32.0, 20.0);
    glVertex3f(-5.0, 32.0, 20.0);
    glVertex3f(-5.0, 22.0, 20.0);
    glVertex3f(-1.0, 22.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.2, 0.2);
    glVertex3f(11.0, 10.0, 10.0);
    glVertex3f(15.0, 10.0, 10.0);
    glVertex3f(15.0, 0.0, 10.0);
    glVertex3f(11.0, 0.0, 10.0);
    glEnd();

    //loker
    glBegin(GL_QUADS);
    glColor3f(0.9, 0.9, 0.9);
    glVertex3f(15.0, 33.0, -69.0);
    glVertex3f(15.0, 33.0, -39.0);
    glVertex3f(15.0, 22.0, -39.0);
    glVertex3f(15.0, 22.0, -69.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(15.0, 33.0, -39.0);
    glVertex3f(20.0, 33.0, -39.0);
    glVertex3f(20.0, 22.0, -39.0);
    glVertex3f(15.0, 22.0, -39.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(15.0, 33.0, -69.0);
    glVertex3f(20.0, 33.0, -69.0);
    glVertex3f(20.0, 33.0, -39.0);
    glVertex3f(15.0, 33.0, -39.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(15.0, 33.0, -45.0);
    glVertex3f(15.0, 33.0, -46.0);
    glVertex3f(15.0, 22.0, -46.0);
    glVertex3f(15.0, 22.0, -45.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(15.0, 33.0, -50.0);
    glVertex3f(15.0, 33.0, -51.0);
    glVertex3f(15.0, 22.0, -51.0);
    glVertex3f(15.0, 22.0, -50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(15.0, 33.0, -55.0);
    glVertex3f(15.0, 33.0, -56.0);
    glVertex3f(15.0, 22.0, -56.0);
    glVertex3f(15.0, 22.0, -55.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(15.0, 33.0, -60.0);
    glVertex3f(15.0, 33.0, -61.0);
    glVertex3f(15.0, 22.0, -61.0);
    glVertex3f(15.0, 22.0, -60.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(15.0, 33.0, -65.0);
    glVertex3f(15.0, 33.0, -66.0);
    glVertex3f(15.0, 22.0, -66.0);
    glVertex3f(15.0, 22.0, -65.0);
    glEnd();

    //mading
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20.0, 30.0, -35.0);
    glVertex3f(20.0, 30.0, -25.0);
    glVertex3f(20.0, 24.0, -25.0);
    glVertex3f(20.0, 24.0, -35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(20.0, 29.0, -34.0);
    glVertex3f(20.0, 29.0, -26.0);
    glVertex3f(20.0, 25.0, -26.0);
    glVertex3f(20.0, 25.0, -34.0);
    glEnd();

    //kursi
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-9.0, 30.0, -35.0);
    glVertex3f(-9.0, 30.0, -25.0);
    glVertex3f(-9.0, 24.0, -25.0);
    glVertex3f(-9.0, 24.0, -35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(-5.0, 24.0, -35.0);
    glVertex3f(-9.0, 24.0, -35.0);
    glVertex3f(-9.0, 24.0, -25.0);
    glVertex3f(-5.0, 24.0, -25.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-9.0, 24.0, -26.0);
    glVertex3f(-9.0, 24.0, -25.0);
    glVertex3f(-9.0, 22.0, -25.0);
    glVertex3f(-9.0, 22.0, -26.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-9.0, 24.0, -35.0);
    glVertex3f(-9.0, 24.0, -34.0);
    glVertex3f(-9.0, 22.0, -34.0);
    glVertex3f(-9.0, 22.0, -35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-5.0, 24.0, -26.0);
    glVertex3f(-5.0, 24.0, -25.0);
    glVertex3f(-5.0, 22.0, -25.0);
    glVertex3f(-5.0, 22.0, -26.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-5.0, 24.0, -35.0);
    glVertex3f(-5.0, 24.0, -34.0);
    glVertex3f(-5.0, 22.0, -34.0);
    glVertex3f(-5.0, 22.0, -35.0);
    glEnd();

    //meja
    glBegin(GL_QUADS);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(-4.0, 25.0, -35.0);
    glVertex3f(-1.0, 25.0, -35.0);
    glVertex3f(-1.0, 25.0, -25.0);
    glVertex3f(-4.0, 25.0, -25.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-4.0, 25.0, -26.0);
    glVertex3f(-4.0, 25.0, -25.0);
    glVertex3f(-4.0, 22.0, -25.0);
    glVertex3f(-4.0, 22.0, -26.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-4.0, 25.0, -35.0);
    glVertex3f(-4.0, 25.0, -34.0);
    glVertex3f(-4.0, 22.0, -34.0);
    glVertex3f(-4.0, 22.0, -35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-1.0, 25.0, -26.0);
    glVertex3f(-1.0, 25.0, -25.0);
    glVertex3f(-1.0, 22.0, -25.0);
    glVertex3f(-1.0, 22.0, -26.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-1.0, 25.0, -35.0);
    glVertex3f(-1.0, 25.0, -34.0);
    glVertex3f(-1.0, 22.0, -34.0);
    glVertex3f(-1.0, 22.0, -35.0);
    glEnd();


    //tong sampah
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-9.0, 25.0, -40.0);
    glVertex3f(-9.0, 25.0, -37.0);
    glVertex3f(-9.0, 22.0, -37.0);
    glVertex3f(-9.0, 22.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-7.0, 22.0, -40.0);
    glVertex3f(-9.0, 22.0, -40.0);
    glVertex3f(-9.0, 22.0, -37.0);
    glVertex3f(-7.0, 22.0, -37.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-7.0, 25.0, -40.0);
    glVertex3f(-7.0, 25.0, -37.0);
    glVertex3f(-7.0, 22.0, -37.0);
    glVertex3f(-7.0, 22.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-9.0, 25.0, -37.0);
    glVertex3f(-7.0, 25.0, -37.0);
    glVertex3f(-7.0, 22.0, -37.0);
    glVertex3f(-9.0, 22.0, -37.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-9.0, 25.0, -40.0);
    glVertex3f(-7.0, 25.0, -40.0);
    glVertex3f(-7.0, 22.0, -40.0);
    glVertex3f(-9.0, 22.0, -40.0);
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
    case '5':
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

