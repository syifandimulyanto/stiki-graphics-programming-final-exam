#include "GL/glut.h"
void initGL()
{
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glClearDepth(1.0f);
  glEnable(GL_DEPTH_TEST);
  glDepthFunc(GL_LEQUAL);
  glShadeModel(GL_SMOOTH);
  glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void tmp_lcd_tngh()
{
    glBegin(GL_POLYGON);
    glColor3d(0.412, 0.412, 0.412);
    glVertex3d(-0.8,0,0);
    glVertex3d(-0.5,1,0);
    glVertex3d(0.5,1,0);
    glVertex3d(0.8,0,0);
    glEnd();
}

void tmp_lcd_knn()
{
    glBegin(GL_POLYGON);
    glColor3d(0.439, 0.502, 0.565);
    glVertex3d(-0.8,0,0);
    glVertex3d(-0.5,1,0);
    glVertex3d(-1,1,0);
    glVertex3d(-1,0,0);
    glEnd();
}
  
void tmp_lcd_kiri()
{
    glBegin(GL_POLYGON);
    glColor3d(0.439, 0.502, 0.565);
    glVertex3d(0.8,0,0);
    glVertex3d(0.5,1,0);
    glVertex3d(1,1,0);
    glVertex3d(1,0,0);
    glEnd();
}

void tmp_lcd_depan()
{
    glBegin(GL_POLYGON);
    glColor3d(1, 0, 0); // Merah
    glVertex3d(0.9,0.1,0.1);
    glVertex3d(0.9,0.9,0.1);
    glVertex3d(-0.9,0.9,0.1);
    glVertex3d(-0.9,0.1,0.1);
    glEnd();
}
  
void tmp_lcd_box1()
{
    glBegin(GL_POLYGON);
    glColor3d(0.412, 0.412, 0.412);
    glVertex3d(0.9,0.1,0.1);
    glVertex3d(1,0,0);
    glVertex3d(1,1,0);
    glVertex3d(0.9,0.9,0.1);
    glEnd();
}

void tmp_lcd_box2()
{
    glBegin(GL_POLYGON);
    glColor3d(0.412, 0.412, 0.412);
    glVertex3d(0.9,0.1,0.1);
    glVertex3d(1,1,0);
    glVertex3d(-1,1,0);
    glVertex3d(-0.9,0.9,0.1);
    glEnd();
}
  
void tmp_lcd_box3()
{
    glBegin(GL_POLYGON);
    glColor3d(0.412, 0.412, 0.412);
    glVertex3d(-0.9,0.9,0.1);
    glVertex3d(-1,1,0);
    glVertex3d(-1,0,0);
    glVertex3d(-0.9,0.1,0.1);
    glEnd();
}
  
void tmp_lcd_box4()
{
    glBegin(GL_POLYGON);
    glColor3d(0.412, 0.412, 0.412);
    glVertex3d(-0.9,0.1,0.1);
    glVertex3d(-1,0,0);
    glVertex3d(1,0,0);
    glVertex3d(0.9,0.1,0.1);
    glEnd();
}
  
void box_bawah()
{
    glBegin(GL_POLYGON);
    glTexCoord2d(0,0);
    glVertex3d(-0.9,-0.05,0);
    glTexCoord2d(1,0);
    glVertex3d(0.9,-0.05,0);
    glTexCoord2d(1,1);
    glVertex3d(0.9,-0.05,0.9);
    glTexCoord2d(0,1);
    glVertex3d(-0.9,-0.05,0.9);
    glEnd();
}
  
void box_samping1()
{
    glBegin(GL_POLYGON);
    glColor3d(0.467, 0.533, 0.600);
    glVertex3d(-0.9,-0.05,0);
    glVertex3d(-1,0,0);
    glVertex3d(-1,0,1);
    glVertex3d(-0.9,-0.05,0.9);
    glEnd();
}
  
void box_samping2()
{
    glBegin(GL_POLYGON);
    glColor3d(0.467, 0.533, 0.600);
    glVertex3d(-0.9,-0.05,0);
    glVertex3d(-1,0,0);
    glVertex3d(1,0,0);
    glVertex3d(0.9,-0.05,0);
    glEnd();
}
  
void box_samping3()
{
    glBegin(GL_POLYGON);
    glColor3d(0.467, 0.533, 0.600);
    glVertex3d(0.9,-0.05,0);
    glVertex3d(1,0,0);
    glVertex3d(1,0,1);
    glVertex3d(0.9,-0.05,0.9);
    glEnd();
}
  
void box_samping4()
{
    glBegin(GL_POLYGON);
    glColor3d(0.467, 0.533, 0.600);
    glVertex3d(-0.9,-0.05,0.9);
    glVertex3d(-1,0,1);
    glVertex3d(1,0,1);
    glVertex3d(0.9,-0.05,0.9);
    glEnd();
}
  
void box_atas()
{
    glBegin(GL_POLYGON);
    glTexCoord2f(0,0);
    glVertex3d(-1,0,0);
    glTexCoord2f(0,1);
    glVertex3d(-1,0,1);
    glTexCoord2f(1,1);
    glVertex3d(1,0,1);
    glTexCoord2f(1,0);
    glVertex3d(1,0,0);
    glEnd();
}

int sudut = 0;
void display() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef(0, -1, -5); // jauhkan bidang koordinat dari mata 10 langkah ke depan, 1 langkah ke bawah
  glRotatef(sudut, 1, 0, 0); 

  tmp_lcd_tngh();
  tmp_lcd_knn();
  tmp_lcd_kiri();

  tmp_lcd_depan();
  tmp_lcd_box1();
  tmp_lcd_box2();
  tmp_lcd_box3();
  tmp_lcd_box4();

  box_bawah();
  box_samping1();
  box_samping2();
  box_samping3();
  box_samping4();
  box_atas();

  sudut = sudut + 1;

  glutSwapBuffers();
}

void timer(int value)
{
  glutPostRedisplay();
  glutTimerFunc(15, timer, 0);
}

void reshape(GLsizei width, GLsizei height)
{
  if (height == 0)
    height = 1;
  GLfloat aspect = (GLfloat)width / (GLfloat)height;
  glViewport(0, 0, width, height);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
  glutInitWindowSize(640, 480);
  glutInitWindowPosition(50, 50);
  glutCreateWindow("3d-animation");
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  initGL();
  glutTimerFunc(0, timer, 0);
  glutMainLoop();
  return 0;
}