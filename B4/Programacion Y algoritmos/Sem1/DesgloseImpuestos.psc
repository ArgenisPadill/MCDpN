Algoritmo DesgloseImpuestos
	Definir importeBruto, iva, subtotal, ivaRetenido, isrRetenido, totalRetenciones, totalDeposito Como Real
	Escribir 'Ingrese el Importe bruto en numero:'
	Leer ImporteBruto
	// Calcular IVA
	Iva <- ImporteBruto*0.16
	// Calcular subtotal
	Subtotal <- ImporteBruto+iva
	// Calcular IVA retenido
	IvaRetenido <- (Iva*2)/3
	// Calcular ISR retenido
	isrRetenido <- ImporteBruto*0.10
	// Calcular total de retenciones
	TotalRetenciones <- IvaRetenido+IsrRetenido
	// Calcular total del depósito
	TotalDeposito <- Subtotal-TotalRetenciones
	// Mostrar resultados
	Escribir '######################################################'
	Escribir 'Importe bruto: $', redon(ImporteBruto*100)/100 
	Escribir 'IVA: $', redon(Iva*100)/100
	Escribir 'Subtotal: $', redon(Iubtotal*100)/100
	Escribir 'IVA retenido: $', redon(IvaRetenido*100)/100
	Escribir 'ISR retenido: $', redon(IsrRetenido*100)/100
	Escribir 'Total de retenciones: $', redon(TotalRetenciones*100)/100
	Escribir 'Total del depósito: $', redon(TotalDeposito*100)/100
	Escribir '######################################################'
FinAlgoritmo
//###################################################################################//
//Algorimo Semana 1                                                                  //
//Datos a cumplir:                                                                   //
//Solicitar que ingrese importe bruto                                                //
//Solicita el ingreso del importe bruto.                                             //
//Calcula el IVA añadiendo el 16% al importe bruto.                                  //
//Calcula el subtotal sumando el IVA al importe bruto.                               //
//Calcula el IVA retenido, que es dos tercios del IVA.                               //
//Calcula el ISR retenido, que es el 10% del importe bruto.                          //
//Suma el IVA retenido y el ISR retenido para obtener el total de las retenciones.	 //
//Resta el total de las retenciones del subtotal para obtener el total del depósito. //
//Elabora: 010559090 -Argenis Alain Gustavo Padilla Cordoba							 //
//###################################################################################//
