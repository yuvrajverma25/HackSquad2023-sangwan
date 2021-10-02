<?php
 
function counting_sort(&$arr, $min, $max) {
   $count = array();
   for($i = $min; $i <= $max; $i++) {
      $count[$i] = 0;
   }
 
   foreach($arr as $number) {
      $count[$number]++;
   }
   $z = 0;
   for($i = $min; $i <= $max; $i++) {
      while( $count[$i]-- > 0 ) {
         $arr[$z++] = $i;
      }
   }
}
 
$array = array(20,43,65,88,11,33,56,74);
counting_sort($array,11,88);
print_r($array);
 
?>