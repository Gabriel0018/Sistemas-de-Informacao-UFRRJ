frase = str(input('Escreva a frase que será criptografada: '))
salto = int(input('Digite a quantidade de saltos que deseja efetuar na criptografia: '))

frase = frase.lower()
print(frase)


a = ord('a') + salto 
b = ord('b') + salto
c = ord('c') + salto
d = ord('d') + salto
e = ord('e') + salto
f = ord('f') + salto
g = ord('g') + salto
h = ord('h') + salto
i = ord('i') + salto
j = ord('j') + salto
k = ord('k') + salto
l = ord('l') + salto
m = ord('m') + salto
n = ord('n') + salto
o = ord('o') + salto
p = ord('p') + salto
q = ord('q') + salto
r = ord('r') + salto
s = ord('s') + salto
t = ord('t') + salto
u = ord('u') + salto
v = ord('v') + salto
w = ord('w') + salto
x = ord('x') + salto
y = ord('y') + salto
z = ord('z') + salto
vazio = ord (' ') + salto

if 'a' in frase:
    a = chr(a)
    print(a * frase.count('a'), end = '')
    
if 'b' in frase:
    b = chr(b)
    print(b * frase.count('b'), end = '')
    
if 'c' in frase:
    c = chr(c)
    print(c * frase.count('c'), end = '')
    
if 'd' in frase:
    d = chr(d)
    print(d * frase.count('d'), end = '')
   
if 'e' in frase:
    e = chr(e)
    print(e * frase.count('e'), end = '')
    
if 'f' in frase:
    f = chr(f)
    print(f * frase.count('f'), end = '')
    
if 'g' in frase:
    g = chr(g)
    print(g * frase.count('g'), end = '')
    
if 'h' in frase:
    h = chr(h)
    print(h * frase.count('h'), end = '')
    
if 'i' in frase:
    i = chr(i)
    print(i * frase.count('i'), end = '')
    
if 'j' in frase:
    j = chr(j)
    print(j * frase.count('j'), end = '')
    
if 'k' in frase:
    k = chr(k)
    print(k * frase.count('k'), end = '')
    
if 'l' in frase:
    l = chr(l)
    print(l * frase.count('l'), end = '')
    
if 'm' in frase:
    m = chr(m)
    print(m * frase.count('m'), end = '')
    
if 'n' in frase:
    n = chr(n)
    print(n * frase.count('n'), end = '')
    
if 'o' in frase:
    o = chr(o)
    print(o * frase.count('o'), end = '')
    
if 'p' in frase:
    p = chr(p)
    print(p * frase.count('p'), end = '')
    
if 'q' in frase:
    q = chr(q)
    print(q * frase.count('q'), end = '')
    
if 'r' in frase:
    r = chr(r)
    print(r * frase.count('r'), end = '')
    
if 's' in frase:
    s = chr(s)
    print(s * frase.count('s'), end = '')
    
if 't' in frase:
    t = chr(t * frase.count('t'))
    print(t * frase.count('t'), end = '')
    
if 'u' in frase:
    u = chr(u)
    print(u * frase.count('u'), end = '')
    
if 'v' in frase:
    v = chr(v)
    print(v * frase.count('v'), end = '')
    
if 'w' in frase:
    w = chr(w)
    print(w * frase.count('w'), end = '')
    
if 'x' in frase:
    x = chr(x)
    print(x * frase.count('x'), end = '')    

if 'y' in frase:
    y = chr(y)
    print(y * frase.count('y'), end = '')
    
if 'z' in frase:
    z = chr(z)
    print(z * frase.count('z'), end = '')

if ' ' in frase:
    vazio = chr(vazio)
    print(vazio * frase.count(' '), end = ' ')





