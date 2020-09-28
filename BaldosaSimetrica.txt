#include <GL/glut.h>
#include <stdio.h>

void initGL() {
    glClearColor(1, 1, 1, 1); 
    glClear(GL_COLOR_BUFFER_BIT);   
}
void dibujaCuadrante(int i, int j);

void display(void) {
   
    dibujaCuadrante(1, 1);
    dibujaCuadrante(-1, -1);
    dibujaCuadrante(1, -1);
    dibujaCuadrante(-1, 1);
}

void dibujaCuadrante(int i, int j) {
    glEnable(GL_LINE_SMOOTH);

    glBegin(GL_LINES);
    glLineWidth(5);
    glColor3f(0, 0, 0);
    glVertex2f(1*i, 0.4*j);
    glVertex2f(0.4*i, 1.0*j);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.4 * i, 1.0 * j);
    glVertex2f(0 * i, 0.6 * j);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(1 * i, 0.4 * j);
    glVertex2f(0.6 * i, 0 * j);
    glEnd();

    //Franja amarilla 1
    glBegin(GL_QUAD_STRIP);
    glColor3f(1, 1, 0 * j);
    glVertex2f(0.4 * i, 1 * j);
    glVertex2f(0.35 * i, 0.95 * j);
    glVertex2f(1 * i, 0.4 * j);
    glVertex2f(0.95 * i, 0.35 * j);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(0.35 * i, 0.95 * j);
    glVertex2f(0.95 * i, 0.35 * j);
    glEnd();

    //Franja naranja
    glBegin(GL_QUAD_STRIP);
    glColor3f(1, 0.5, 0);
    glVertex2f(0.35 * i, 0.95 * j);
    glVertex2f(0.3 * i, 0.9 * j);
    glVertex2f(0.95 * i, 0.35 * j);
    glVertex2f(0.9 * i, 0.3 * j);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(0.3 * i, 0.9 * j);
    glVertex2f(0.9 * i, 0.3 * j);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(0, 0, 1);
    glVertex2f(0.3 * i, 0.9 * j);
    glVertex2f(0.25 * i, 0.85 * j);
    glVertex2f(0.9 * i, 0.3 * j);
    glVertex2f(0.85 * i, 0.25 * j);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(0, 0, 0);
    glVertex2f(0.05 * i, 0.65 * j);
    glVertex2f(0.25 * i, 0.85*j);
    glVertex2f(0.65 * i, 0.05 * j);
    glVertex2f(0.85 * i, 0.25 * j);
    glEnd();

    //Franja Azul
    glBegin(GL_QUADS);
    glColor3f(0, 0, 1);
    glVertex2f(0.05 * i, 0.65 * j);
    glVertex2f(0.65 * i, 0.05 * j);
    glVertex2f(0.6 * i, 0 * j);
    glVertex2f(0 * i, 0.6 * j);
    glEnd();

    //Linea negra
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(0.6 * i, 0);
    glVertex2f(0 * i, 0.6 * j);
    glEnd();

    //Franja naranja
    glBegin(GL_QUAD_STRIP);
    glColor3f(1, 0.5, 0);
    glVertex2f(0.6 * i, 0);
    glVertex2f(0 * i, 0.6 * j);
    glVertex2f(0.5 * i, 0);
    glVertex2f(0 * i, 0.5 * j);
    glEnd();

    //Linea negra
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(0.5 * i, 0);
    glVertex2f(0, 0.5 * j);
    glEnd();

    //Franja amarilla 
    glBegin(GL_QUAD_STRIP);
    glColor3f(1, 1, 0);
    glVertex2f(0.5 * i, 0);
    glVertex2f(0, 0.5 * j);
    glVertex2f(0.4 * i, 0);
    glVertex2f(0, 0.4 * j);
    glEnd();

    //Linea negra
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(0.4 * i, 0);
    glVertex2f(0, 0.4 * j);
    glEnd();

    //Linea negra
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(0.6 * i, 0);
    glVertex2f(0.4 * i, 0);
    glEnd();

    //Linea negra
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(0, 0.6 * j);
    glVertex2f(0, 0.4 * j);
    glEnd();

    //Triangulo Azul
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0, 0, 1);
    glVertex2f(0, 0.3 * j);
    glVertex2f(0, 0.05 * j);
    glVertex2f(0.1 * i, 0.1 * j);
    glEnd();

    //Franja amarilla 
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1, 1, 0);
    glVertex2f(0.05 * i, 0);
    glVertex2f(0, 0.05 * j);
    glVertex2f(0, 0);
    glEnd();

    //----
    //Triangulo Azul
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0, 0, 1);
    glVertex2f(0.3*i, 0);
    glVertex2f(0.1*i, 0.1*j);
    glVertex2f(0.05 * i, 0);
    glEnd();

    //Triangulo Azul
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0, 0, 1);
    glVertex2f(0, 1 * j);
    glVertex2f(0.05 * i, 1 * j);
    glVertex2f(0, 0.95 * j);
    glEnd();

    //Franja amarilla 
    glBegin(GL_QUAD_STRIP);
    glColor3f(1, 1, 0);
    glVertex2f(0, 0.85 * j);
    glVertex2f(0, 0.8 * j);
    glVertex2f(0.15 * i, 1 * j);
    glVertex2f(0.2 * i, 1 * j);
    glEnd();

    //Franja naranja
    glBegin(GL_QUAD_STRIP);
    glColor3f(1, 0.5, 0);
    glVertex2f(0, 0.8 * j);
    glVertex2f(0, 0.75 * j);
    glVertex2f(0.2 * i, 1 * j);
    glVertex2f(0.25 * i, 1 * j);
    glEnd();

    //Triangulo Azul
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0, 0, 1);
    glVertex2f(1 * i, 0);
    glVertex2f(1 * i, 0.05 * j);
    glVertex2f(0.95 * i, 0);
    glEnd();

    //Franja amarilla 
    glBegin(GL_QUAD_STRIP);
    glColor3f(1, 1, 0);
    glVertex2f(0.85 * i, 0);
    glVertex2f(0.8 * i, 0);
    glVertex2f(1 * i, 0.15 * j);
    glVertex2f(1 * i, 0.2 * j);
    glEnd();

    //Franja naranja
    glBegin(GL_QUAD_STRIP);
    glColor3f(1, 0.5, 0);
    glVertex2f(0.8 * i, 0);
    glVertex2f(0.75 * i, 0);
    glVertex2f(1 * i, 0.2 * j);
    glVertex2f(1 * i, 0.25 * j);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(0, 0.05 * j);
    glVertex2f(0.05*i, 0);
    glEnd();

    glFlush();
}


void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(400, 300);
	glutCreateWindow("BALDOSA");
	initGL();
	glutDisplayFunc(display);
	glutMainLoop();
}
