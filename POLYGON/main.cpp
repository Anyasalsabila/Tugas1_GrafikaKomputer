#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    glBegin(GL_POLYGON);

    glVertex2f(0.3, 0.8);
    glVertex2f(0.7, 0.8);
    glVertex2f(0.3, 0.4);
    glVertex2f(0.7, 0.4);

    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(5.5);

    glBegin(GL_LINES);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.5, 0.6);
    glVertex2f(0.7, 0.8);

    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.7, 0.8);
    glVertex2f(0.3, 0.8);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.5, 0.6);
    glVertex2f(0.7, 0.4);

    glColor3f(0.3, 0.3, 0.7);
    glVertex2f(0.3, 0.4);
    glVertex2f(0.7, 0.4);

    glColor3f(0.0, 0.7, 0.7);
    glVertex2f(0.3, 0.4);
    glVertex2f(0.3, 0.8);

    glEnd();

    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Anya's Polygon");
    Initialize();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
