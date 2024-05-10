Algoritmo sin_titulo
	Escribir 'Sistema de Gestion de Sedes'
	Repetir
		Limpiar Pantalla
		Escribir '1. Ingreso Sede'
		Escribir '2. Despliegue Sede'
		Escribir '3. Modificar Sede'
		Escribir '4. Borrar Sede'
		Escribir '5. Exit'
		Escribir 'Opciones a Elegir: [1/2/3/4/5/6]'
		Escribir 'Ingresa tu opción:'
		Leer x
		Según x Hacer
			1:
				Limpiar Pantalla
				Escribir 'Agregar Sedes'
				Escribir 'Ingrese Id de la Sede:'
				Leer id
				Definir id Como Cadena
				Escribir 'Ingrese nombre de Sede:'
				Leer ns
				Definir ns Como Cadena
				Escribir 'Ingrese telefono de Sede:'
				Leer ts
				Definir ts Como Cadena
			2:
				Limpiar Pantalla
				Escribir 'Detalles Sedes'
				Mientras condicion Hacer
					Escribir 'Id de Sede:'
					// id de opción 1
					Escribir id
					Escribir 'Nombre Sede:'
					// nombre de opción 1
					Escribir ns
					Escribir 'Telefono Sede:'
					// telefono de opcion 1
					Escribir ts
				FinMientras
			3:
				Limpiar Pantalla
				Escribir 'Modificar Detalles Sedes'
				Escribir 'Ingrese Id de la Sede a modificar:'
				Leer id
				Definir id Como Caracter
				Mientras id<>id Hacer
					Si condicion Entonces
						Escribir 'Ingrese nuevo Id de sede:'
						Leer nid
						Definir nid Como Cadena
						Escribir 'Ingrese nuevo nombre de sede:'
						Leer nsd
						Definir nsd Como Cadena
						Escribir 'Ingrese nuevo telefono de sede:'
						Leer nts
						Definir nts Como Cadena
						Escribir 'sede modificada correctamente'
					FinSi
				FinMientras
			4:
				Limpiar Pantalla
				Escribir 'Detalles Sedes a borrar:'
				Escribir 'Sistema busqueda de sedes'
				Escribir 'Ingrese Id de sede a borrar'
				Leer id
				Definir id como caracter
				Mientras condicion Hacer
					Si condicion Entonces
						Escribir 'Borrado de Sede exitoso'
					FinSi
				FinMientras
		FinSegún
		Escribir 'Presione Enter para continuar:'
		Esperar Tecla
	Hasta Que x=5
FinAlgoritmo

Función SinTitulo
	
FinFunción
