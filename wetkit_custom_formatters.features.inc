<?php
/**
 * @file
 * wetkit_custom_formatters.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_custom_formatters_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
}
