<?php
/**
 * @file
 * tn_d7_feat_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tn_d7_feat_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
