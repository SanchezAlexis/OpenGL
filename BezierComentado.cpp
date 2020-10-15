#include <stdlib.h>
#include <GL/glut.h>

//Tema: CURVAS DE BEZIER
//Metologia: Se estabelce la curva mediante puntos de referencia

GLfloat ctrlpoints[4][3] = {
        { -0.8, -0.8, 0.0}, { -0.5, 0.5, 0.0},
        {0.5, -0.5, 0.0}, {0.8, 0.8, 0.0} };
//Se establecen los puntos de Control
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 4, &ctrlpoints[0][0]);
    glEnable(GL_MAP1_VERTEX_3);
}

void display(void)
{
    int i;

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINE_STRIP);
    //Mientras mayor sea el intervalo, mayor será la 
    //precision con la cual se haga la curva Bezier. 
    for (i = 0; i <= 120; i++)
        glEvalCoord1f((GLfloat)i / 120.0);
    glEnd();
    /* The following code displays the control points as dots. */
    //Se colocan para ver los puntos solamente
    glPointSize(5.0);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POINTS);
    for (i = 0; i < 4; i++)
        glVertex3fv(&ctrlpoints[i][0]);
    //Se pintan los puntos de referencia de la matriz de puntos
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
