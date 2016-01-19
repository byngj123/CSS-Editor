<?php
/**
 * @file
 * CSS-Editor Editor Page.
 */

/**
 * Form callback.
 *
 * For 'admin/config/CSS Editor, allows for GUI editing of theme CSS files.
 */
function css_editor_editor_page($form, &$form_state) {

  $form['ce_editor'] = array(
    '#type' => 'textarea',
    '#rows' => 30,
    '#title' => t('CSS file content'),
    /*'#default_value' => variable_get(EMNIES_AD_HOC_QUERY_EXPORTER_PHPDOCX_LOCATION, $default = NULL),*/
    '#description' => t("Use this field to edit the file's CSS"),
  );

  $form['ce_submit'] = array(
    '#type' => 'submit',
    '#default_value' => t('Submit'),
  );

  $form['ce_back'] = array(
    '#type' => 'submit',
    '#default_value' => t('Cancel'),
  );

  $form['#submit'] = array('_emnies_ad_hoc_query_exporter_ahq_template_update_form_submit');
  return $form;
}
