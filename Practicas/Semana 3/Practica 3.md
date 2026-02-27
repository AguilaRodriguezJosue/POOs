# practica 3 - analisis conceptual
# parte 1
## punto 1

### 1 que es una clase base?
una clase base es una clase general que tiene caracteristicas y comportamientos que pueden ser compartidos por otras clases mas especificas y sirve como modelo principal del cual otras pueden heredar informacion
### que es una clase derivada?
es una clase que se crea a partir de una clase base, de esta hereda caracteristicas y comportamientos pero tambien puede añadir nuevas caracteristicas
### que relacion existe entre una clase base y una clse derivada?
una clase derivada es un tipo de clase base ya que hereda sus caracteristicas pero tambien es capas de añadir nuevas

## punto 2
### 1 Que características comparten todos los vehículos?  
color, velocidad, número de ruedas, encender y apagar.  

### 2 Que características serían exclusivas de cada vehículo?
Automóvil: número de puertas, tipo de carrocería, usar aire acondicionado.  
Motocicleta: tipo de manubrio, cilindrada, tipo de casco requerido.  
Camión: capacidad de carga, número de ejes, tamaño del remolque. 

### 3 Por que es mejor usar herencia en lugar de repetir todo?
Usar herencia evita duplicar código, facilita mantenimiento y organiza mejor el programa.  

# parte 2
## punto 1
### rellenar tabla
clase    atributos heredados  comportamiento distinto
____________________
animal      nombre, edad        hacer sonido
perro       nombre, edad           ladrar
gato        nombre, edad          maullar
vaca        nombre, edad           mugir

## punto 2
### Que metodo seria un buen candidato para aplicar polimorfismo?
hacerSonido() seria la mejor ya que todos los animales haver un sonido, pero cada uno es diferente
### por que no tendria sentido duplicar ese metodo en una clase sin herencia? 
duplicar hacerSonido()en cada clase derivada seria algo repetitivo y propenso a muchos errores