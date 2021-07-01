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
    glPushMatrix();


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
    glColor3f(0.9,0.9,0.9);
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
    glColor3f(0.9,0.9,0.9);
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
    glColor3f(0.9,0.9,0.9);
    glVertex3f(-10.0,50.0,-60.0);
    glVertex3f(10.0,50.0,-60.0);
    glVertex3f(10.0,0.0,-60.0);
    glVertex3f(-10.0,0.0,-60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.9);
    glVertex3f(-10.0,50.0,-60.0);
    glVertex3f(-10.0,50.0,-10.0);
    glVertex3f(-10.0,0.0,-10.0);
    glVertex3f(-10.0,0.0,-60.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.9);
    glVertex3f(10.0,50.0,-60.0);
    glVertex3f(10.0,50.0,-10.0);
    glVertex3f(10.0,0.0,-10.0);
    glVertex3f(10.0,0.0,-60.0);
    glEnd();

    glBegin(GL_QUADS);//dinding bagian kanan
    glColor3f(0.9,0.9,0.9);
    glVertex3f(60.0,50.0,10.0);
    glVertex3f(60.0,50.0,-10.0);
    glVertex3f(60.0,0.0,-10.0);
    glVertex3f(60.0,0.0,10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.9);
    glVertex3f(60.0,50.0,-10.0);
    glVertex3f(10.0,50.0,-10.0);
    glVertex3f(10.0,0.0,-10.0);
    glVertex3f(60.0,0.0,-10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,0.9);
    glVertex3f(60.0,50.0,10.0);
    glVertex3f(10.0,50.0,10.0);
    glVertex3f(10.0,0.0,10.0);
    glVertex3f(60.0,0.0,10.0);
    glEnd();

    //dinding diagonal
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

