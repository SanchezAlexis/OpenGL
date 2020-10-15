#include <stdio.h>
#include <math.h>
#include <GL/glut.h>


// Plot eight points using circle's symmetrical property
void plot_point(int x, int y, int xc, int yc)
{
    glBegin(GL_POINTS);
    glVertex2i(xc + x, yc + y);
    glVertex2i(xc + x, yc - y);
    glVertex2i(xc + y, yc + x);
    glVertex2i(xc + y, yc - x);
    glVertex2i(xc - x, yc - y);
    glVertex2i(xc - y, yc - x);
    glVertex2i(xc - x, yc + y);
    glVertex2i(xc - y, yc + x);
    glEnd();
}

// Function to draw a circle using bresenham's
// circle drawing algorithm
void bresenham_circle(int r, int xc, int yc)
{
    int x = 0, y = r;
    float pk = (5.0 / 4.0) - r;

    /* Plot the points */
    /* Plot the first point */
    plot_point(x, y, xc, yc);
    int k;
    /* Find all vertices till x=y */
    while (x < y)
    {
        x = x + 1;
        if (pk < 0)
            pk = pk + 2 * x + 1;
        else
        {
            y = y - 1;
            pk = pk + 2 * (x - y) + 1;
        }
        plot_point(x, y, xc, yc);
    }
}
void drawPixel(GLint x, GLint y)
{
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}
void line(int x1, int y1, int x2, int y2)
{
    int x, y;
    int	dx, dy, p, k;

    drawPixel(x1, y1);

    dx = x2 - x1;
    dy = y2 - y1;
    p = 2 * dy - dx;
    x = x1;	
    y = y1;

    for (k = 0; k < dx - 1; k++)
    {
        if (p < 0)
            p = p + 2 * dy;

        else {
            p = p + 2 * dy - 2 * dx;
            y++;
        }
        x++;
        drawPixel(x, y);
    }
}

// Function to draw two concentric circles
void display(void)
{
    int radius1 = 100;
    int xc = 500, yc = 500;

    /* Clears buffers to preset values */
    glClear(GL_COLOR_BUFFER_BIT);

    // Center of the cicle = (320, 240)
    bresenham_circle(radius1, xc, yc);
    line(0,0,999,999);

    glBegin(GL_TRIANGLE_STRIP);
    glVertex2i(100, 0);
    glVertex2i(0,100 );
    glVertex2i(200, 200);
    glEnd();
    glFlush();
}

void Init()
{
    /* Set clear color to white */
    glClearColor(1.0, 1.0, 1.0, 0);
    /* Set fill color to black */
    glColor3f(0.0, 0.0, 0.0);
    /* glViewport(0 , 0 , 640 , 480); */
    /* glMatrixMode(GL_PROJECTION); */
    /* glLoadIdentity(); */
    gluOrtho2D(0, 1000, 0, 1000);
}

void main(int argc, char** argv)
{
    /* Initialise GLUT library */
    glutInit(&argc, argv);
    /* Set the initial display mode */
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    /* Set the initial window position and size */
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(640, 480);
    /* Create the window with title "DDA_Line" */
    glutCreateWindow("bresenham_circle");
    /* Initialize drawing colors */
    Init();
    /* Call the displaying function */
    glutDisplayFunc(display);
    /* Keep displaying untill the program is closed */
    glutMainLoop();
}
