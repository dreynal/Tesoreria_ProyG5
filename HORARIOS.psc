Algoritmo HORARIOS
	Escribir 'SISTEMA DE GESTION DE HORARIOS'
	Limpiar Pantalla
	Escribir '1. Ingreso horario'
	Escribir '2. Despliegue horario'
	Escribir '3. Modificar horario'
	Escribir '4. Buscar horario'
	Escribir '5. Borrar horario'
	Escribir '6. Exit'
	Escribir 'Opciones a elegir:[1/2/3/4/5/6]'
	Escribir 'Ingresa tu opcion:'
	Leer x
	Según x Hacer
		1:
			Limpiar Pantalla
			Escribir 'Agregar horarios'
			Escribir 'Ingrese ID del horario:'
			Leer id
			Definir id como cadena
			Escribir 'Ingrese horario de lunes a viernes:'
			Leer hlav
			Definir hlav como cadena
			Escribir 'Ingrese horario de sabado'
			Leer hs
			Definir hs como cadena
			Escribir 'Ingrese horario de domingo'
			Leer hd
			Definir hd como cadena
		2:
			Limpiar Pantalla
			Escribir 'detalles horarios'
			Mientras condicion Hacer
				Escribir 'Id de Horario:'
				Escribir id
				Escribir 'Horario Lunes a Viernes:'
				Escribir hlav
				Escribir 'Horario Sabado:'
				Escribir hs
				Escribir 'Horario Domingo:'
				Escribir hd
			FinMientras
		3:
			Limpiar Pantalla
			Escribir 'Modificar Detalles Horarios'
			Escribir 'Ingrese Id del horario a modificar:'
			Leer id
			Definir id como cadena
			Mientras id<>id Hacer
				Si condicion Entonces
					Escribir 'Ingrese nuevo Id de horario:'
					Leer nid
					Definir nid como cadena
					Escribir 'Ingrese nuevo horario de lunes a viernes:'
					Leer nhlav
					Definir nhlav como cadena
					Escribir 'Ingrese nuevo horario de sabado:'
					Leer nhs
					Definir nhs como cadena
					Escribir 'Ingrese nuevo horario de domingo:'
					Leer nhd
					definir nhd como cadena
					Escribir 'Horario modificado correctamente'
				FinSi
			FinMientras
		4:
			Limpiar Pantalla
			Escribir 'Borrar horarios'
			Escribir 'Ingrese Id del horario a borrar:'
			Leer id
			Definir id como cadena 
			Mientras id<>id Hacer
				Si condicion Entonces
					Escribir 'Ingrese id de horario:'
					Leer id
					Definir id como cadena
					Escribir 'Ingrese horario de lunes a viernes:'
					Leer hlav
					Definir hlav como cadena
					Escribir 'Ingrese horario de sabado:'
					Leer hs
					Definir hs como cadena
					Escribir 'Ingrese horario de domingo:'
					Leer hd
					Definir hd como cadena
					Escribir 'Horario borrado correctamente'
				FinSi
			FinMientras
	FinSegún
	Escribir 'Presiona Enter para continuar:'
	Esperar tecla
FinAlgoritmo
