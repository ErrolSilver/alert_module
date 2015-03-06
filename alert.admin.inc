<?php
/**
 * @file
 *  Defines the form used to configure the 'alert_message' variable
 */

function alert_set_message_form($form, &$form_state) {

  $form['description']['#markup'] =  '<p><strong><em>Alert</em></strong> allows you to generate a custom alert message.</p>';

  $form['alert_custom_message'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom Message'),
    '#description' => t('Input your new alert message.'),
    '#default_value' => variable_get('alert_custom_message_contents'),
  );
  var_dump($form['alert_custom_message']['#default_value']);
  return system_settings_form($form);
}


function alert_set_message_form_submit($form, &$form_state) {
  if(strval($form_state['values']['alert_custom_message'])) {
    variable_set('alert_custom_message_contents', strval($form_state['values']['alert_custom_message']));
  }

  drupal_set_message(t('Wot'));
}
?>
