#include <stdio.h>
#include <math.h>
int main()
{   
    long double x; // Input do usuário
    
    long double fatb, fatc, fatd, fate, fatf, fatg, fath, fati, fatj, rb, rc, rd, re, rf, rg, rh, ri, rj; // Correspondem ao cálculo do fatorial dos positivos
    long double a, b, c, d, e, f, g, h, i, j; // Correspondem aos  resultados positivos da fórmula
    
    long double xfata, xfatb, xfatc, xfatd, xfate, xfatf, xfatg, xfath, xfati, xfatj, xra, xrb, xrc, xrd, xre, xrf, xrg, xrh, xri, xrj; //Correspondem ao calculo do fatorial dos negativos
    long double xa, xb, xc, xd, xe, xf, xg, xh, xi, xj; // Correspondem aos resultados negativos da fórmula
    
    long double p10, p11, p12, p13, p14, p15; // Total dos positivos de cada termo
    long double n10, n11, n12, n13, n14, n15; // Total dos negativos de cada termo
    long double t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20; // Total do somatório de cada termo
    printf("O programa calcula de 10 a 20 termos o valor de seno!\n(A precisão a partir do 10ᵒ termo em C chega ao seu limite, fazendo em alguns valores o resultado ser o mesmo)\nInforme o valor do ângulo: ");
    scanf("%Lf", &x);
    
    x = x * (3.14159 / 180.0); // Conversão para radianos
    
    rb = rc = rd = re = rf = rg = rh = ri = rj = xra = xrb = xrc = xrd = xre = xrf = xrg = xrh = xri = xrj = 1;
    xfata = 3;
    fatb = 5;
    xfatb = 7;
    fatc = 9;
    xfatc = 11;
    fatd = 13;
    xfatd = 15;
    fate = 17;
    xfate = 19;
    fatf = 21;
    xfatf = 23;
    fatg = 25;
    xfatg = 27;
    fath = 29;
    xfath = 31;
    fati = 33;
    xfati = 35;
    fatj = 37;
    xfatj = 39;
    
    for (fatb; fatb >= 1; fatb--)
    {
        rb *= fatb;
    }
    for (fatc; fatc >= 1; fatc--)
    {
        rc *= fatc;
    }
    for (fatd; fatd >= 1; fatd--)
    {
        rd *= fatd;
    }
    for (fate; fate >= 1; fate--)
    {
        re *= fate;
    }
    for (fatf; fatf >= 1; fatf--)
    {
        rf *= fatf;
    }
    for (fatg; fatg >= 1; fatg--)
    {
        rg *= fatg;
    }
    for (fath; fath >= 1; fath--)
    {
        rh *= fath;
    }
    for (fati; fati >= 1; fati--)
    {
        ri *= fati;
    }
    for (fatj; fatj >= 1; fatj--)
    {
        rj *= fatj;
    }
    a = x;
    b = pow(x, 5) / rb;
    c = pow(x, 9) / rc;
    d = pow(x, 13) / rd;
    e = pow(x, 17) / re;
    f = pow(x, 21) / rf;
    g = pow(x, 25) / rg;
    h = pow(x, 29) / rh;
    i = pow(x, 33) / ri;
    j = pow(x, 37) / rj;
    
    p10 = a + b + c + d + e;
    p11 = a + b + c + d + e + f;
    p12 = a + b + c + d + e + f + g;
    p13 = a + b + c + d + e + f + g + h;
    p14 = a + b + c + d + e + f + g + h + i;
    p15 = a + b + c + d + e + f + g + h + i + j;
    
    for (xfata; xfata >= 1; xfata--)
    {
        xra *= xfata;
    }
    for (xfatb; xfatb >= 1; xfatb--)
    {
        xrb *= xfatb;
    }
    for (xfatc; xfatc >= 1; xfatc--)
    {
        xrc *= xfatc;
    }
    for (xfatd; xfatd >= 1; xfatd--)
    {
        xrd *= xfatd;
    }
    for (xfate; xfate >= 1; xfate--)
    {
        xre *= xfate;
    }
    for (xfatf; xfatf >= 1; xfatf--)
    {
        xrf *= xfatf;
    }
    for (xfatg; xfatg >= 1; xfatg--)
    {
        xrg *= xfatg;
    }
    for (xfath; xfath >= 1; xfath--)
    {
        xrh *= xfath;
    }
    for (xfati; xfati >= 1; xfati--)
    {
        xri *= xfati;
    }
    for (xfatj; xfatj >= 1; xfatj--)
    {
        xrj *= xfatj;
    }
    
    xa = pow(x, 3) / xra;
    xb = pow(x, 7) / xrb;
    xc = pow(x, 11) / xrc;
    xd = pow(x, 15) / xrd;
    xe = pow(x, 19) / xre;
    xf = pow(x, 23) / xrf;
    xg = pow(x, 27) / xrg;
    xh = pow(x, 31) / xrh;
    xi = pow(x, 35) / xri;
    xj = pow(x, 39) / xrj;
    
    n10 = xa + xb + xc + xd + xe; 
    n11 = xa + xb + xc + xd + xe + xf;
    n12 = xa + xb + xc + xd + xe + xf + xg;
    n13 = xa + xb + xc + xd + xe + xf + xg + xh;
    n14 = xa + xb + xc + xd + xe + xf + xg + xh + xi;
    n15 = xa + xb + xc + xd + xe + xf + xg + xh + xi + xj;
    
    t10 = p10 - n10;
    t11 = p11 - n10;
    t12 = p11 - n11;
    t13 = p12 - n11;
    t14 = p12 - n12;
    t15 = p13 - n12;
    t16 = p13 - n13;
    t17 = p14 - n13;
    t18 = p14 - n14;
    t19 = p15 - n14;
    t20 = p15 - n15;
    
    printf("\n");
    printf("10ᵒ termo = %Lf\n11ᵒ termo = %Lf\n12ᵒ termo = %Lf\n13ᵒ termo = %Lf\n14ᵒ termo = %Lf\n15ᵒ termo = %Lf\n", t10, t11, t12, t13, t14, t15);
    printf("16ᵒ termo = %Lf\n17ᵒ termo = %Lf\n18ᵒ termo = %Lf\n19ᵒ termo = %Lf\n20ᵒ termo = %Lf\n", t16, t17, t18, t19, t20);
}

