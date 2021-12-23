#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

GLfloat luz_do_ambiente[] = {0.5, 0.5, 0.6, 1.0};
GLfloat luz_do_ambiente2[] = {0.1, 0.1, 0.1, 1.0};
GLfloat luz_difusa[] = {0.5, 0.5, 0.3, 0.5};
GLfloat luz_difusa2[] = {0.3, 0.3, 0.3, 1.0};
GLfloat luz_especular[] = {0.6, 0.6, 0.6, 1.0};
GLfloat luz_especular2[] = {0.6, 0.6, 0.6, 1.0};
GLfloat posicao_da_luz[] = {120.0, 120.0, 120.0, 1.0};
GLfloat posicao_da_luz2[] = {-90.0, -90.0, -90.0, 1.0};
GLfloat especularidade[] = {0.6, 0.6, 0.6, 1.0};
GLint especularidade_do_material = 40;
GLfloat alpha, aspec, fix, girax, giray;
int cord1[] = {-15, -5, -5, 5, 5, 15};
int cord2[] = {-15, -5, -5, 5, 5, 15};
int cord3[] = {-15, 15};
int color[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6};
int color2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6};
int speed = 0;

void moove1_l1()
{
    color[19 - 1] = color2[39 - 1];
    color[20 - 1] = color2[38 - 1];
    color[21 - 1] = color2[37 - 1];
    color[46 - 1] = color2[19 - 1];
    color[47 - 1] = color2[20 - 1];
    color[48 - 1] = color2[21 - 1];
    color[30 - 1] = color2[46 - 1];
    color[29 - 1] = color2[47 - 1];
    color[28 - 1] = color2[48 - 1];
    color[39 - 1] = color2[30 - 1];
    color[38 - 1] = color2[29 - 1];
    color[37 - 1] = color2[28 - 1];
    color[1 - 1] = color2[7 - 1];
    color[4 - 1] = color2[8 - 1];
    color[7 - 1] = color2[9 - 1];
    color[8 - 1] = color2[6 - 1];
    color[9 - 1] = color2[3 - 1];
    color[6 - 1] = color2[2 - 1];
    color[3 - 1] = color2[1 - 1];
    color[2 - 1] = color2[4 - 1];
}

void reversemoove1_l1()
{
    color[39 - 1] = color2[19 - 1];
    color[38 - 1] = color2[20 - 1];
    color[37 - 1] = color2[21 - 1];
    color[19 - 1] = color2[46 - 1];
    color[20 - 1] = color2[47 - 1];
    color[21 - 1] = color2[48 - 1];
    color[46 - 1] = color2[30 - 1];
    color[47 - 1] = color2[29 - 1];
    color[48 - 1] = color2[28 - 1];
    color[30 - 1] = color2[39 - 1];
    color[29 - 1] = color2[38 - 1];
    color[28 - 1] = color2[37 - 1];
    color[7 - 1] = color2[1 - 1];
    color[8 - 1] = color2[4 - 1];
    color[9 - 1] = color2[7 - 1];
    color[6 - 1] = color2[8 - 1];
    color[3 - 1] = color2[9 - 1];
    color[2 - 1] = color2[6 - 1];
    color[1 - 1] = color2[3 - 1];
    color[4 - 1] = color2[2 - 1];
}

void moove1_l2()
{
    color[22 - 1] = color2[42 - 1];
    color[23 - 1] = color2[41 - 1];
    color[24 - 1] = color2[40 - 1];
    color[49 - 1] = color2[22 - 1];
    color[50 - 1] = color2[23 - 1];
    color[51 - 1] = color2[24 - 1];
    color[33 - 1] = color2[49 - 1];
    color[32 - 1] = color2[50 - 1];
    color[31 - 1] = color2[51 - 1];
    color[42 - 1] = color2[33 - 1];
    color[41 - 1] = color2[32 - 1];
    color[40 - 1] = color2[31 - 1];
}

void reversemoove1_l2()
{
    color[42 - 1] = color2[22 - 1];
    color[41 - 1] = color2[23 - 1];
    color[40 - 1] = color2[24 - 1];
    color[22 - 1] = color2[49 - 1];
    color[23 - 1] = color2[50 - 1];
    color[24 - 1] = color2[51 - 1];
    color[49 - 1] = color2[33 - 1];
    color[50 - 1] = color2[32 - 1];
    color[51 - 1] = color2[31 - 1];
    color[33 - 1] = color2[42 - 1];
    color[32 - 1] = color2[41 - 1];
    color[31 - 1] = color2[40 - 1];
}

void moove1_l3()
{
    color[25 - 1] = color2[45 - 1];
    color[26 - 1] = color2[44 - 1];
    color[27 - 1] = color2[43 - 1];
    color[52 - 1] = color2[25 - 1];
    color[53 - 1] = color2[26 - 1];
    color[54 - 1] = color2[27 - 1];
    color[36 - 1] = color2[52 - 1];
    color[35 - 1] = color2[53 - 1];
    color[34 - 1] = color2[54 - 1];
    color[45 - 1] = color2[36 - 1];
    color[44 - 1] = color2[35 - 1];
    color[43 - 1] = color2[34 - 1];
    color[10 - 1] = color2[16 - 1];
    color[13 - 1] = color2[17 - 1];
    color[16 - 1] = color2[18 - 1];
    color[17 - 1] = color2[15 - 1];
    color[18 - 1] = color2[12 - 1];
    color[15 - 1] = color2[11 - 1];
    color[12 - 1] = color2[10 - 1];
    color[11 - 1] = color2[13 - 1];
}

void reversemoove1_l3()
{
    color[45 - 1] = color2[25 - 1];
    color[44 - 1] = color2[26 - 1];
    color[43 - 1] = color2[27 - 1];
    color[25 - 1] = color2[52 - 1];
    color[26 - 1] = color2[53 - 1];
    color[27 - 1] = color2[54 - 1];
    color[52 - 1] = color2[36 - 1];
    color[53 - 1] = color2[35 - 1];
    color[54 - 1] = color2[34 - 1];
    color[36 - 1] = color2[45 - 1];
    color[35 - 1] = color2[44 - 1];
    color[34 - 1] = color2[43 - 1];
    color[16 - 1] = color2[10 - 1];
    color[17 - 1] = color2[13 - 1];
    color[18 - 1] = color2[16 - 1];
    color[15 - 1] = color2[17 - 1];
    color[12 - 1] = color2[18 - 1];
    color[11 - 1] = color2[15 - 1];
    color[10 - 1] = color2[12 - 1];
    color[13 - 1] = color2[11 - 1];
}

void moove2_l1()
{
    color[19 - 1] = color2[7 - 1];
    color[22 - 1] = color2[4 - 1];
    color[25 - 1] = color2[1 - 1];
    color[10 - 1] = color2[19 - 1];
    color[13 - 1] = color2[22 - 1];
    color[16 - 1] = color2[25 - 1];
    color[34 - 1] = color2[10 - 1];
    color[31 - 1] = color2[13 - 1];
    color[28 - 1] = color2[16 - 1];
    color[7 - 1] = color2[34 - 1];
    color[4 - 1] = color2[31 - 1];
    color[1 - 1] = color2[28 - 1];

    color[43 - 1] = color2[37 - 1];
    color[44 - 1] = color2[40 - 1];
    color[45 - 1] = color2[43 - 1];
    color[42 - 1] = color2[44 - 1];
    color[39 - 1] = color2[45 - 1];
    color[38 - 1] = color2[42 - 1];
    color[37 - 1] = color2[39 - 1];
    color[40 - 1] = color2[38 - 1];
}

void reversemoove2_l1()
{
    color[7 - 1] = color2[19 - 1];
    color[4 - 1] = color2[22 - 1];
    color[1 - 1] = color2[25 - 1];
    color[19 - 1] = color2[10 - 1];
    color[22 - 1] = color2[13 - 1];
    color[25 - 1] = color2[16 - 1];
    color[10 - 1] = color2[34 - 1];
    color[13 - 1] = color2[31 - 1];
    color[16 - 1] = color2[28 - 1];
    color[34 - 1] = color2[7 - 1];
    color[31 - 1] = color2[4 - 1];
    color[28 - 1] = color2[1 - 1];

    color[37 - 1] = color2[43 - 1];
    color[40 - 1] = color2[44 - 1];
    color[43 - 1] = color2[45 - 1];
    color[44 - 1] = color2[42 - 1];
    color[45 - 1] = color2[39 - 1];
    color[42 - 1] = color2[38 - 1];
    color[39 - 1] = color2[37 - 1];
    color[38 - 1] = color2[40 - 1];
}

void moove2_l2()
{
    color[20 - 1] = color2[8 - 1];
    color[23 - 1] = color2[5 - 1];
    color[26 - 1] = color2[2 - 1];
    color[11 - 1] = color2[20 - 1];
    color[14 - 1] = color2[23 - 1];
    color[17 - 1] = color2[26 - 1];
    color[35 - 1] = color2[11 - 1];
    color[32 - 1] = color2[14 - 1];
    color[29 - 1] = color2[17 - 1];
    color[8 - 1] = color2[35 - 1];
    color[5 - 1] = color2[32 - 1];
    color[2 - 1] = color2[29 - 1];
}

void reversemoove2_l2()
{
    color[8 - 1] = color2[20 - 1];
    color[5 - 1] = color2[23 - 1];
    color[2 - 1] = color2[26 - 1];
    color[20 - 1] = color2[11 - 1];
    color[23 - 1] = color2[14 - 1];
    color[26 - 1] = color2[17 - 1];
    color[11 - 1] = color2[35 - 1];
    color[14 - 1] = color2[32 - 1];
    color[17 - 1] = color2[29 - 1];
    color[35 - 1] = color2[8 - 1];
    color[32 - 1] = color2[5 - 1];
    color[29 - 1] = color2[2 - 1];
}

void moove2_l3()
{
    color[21 - 1] = color2[9 - 1];
    color[24 - 1] = color2[6 - 1];
    color[27 - 1] = color2[3 - 1];
    color[12 - 1] = color2[21 - 1];
    color[15 - 1] = color2[24 - 1];
    color[18 - 1] = color2[27 - 1];
    color[36 - 1] = color2[12 - 1];
    color[33 - 1] = color2[15 - 1];
    color[30 - 1] = color2[18 - 1];
    color[9 - 1] = color2[36 - 1];
    color[6 - 1] = color2[33 - 1];
    color[3 - 1] = color2[30 - 1];

    color[52 - 1] = color2[46 - 1];
    color[53 - 1] = color2[49 - 1];
    color[54 - 1] = color2[52 - 1];
    color[51 - 1] = color2[53 - 1];
    color[48 - 1] = color2[54 - 1];
    color[47 - 1] = color2[51 - 1];
    color[46 - 1] = color2[48 - 1];
    color[49 - 1] = color2[47 - 1];
}

void reversemoove2_l3()
{
    color[9 - 1] = color2[21 - 1];
    color[6 - 1] = color2[24 - 1];
    color[3 - 1] = color2[27 - 1];
    color[21 - 1] = color2[12 - 1];
    color[24 - 1] = color2[15 - 1];
    color[27 - 1] = color2[18 - 1];
    color[12 - 1] = color2[36 - 1];
    color[15 - 1] = color2[33 - 1];
    color[18 - 1] = color2[30 - 1];
    color[36 - 1] = color2[9 - 1];
    color[33 - 1] = color2[6 - 1];
    color[30 - 1] = color2[3 - 1];

    color[46 - 1] = color2[52 - 1];
    color[49 - 1] = color2[53 - 1];
    color[52 - 1] = color2[54 - 1];
    color[53 - 1] = color2[51 - 1];
    color[54 - 1] = color2[48 - 1];
    color[51 - 1] = color2[47 - 1];
    color[48 - 1] = color2[46 - 1];
    color[47 - 1] = color2[49 - 1];
}

void moove3_l1()
{
    color[3 - 1] = color2[52 - 1];
    color[2 - 1] = color2[49 - 1];
    color[1 - 1] = color2[46 - 1];
    color[37 - 1] = color2[3 - 1];
    color[40 - 1] = color2[2 - 1];
    color[43 - 1] = color2[1 - 1];
    color[10 - 1] = color2[37 - 1];
    color[11 - 1] = color2[40 - 1];
    color[12 - 1] = color2[43 - 1];
    color[52 - 1] = color2[10 - 1];
    color[49 - 1] = color2[11 - 1];
    color[46 - 1] = color2[12 - 1];
    color[25 - 1] = color2[19 - 1];
    color[26 - 1] = color2[22 - 1];
    color[27 - 1] = color2[25 - 1];
    color[24 - 1] = color2[26 - 1];
    color[21 - 1] = color2[27 - 1];
    color[20 - 1] = color2[24 - 1];
    color[19 - 1] = color2[21 - 1];
    color[22 - 1] = color2[20 - 1];
}

void reversemoove3_l1()
{
    color[52 - 1] = color2[3 - 1];
    color[49 - 1] = color2[2 - 1];
    color[46 - 1] = color2[1 - 1];
    color[3 - 1] = color2[37 - 1];
    color[2 - 1] = color2[40 - 1];
    color[1 - 1] = color2[43 - 1];
    color[37 - 1] = color2[10 - 1];
    color[40 - 1] = color2[11 - 1];
    color[43 - 1] = color2[12 - 1];
    color[10 - 1] = color2[52 - 1];
    color[11 - 1] = color2[49 - 1];
    color[12 - 1] = color2[46 - 1];
    color[19 - 1] = color2[25 - 1];
    color[22 - 1] = color2[26 - 1];
    color[25 - 1] = color2[27 - 1];
    color[26 - 1] = color2[24 - 1];
    color[27 - 1] = color2[21 - 1];
    color[24 - 1] = color2[20 - 1];
    color[21 - 1] = color2[19 - 1];
    color[20 - 1] = color2[22 - 1];
}

void moove3_l2()
{
    color[6 - 1] = color2[53 - 1];
    color[5 - 1] = color2[50 - 1];
    color[4 - 1] = color2[47 - 1];
    color[38 - 1] = color2[6 - 1];
    color[41 - 1] = color2[5 - 1];
    color[44 - 1] = color2[4 - 1];
    color[13 - 1] = color2[38 - 1];
    color[14 - 1] = color2[41 - 1];
    color[15 - 1] = color2[44 - 1];
    color[53 - 1] = color2[13 - 1];
    color[50 - 1] = color2[14 - 1];
    color[47 - 1] = color2[15 - 1];
}

void reversemoove3_l2()
{
    color[53 - 1] = color2[6 - 1];
    color[50 - 1] = color2[5 - 1];
    color[47 - 1] = color2[4 - 1];
    color[6 - 1] = color2[38 - 1];
    color[5 - 1] = color2[41 - 1];
    color[4 - 1] = color2[44 - 1];
    color[38 - 1] = color2[13 - 1];
    color[41 - 1] = color2[14 - 1];
    color[44 - 1] = color2[15 - 1];
    color[13 - 1] = color2[53 - 1];
    color[14 - 1] = color2[50 - 1];
    color[15 - 1] = color2[47 - 1];
}

void moove3_l3()
{
    color[9 - 1] = color2[54 - 1];
    color[8 - 1] = color2[51 - 1];
    color[7 - 1] = color2[48 - 1];
    color[39 - 1] = color2[9 - 1];
    color[42 - 1] = color2[8 - 1];
    color[45 - 1] = color2[7 - 1];
    color[16 - 1] = color2[39 - 1];
    color[17 - 1] = color2[42 - 1];
    color[18 - 1] = color2[45 - 1];
    color[54 - 1] = color2[16 - 1];
    color[51 - 1] = color2[17 - 1];
    color[48 - 1] = color2[18 - 1];
    color[34 - 1] = color2[28 - 1];
    color[35 - 1] = color2[31 - 1];
    color[36 - 1] = color2[34 - 1];
    color[33 - 1] = color2[35 - 1];
    color[30 - 1] = color2[36 - 1];
    color[29 - 1] = color2[33 - 1];
    color[28 - 1] = color2[30 - 1];
    color[31 - 1] = color2[29 - 1];
}

void reversemoove3_l3()
{
    color[54 - 1] = color2[9 - 1];
    color[51 - 1] = color2[8 - 1];
    color[48 - 1] = color2[7 - 1];
    color[9 - 1] = color2[39 - 1];
    color[8 - 1] = color2[42 - 1];
    color[7 - 1] = color2[45 - 1];
    color[39 - 1] = color2[16 - 1];
    color[42 - 1] = color2[17 - 1];
    color[45 - 1] = color2[18 - 1];
    color[16 - 1] = color2[54 - 1];
    color[17 - 1] = color2[51 - 1];
    color[18 - 1] = color2[48 - 1];
    color[28 - 1] = color2[34 - 1];
    color[31 - 1] = color2[35 - 1];
    color[34 - 1] = color2[36 - 1];
    color[35 - 1] = color2[33 - 1];
    color[36 - 1] = color2[30 - 1];
    color[33 - 1] = color2[29 - 1];
    color[30 - 1] = color2[28 - 1];
    color[29 - 1] = color2[31 - 1];
}

void mecanica(int face)
{

    if (color[face - 1] == 1)
        glColor3d(1, 0, 1);
    if (color[face - 1] == 2)
        glColor3d(0, 0, 1);
    if (color[face - 1] == 3)
        glColor3d(0, 1, 0);
    if (color[face - 1] == 4)
        glColor3d(1, 0, 0);
    if (color[face - 1] == 5)
        glColor3d(1, 1, 1);
    if (color[face - 1] == 6)
        glColor3d(1, 1, 0);
}

void quadrado(int x1, int x2, int y1, int y2, int z, int face)
{
    if (face == 1 || face == 2)
    {
        glVertex3d(cord3[z], cord1[x1], cord2[y1]);
        glVertex3d(cord3[z], cord1[x1], cord2[y2]);
        glVertex3d(cord3[z], cord1[x1], cord2[y2]);
        glVertex3d(cord3[z], cord1[x2], cord2[y2]);
        glVertex3d(cord3[z], cord1[x2], cord2[y2]);
        glVertex3d(cord3[z], cord1[x2], cord2[y1]);
        glVertex3d(cord3[z], cord1[x2], cord2[y1]);
        glVertex3d(cord3[z], cord1[x1], cord2[y1]);
    }
    if (face == 3 || face == 4)
    {
        glVertex3d(cord1[x1], cord3[z], cord2[y1]);
        glVertex3d(cord1[x1], cord3[z], cord2[y2]);
        glVertex3d(cord1[x1], cord3[z], cord2[y2]);
        glVertex3d(cord1[x2], cord3[z], cord2[y2]);
        glVertex3d(cord1[x2], cord3[z], cord2[y2]);
        glVertex3d(cord1[x2], cord3[z], cord2[y1]);
        glVertex3d(cord1[x2], cord3[z], cord2[y1]);
        glVertex3d(cord1[x1], cord3[z], cord2[y1]);
    }
    if (face == 5 || face == 6)
    {
        glVertex3d(cord1[x1], cord1[y1], cord3[z]);
        glVertex3d(cord1[x1], cord1[y2], cord3[z]);
        glVertex3d(cord1[x1], cord1[y2], cord3[z]);
        glVertex3d(cord1[x2], cord1[y2], cord3[z]);
        glVertex3d(cord1[x2], cord1[y2], cord3[z]);
        glVertex3d(cord1[x2], cord1[y1], cord3[z]);
        glVertex3d(cord1[x2], cord1[y1], cord3[z]);
        glVertex3d(cord1[x1], cord1[y1], cord3[z]);
    }
}

void draw(void)
{
    int i = 0;
    while (i < 54)
    {
        color2[i] = color[i];
        i++;
    }
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMaterialfv(GL_FRONT, GL_SPECULAR, especularidade);
    glMateriali(GL_FRONT, GL_SHININESS, especularidade_do_material);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_do_ambiente);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_do_ambiente2);
    glLightfv(GL_LIGHT0, GL_AMBIENT, luz_do_ambiente);
    glLightfv(GL_LIGHT1, GL_AMBIENT, luz_do_ambiente2);
    glLightfv(GL_LIGHT0, GL_SPECULAR, luz_especular);
    glLightfv(GL_LIGHT1, GL_SPECULAR, luz_especular2);
    glLightfv(GL_LIGHT0, GL_POSITION, posicao_da_luz);
    glLightfv(GL_LIGHT1, GL_POSITION, posicao_da_luz2);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, luz_difusa);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, luz_difusa2);
    glDisable(GL_POLYGON_STIPPLE);
    glPolygonMode(GL_BACK, GL_LINE);
    glPolygonMode(GL_BACK, GL_FILL);
    glClear(GL_COLOR_BUFFER_BIT);
    glNormal3f(0, 0, 1.0);
    mecanica(1);
    //faces de 1 a 9
    glBegin(GL_POLYGON);
    quadrado(0, 1, 0, 1, 0, 1);
    glEnd();
    mecanica(2);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 2, 3, 0, 1);
    glEnd();
    mecanica(3);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 4, 5, 0, 1);
    glEnd();
    mecanica(4);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 0, 1, 0, 1);
    glEnd();
    mecanica(5);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 2, 3, 0, 1);
    glEnd();
    mecanica(6);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 4, 5, 0, 1);
    glEnd();
    mecanica(7);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 0, 1, 0, 1);
    glEnd();
    mecanica(8);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 2, 3, 0, 1);
    glEnd();
    mecanica(9);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 4, 5, 0, 1);
    glEnd();
    mecanica(10);
    //faces de 10 a 18
    glBegin(GL_POLYGON);
    quadrado(0, 1, 0, 1, 1, 2);
    glEnd();
    mecanica(11);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 2, 3, 1, 2);
    glEnd();
    mecanica(12);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 4, 5, 1, 2);
    glEnd();
    mecanica(13);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 0, 1, 1, 2);
    glEnd();
    mecanica(14);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 2, 3, 1, 2);
    glEnd();
    mecanica(15);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 4, 5, 1, 2);
    glEnd();
    mecanica(16);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 0, 1, 1, 2);
    glEnd();
    mecanica(17);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 2, 3, 1, 2);
    glEnd();
    mecanica(18);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 4, 5, 1, 2);
    glEnd();
    mecanica(19);
    //faces de 19 a 27
    glBegin(GL_POLYGON);
    quadrado(0, 1, 0, 1, 0, 3);
    glEnd();
    mecanica(20);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 2, 3, 0, 3);
    glEnd();
    mecanica(21);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 4, 5, 0, 3);
    glEnd();
    mecanica(22);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 0, 1, 0, 3);
    glEnd();
    mecanica(23);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 2, 3, 0, 3);
    glEnd();
    mecanica(24);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 4, 5, 0, 3);
    glEnd();
    mecanica(25);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 0, 1, 0, 3);
    glEnd();
    mecanica(26);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 2, 3, 0, 3);
    glEnd();
    mecanica(27);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 4, 5, 0, 3);
    glEnd();
    mecanica(28);
    //faces de 28 a 36
    glBegin(GL_POLYGON);
    quadrado(0, 1, 0, 1, 1, 4);
    glEnd();
    mecanica(29);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 2, 3, 1, 4);
    glEnd();
    mecanica(30);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 4, 5, 1, 4);
    glEnd();
    mecanica(31);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 0, 1, 1, 4);
    glEnd();
    mecanica(32);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 2, 3, 1, 4);
    glEnd();
    mecanica(33);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 4, 5, 1, 4);
    glEnd();
    mecanica(34);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 0, 1, 1, 4);
    glEnd();
    mecanica(35);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 2, 3, 1, 4);
    glEnd();
    mecanica(36);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 4, 5, 1, 4);
    glEnd();
    mecanica(37);
    //faces de 37 a 45
    glBegin(GL_POLYGON);
    quadrado(0, 1, 0, 1, 0, 5);
    glEnd();
    mecanica(38);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 2, 3, 0, 5);
    glEnd();
    mecanica(39);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 4, 5, 0, 5);
    glEnd();
    mecanica(40);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 0, 1, 0, 5);
    glEnd();
    mecanica(41);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 2, 3, 0, 5);
    glEnd();
    mecanica(42);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 4, 5, 0, 5);
    glEnd();
    mecanica(43);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 0, 1, 0, 5);
    glEnd();
    mecanica(44);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 2, 3, 0, 5);
    glEnd();
    mecanica(45);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 4, 5, 0, 5);
    glEnd();
    mecanica(46);
    //faces de 46 a 54
    glBegin(GL_POLYGON);
    quadrado(0, 1, 0, 1, 1, 6);
    glEnd();
    mecanica(47);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 2, 3, 1, 6);
    glEnd();
    mecanica(48);
    glBegin(GL_POLYGON);
    quadrado(0, 1, 4, 5, 1, 6);
    glEnd();
    mecanica(49);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 0, 1, 1, 6);
    glEnd();
    mecanica(50);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 2, 3, 1, 6);
    glEnd();
    mecanica(51);
    glBegin(GL_POLYGON);
    quadrado(2, 3, 4, 5, 1, 6);
    glEnd();
    mecanica(52);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 0, 1, 1, 6);
    glEnd();
    mecanica(53);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 2, 3, 1, 6);
    glEnd();
    mecanica(54);
    glBegin(GL_POLYGON);
    quadrado(4, 5, 4, 5, 1, 6);
    glEnd();
    //linhas de demarca��o
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    quadrado(0, 1, 0, 1, 0, 1);
    quadrado(0, 1, 2, 3, 0, 1);
    quadrado(0, 1, 4, 5, 0, 1);
    quadrado(2, 3, 0, 1, 0, 1);
    quadrado(2, 3, 2, 3, 0, 1);
    quadrado(2, 3, 4, 5, 0, 1);
    quadrado(4, 5, 0, 1, 0, 1);
    quadrado(4, 5, 2, 3, 0, 1);
    quadrado(4, 5, 4, 5, 0, 1);
    quadrado(0, 1, 0, 1, 1, 2);
    quadrado(0, 1, 2, 3, 1, 2);
    quadrado(0, 1, 4, 5, 1, 2);
    quadrado(2, 3, 0, 1, 1, 2);
    quadrado(2, 3, 2, 3, 1, 2);
    quadrado(2, 3, 4, 5, 1, 2);
    quadrado(4, 5, 0, 1, 1, 2);
    quadrado(4, 5, 2, 3, 1, 2);
    quadrado(4, 5, 4, 5, 1, 2);
    quadrado(0, 1, 0, 1, 0, 3);
    quadrado(0, 1, 2, 3, 0, 3);
    quadrado(0, 1, 4, 5, 0, 3);
    quadrado(2, 3, 0, 1, 0, 3);
    quadrado(2, 3, 2, 3, 0, 3);
    quadrado(2, 3, 4, 5, 0, 3);
    quadrado(4, 5, 0, 1, 0, 3);
    quadrado(4, 5, 2, 3, 0, 3);
    quadrado(4, 5, 4, 5, 0, 3);
    quadrado(0, 1, 0, 1, 1, 4);
    quadrado(0, 1, 2, 3, 1, 4);
    quadrado(0, 1, 4, 5, 1, 4);
    quadrado(2, 3, 0, 1, 1, 4);
    quadrado(2, 3, 2, 3, 1, 4);
    quadrado(2, 3, 4, 5, 1, 4);
    quadrado(4, 5, 0, 1, 1, 4);
    quadrado(4, 5, 2, 3, 1, 4);
    quadrado(4, 5, 4, 5, 1, 4);
    quadrado(0, 1, 0, 1, 0, 5);
    quadrado(0, 1, 2, 3, 0, 5);
    quadrado(0, 1, 4, 5, 0, 5);
    quadrado(2, 3, 0, 1, 0, 5);
    quadrado(2, 3, 2, 3, 0, 5);
    quadrado(2, 3, 4, 5, 0, 5);
    quadrado(4, 5, 0, 1, 0, 5);
    quadrado(4, 5, 2, 3, 0, 5);
    quadrado(4, 5, 4, 5, 0, 5);
    quadrado(0, 1, 0, 1, 1, 6);
    quadrado(0, 1, 2, 3, 1, 6);
    quadrado(0, 1, 4, 5, 1, 6);
    quadrado(2, 3, 0, 1, 1, 6);
    quadrado(2, 3, 2, 3, 1, 6);
    quadrado(2, 3, 4, 5, 1, 6);
    quadrado(4, 5, 0, 1, 1, 6);
    quadrado(4, 5, 2, 3, 1, 6);
    quadrado(4, 5, 4, 5, 1, 6);
    glEnd();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glOrtho(500, -500, -500, 500, -500, 500);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHT1);
    glShadeModel(GL_FLAT);
    girax = 60, giray = 30, alpha = 45, fix = 75;
}

void animacao(int passo)
{
    if (speed <= 200)
    {
        girax += 10;
        giray += 10;
        speed++;
    }
    if (speed == 100)
        moove1_l1();
    if (speed == 110)
        moove2_l1();
    if (speed == 120)
        reversemoove3_l1();
    if (speed == 130)
        moove1_l2();
    if (speed == 140)
        moove2_l2();
    if (speed == 150)
        reversemoove3_l2();
    if (speed == 160)
        moove1_l3();
    if (speed == 170)
        moove2_l3();
    if (speed == 180)
        reversemoove3_l3();

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glMaterialfv(GL_FRONT, GL_SPECULAR, especularidade);
    glMateriali(GL_FRONT, GL_SHININESS, especularidade_do_material);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_do_ambiente);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_do_ambiente2);
    glLightfv(GL_LIGHT0, GL_AMBIENT, luz_do_ambiente);
    glLightfv(GL_LIGHT1, GL_AMBIENT, luz_do_ambiente2);
    glLightfv(GL_LIGHT0, GL_SPECULAR, luz_especular);
    glLightfv(GL_LIGHT1, GL_SPECULAR, luz_especular2);
    glLightfv(GL_LIGHT0, GL_POSITION, posicao_da_luz);
    glLightfv(GL_LIGHT1, GL_POSITION, posicao_da_luz2);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, luz_difusa);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, luz_difusa2);
    glTranslatef(0, 0, -fix);
    glRotatef(girax, 1, 0, 0);
    glRotatef(giray, 0, 1, 0);
    glutPostRedisplay();
    glutTimerFunc(speed, animacao, 1);
}

void mouse(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:
        //if (state == GLUT_UP && x > -500 && y > -500)
        fix++;
        glutPostRedisplay();
        break;
    case GLUT_RIGHT_BUTTON:
        //if (state == GLUT_UP && x && y)
        fix--;
        glutPostRedisplay();
        break;
    }
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glMaterialfv(GL_FRONT, GL_SPECULAR, especularidade);
    glMateriali(GL_FRONT, GL_SHININESS, especularidade_do_material);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_do_ambiente);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_do_ambiente2);
    glLightfv(GL_LIGHT0, GL_AMBIENT, luz_do_ambiente);
    glLightfv(GL_LIGHT1, GL_AMBIENT, luz_do_ambiente2);
    glLightfv(GL_LIGHT0, GL_SPECULAR, luz_especular);
    glLightfv(GL_LIGHT1, GL_SPECULAR, luz_especular2);
    glLightfv(GL_LIGHT0, GL_POSITION, posicao_da_luz);
    glLightfv(GL_LIGHT1, GL_POSITION, posicao_da_luz2);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, luz_difusa);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, luz_difusa2);
    glTranslatef(0, 0, -fix);
    glRotatef(girax, 1, 0, 0);
    glRotatef(giray, 0, 1, 0);
    glutPostRedisplay();
}

void special(int key, int x, int y);

void reshape(int w, int h);

void keyboard(unsigned char key, int x, int y);

int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    puts("Espere o cubo parar de embaralhar\n");
    puts("Utilize as setas para girar a visualizacao\ndo cubo");
    puts("\nUtilize as teclas de F1 a F9 e as teclas\nnumericas de 1 a 9 para controlar o cubo");
    puts("\nUtilize os botoes do mouse para alterar o\nzoom");
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(500, 50);
    glutCreateWindow("CUBO MAGICO");
    init();
    glutDisplayFunc(draw);
    glutReshapeFunc(reshape);
    glutSpecialFunc(special);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutTimerFunc(1000, animacao, 1);
    glutMainLoop();
}

void keyboard(unsigned char key, int x, int y)
{
    if (speed > 199 || key == 27)
        switch (key)
        {
        case 27:
            exit(0);
            break;
        case '1':
            reversemoove1_l1();
            break;
        case '2':
            reversemoove2_l1();
            break;
        case '3':
            reversemoove3_l1();
            break;
        case '4':
            reversemoove1_l2();
            break;
        case '5':
            reversemoove2_l2();
            break;
        case '6':
            reversemoove3_l2();
            break;
        case '7':
            reversemoove1_l3();
            break;
        case '8':
            reversemoove2_l3();
            break;
        case '9':
            reversemoove3_l3();
            break;
        }
    glutPostRedisplay();
}

void special(int key, int x, int y)
{
    if (speed > 199)
        switch (key)
        {
        case GLUT_KEY_DOWN:
            girax++;
            break;
        case GLUT_KEY_LEFT:
            giray--;
            break;
        case GLUT_KEY_UP:
            girax--;
            break;
        case GLUT_KEY_RIGHT:
            giray++;
            break;
        case GLUT_KEY_F1:
            moove1_l1();
            break;
        case GLUT_KEY_F2:
            moove2_l1();
            break;
        case GLUT_KEY_F3:
            moove3_l1();
            break;
        case GLUT_KEY_F4:
            moove1_l2();
            break;
        case GLUT_KEY_F5:
            moove2_l2();
            break;
        case GLUT_KEY_F6:
            moove3_l2();
            break;
        case GLUT_KEY_F7:
            moove1_l3();
            break;
        case GLUT_KEY_F8:
            moove2_l3();
            break;
        case GLUT_KEY_F9:
            moove3_l3();
            break;
        }
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glMaterialfv(GL_FRONT, GL_SPECULAR, especularidade);
    glMateriali(GL_FRONT, GL_SHININESS, especularidade_do_material);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_do_ambiente);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_do_ambiente2);
    glLightfv(GL_LIGHT0, GL_AMBIENT, luz_do_ambiente);
    glLightfv(GL_LIGHT1, GL_AMBIENT, luz_do_ambiente2);
    glLightfv(GL_LIGHT0, GL_SPECULAR, luz_especular);
    glLightfv(GL_LIGHT1, GL_SPECULAR, luz_especular2);
    glLightfv(GL_LIGHT0, GL_POSITION, posicao_da_luz);
    glLightfv(GL_LIGHT1, GL_POSITION, posicao_da_luz2);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, luz_difusa);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, luz_difusa2);
    glTranslatef(0, 0, -fix);
    glRotatef(girax, 1, 0, 0);
    glRotatef(giray, 0, 1, 0);
    glutPostRedisplay();
}

void reshape(int w, int h)
{
    if (h == 0)
        h = 1;
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    aspec = (GLfloat)w / (GLfloat)h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(alpha, aspec, 2.1, 650);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glMaterialfv(GL_FRONT, GL_SPECULAR, especularidade);
    glMateriali(GL_FRONT, GL_SHININESS, especularidade_do_material);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_do_ambiente);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luz_do_ambiente2);
    glLightfv(GL_LIGHT0, GL_AMBIENT, luz_do_ambiente);
    glLightfv(GL_LIGHT1, GL_AMBIENT, luz_do_ambiente2);
    glLightfv(GL_LIGHT0, GL_SPECULAR, luz_especular);
    glLightfv(GL_LIGHT1, GL_SPECULAR, luz_especular2);
    glLightfv(GL_LIGHT0, GL_POSITION, posicao_da_luz);
    glLightfv(GL_LIGHT1, GL_POSITION, posicao_da_luz2);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, luz_difusa);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, luz_difusa2);
    glTranslatef(0, 0, -fix);
    glRotatef(girax, 1, 0, 0);
    glRotatef(giray, 0, 1, 0);
}
