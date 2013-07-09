<?php
/**
 * @file
 * wetkit_custom_formatters.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function wetkit_custom_formatters_custom_formatters_defaults() {
  $export = array();

$formatter = new stdClass();
$formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
$formatter->api_version = 2;
$formatter->name = 'money_canadian';
$formatter->label = 'money_canadian';
$formatter->description = 'Canadian $ , english, français ';
$formatter->mode = 'php';
$formatter->field_types = 'number_decimal, computed';
$formatter->code = 'global $language;

$amount = $variables[\'#items\'][0][\'value\'];

if ($language->language == \'en\') {
    $amount = \'$ \' . number_format($amount, 2, \'.\' , \',\' );
}  elseif ($language->language == \'fr\') {
   $amount = number_format($amount, 2, \',\' , \' \' ) . \' $\';
}

return $amount;
';
$formatter->fapi = '';
$export['money_cad'] = $formatter;
return $export;

}