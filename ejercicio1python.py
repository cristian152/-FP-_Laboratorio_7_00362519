print("impares de un rango [A,B]")

def rango1():
	b1 = int(input("Inicio de rango: "))
	b2 = int(input("Fin de rango:    "))
	a = 0

	for i in range(b1,b2+1):
		if i%2 != 0:  
			a = a+i   
	print("Suma de impares: ",a)  


def rango1y2():
	a = 0
	b = 0

	b1 = int(input("Inicio de rango[A] 1: "))
	b2 = int(input("Fin de rango[B] 1:    "))
	b3 = int(input("Inicio de rango[A] 2: "))
	b4 = int(input("Fin de rango[B] 2:    "))

	for i in range(b1,b2+1):  
		if i%2 != 0:
			a = a+i
	print("Caso 1: ",a) 

	for i in range(b3,b4+1): 
		if i%2 != 0:
			b = b+i  
	print("Caso 2: ",b) 


p = int(input("Ingrese el numero de casos de prueba (Maximo 2) "))
while p > 0:  

	if p == 1:  
		rango1()  
		p = int(input("Ingrese el numero de casos de prueba (Maximo 2) "))

	elif p == 2:
		rango1y2()  
		p = int(input("Ingrese el numero de casos de prueba (Maximo 2) "))

	elif p >2:
		print("MAXIMO 2 CASOS!")
		p = int(input("Ingrese el numero de casos de prueba (Maximo 2) "))
	else:
		break


