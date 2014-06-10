<?php
	$nombre = "ATM";
	echo "<br />";
	echo "Bienvenidos a $nombre";

include_once( dirname(__FILE__). "/../Retiros.php"); // directorio superior  
		 
class RetiroException extends Exception {
	  
	  }
 
class CashMachine {
 
   / ** 
      * Los valores de factura disponible en el cajero automático. Considere las cantidades son ilimitadas. 
      * /
      
    private $montos = array(50, 100, 200, 500, 1000);
    private $cash_diponible; 
    private $cash = array();
 
    function __construct() {
        rsort($this->montos);
    }
	
	/ ** 
      * Devuelve los Montos que se debe dar distribuidos es la cantidad y retirar las facturas disponibles, 
      * Reducción al mínimo el número total de cuentas distribuidas. 
      * Ejemplo: getmontos (350) => array (100 => 1, 200 => 1, 50 => 1). 
      * 
      * @ Param int $montodisposicion ¿Cuánto queremos a retirarse del cajero automático?
      * @ Throws RetiroException si la cantidad exacta no puede ser obtenida con los billetes disponibles. 
      * @ Return Array asociativo matriz que representa los proyectos de ley que deben ser distribuidos por el cajero automático. 
      * /
 
	public function getmontos($montodisposicion) {
        $this->cash = array();
        $this->cash_diponible = $montodisposicion;
        while ($this->cash_diponible > 0) {
            if ($this->cash_diponible < min($this->montos)) {
                throw new RetiroException('Sin fondo disponible.');
            }
            $monto = $this->configuremontos();
            $this->cash[] = $monto;
            $this->cash_diponible -= $monto;
        }
        return array_count_values($this->cash);
    }
 
    private function configuremontos() {
        foreach ($this->montos as $monto) {
            $division = $this->cash_diponible / $monto;
            $rest = $this->cash_diponible % $monto;
            if ( ($division >= 1) && ( $rest > (min($this->montos)+1) || ($rest === min($this->montos)) || ($rest === 0) ) ) {
                return $monto;
            }
        } 
        return min($this->montos);
    }
 
}
 
$atm = new CashMachine;
print_r($atm->getmontos(350));

?>
