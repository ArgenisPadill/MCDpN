Algoritmo DesgloseImpuestos
	Definir ImporteBruto, Iva, Subtotal, IvaRetenido, IsrRetenido, TotalRetenciones, TotalDeposito Como Real
	Definir esFrontera Como Lógico
	Escribir 'Ingrese el Importe bruto en numero:'
	Leer ImporteBruto
	Escribir '¿Es una transacción en la frontera norte? (1 para Sí, 0 para No):'
	Leer esFrontera
	// Calcular IVA
	Si esFrontera Entonces
		Iva <- ImporteBruto*0.08
	SiNo
		Iva <- ImporteBruto*0.16
	FinSi
	// Calcular subtotal
	Subtotal <- ImporteBruto+Iva
	// Calcular IVA retenido
	IvaRetenido <- (Iva*2)/3
	// Calcular ISR retenido
	IsrRetenido <- ImporteBruto*0.10
	Si esFrontera Entonces
		IsrRetenido <- IsrRetenido*(2/3)
	FinSi
	// Calcular total de retenciones
	TotalRetenciones <- IvaRetenido+IsrRetenido
	// Calcular total del depósito
	TotalDeposito <- Subtotal-TotalRetenciones
	// Mostrar resultados
	Escribir '######################################################'
	Escribir 'Importe bruto: $', redon(ImporteBruto*100)/100
	Escribir 'IVA: $', redon(Iva*100)/100
	Escribir 'Subtotal: $', redon(Subtotal*100)/100
	Escribir 'IVA retenido: $', redon(IvaRetenido*100)/100
	Escribir 'ISR retenido: $', redon(IsrRetenido*100)/100
	Escribir 'Total de retenciones: $', redon(TotalRetenciones*100)/100
	Escribir 'Total del depósito: $', redon(TotalDeposito*100)/100
	Escribir '######################################################'
FinAlgoritmo
